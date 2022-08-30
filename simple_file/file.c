/**
 * @file file.c
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief Suitable for multithread
 * @version 1.02
 * @date 2022-07-27
 *
 * @copyright Copyright@appotronics 2022. All Rights Reserved
 *
 */

#include "file.h"
#include <stdint.h>
#include <string.h>

static uint32_t check_32(void* pData, size_t size)
{
    uint32_t* p = (uint32_t*)pData;
    uint32_t sum = 0;
    for (int i = 0; i < size / sizeof(uint32_t); i++) {
        sum += *p;
        p++;
    }
    return sum;
}

static void header_fill(header_t* pheader, uint32_t start_addr, size_t total_size)
{
    memset(pheader, 0, sizeof(header_t));
    pheader->magic_num = MAGIC_NUM;
    pheader->version = VERSION;
    pheader->start_addr = start_addr;
    pheader->total_size = total_size;
    pheader->idx_num = (total_size - HEADER_SIZE) / LINE_SIZE;
    pheader->head_idx = 0;
    pheader->tail_idx = 0;

    pheader->check_sum = check_32((uint32_t*)pheader + 1, sizeof(header_t) - sizeof(uint32_t));
}

static bool header_check(header_t* pheader)
{

    if (pheader->magic_num != MAGIC_NUM)
        return false;
    if (pheader->check_sum != check_32((uint32_t*)pheader + 1, sizeof(header_t) - sizeof(uint32_t)))
        return false;
    return true;
}

static uint32_t get_addr(file_t* pfile, uint32_t idx)
{
    E_assert(idx <= pfile->header.idx_num - 1);
    return pfile->header.start_addr + HEADER_SIZE + idx * LINE_SIZE;
}

static void file_update(struct file_t* pfile)
{
    E_assert(pfile->header.magic_num);
    pfile->header.check_sum = check_32((uint32_t*)&pfile->header + 1, sizeof(header_t) - sizeof(uint32_t));
    pfile->write(&pfile->header, sizeof(header_t), pfile->header.start_addr);
}

/**
 * @brief head_idx == tail_idx whole file is empty.
 * @brief When the file is full, an IDX will be empty. Because when head and tail coincide, it means empty.
 */
static size_t get_used_idx_num(file_t* pfile)
{
    size_t used_idx_num = 0; // number of idx used.
    if (pfile->header.head_idx >= pfile->header.tail_idx) {
        used_idx_num = pfile->header.head_idx - pfile->header.tail_idx;
    } else {
        used_idx_num = pfile->header.idx_num - (pfile->header.tail_idx - pfile->header.head_idx);
    }
    return used_idx_num;
}

static bool check_file_overflow(file_t* pfile)
{
    if (get_used_idx_num(pfile) == pfile->header.idx_num - 1)
        return true;
    else
        return false;
}

static void remove_oldest_line(file_t* pfile)
{
    if (pfile->header.head_idx == pfile->header.tail_idx)
        return;
    else {
        pfile->header.tail_idx++;
        if (pfile->header.tail_idx == pfile->header.idx_num)
            pfile->header.tail_idx = 0;
    }
}

/**
 * @brief
 *
 * @param pfile file opt pointer
 * @param start_addr start to save the file
 * @param total_size file total size
 * @param read file read func (void* pdata, size_t size, uint32_t addr)
 * @param write file write func (void* pdata, size_t size, uint32_t addr)
 * @param check can be NULL, using internal check sum
 * @return true
 * @return false
 */
bool file_init(file_t* pfile, uint32_t start_addr, size_t total_size,
    void (*read)(void*, size_t, uint32_t), void (*write)(void*, size_t, uint32_t), uint32_t (*check)(void*, size_t))
{
    bool ret = true;
    E_assert(read);
    E_assert(write);
    E_assert(total_size > LINE_SIZE + HEADER_SIZE);

    pfile->write = write;
    pfile->read = read;
    if (check == NULL)
        pfile->check = check_32;
    else
        pfile->check = check;

    pfile->header.start_addr = start_addr;

    header_t tmp_header;
    pfile->read(&tmp_header, sizeof(header_t), start_addr);

    if (header_check(&tmp_header) == true)
        memcpy(&pfile->header, &tmp_header, sizeof(header_t));
    else {
        header_fill(&pfile->header, start_addr, total_size);
        pfile->write(&pfile->header, sizeof(header_t), start_addr);
    }

    return ret;
}

/**
 * @brief remove all lines
 *
 * @param pfile file opt pointer
 * @return true
 * @return false
 */
bool file_remove_all(file_t* pfile)
{
    E_assert(pfile->header.magic_num);

    header_fill(&pfile->header, pfile->header.start_addr, pfile->header.total_size);
    file_update(pfile);
    return true;
}

/**
 * @brief add a line to the head line
 *
 * @param pfile file opt pointer
 * @param pline_input input line pointer
 * @return true
 * @return false
 */
bool file_append_line(file_t* pfile, line_t* pline_input)
{
    E_assert(pfile->header.magic_num);

    if (check_file_overflow(pfile) == true)
        remove_oldest_line(pfile);

    pfile->header.head_idx++;
    if (pfile->header.head_idx == pfile->header.idx_num)
        pfile->header.head_idx = 0;

    pfile->write(pline_input, sizeof(line_t), get_addr(pfile, pfile->header.head_idx));

    file_update(pfile);
    return true;
}

/**
 * @brief only support read LINE_SIZE
 * @brief only read once
 *
 * @param pfile file opt pointer
 * @param pline_read read line buffer pointer
 * @param idx from 0 to (idx max - 1)
 * @return true
 * @return false
 */
bool file_read(file_t* pfile, line_t* pline_read, size_t idx)
{
    E_assert(pfile->header.magic_num);

    if (idx >= pfile->header.idx_num || idx >= get_used_idx_num(pfile)) {
        memset(pline_read, 0, LINE_SIZE);
        strcpy(pline_read->text, "null");
        return false;
    }

    uint32_t idx_read = (pfile->header.head_idx + pfile->header.idx_num - idx) % pfile->header.idx_num;
    pfile->read(pline_read, LINE_SIZE, get_addr(pfile, idx_read));
    return true;
}

static int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

/**
 * @brief burst read line
 *
 * @param pfile file opt
 * @param pline_read line buffer
 * @param size line number
 * @return int the number of line be read
 */
int file_burst_read(file_t* pfile, line_t* pline_read, size_t size)
{
    int number = min(get_used_idx_num(pfile), size);
    for (int i = 0; i < number; i++) {
        file_read(pfile, pline_read, i);
        pline_read++;
    }
    return number;
}

/**
 * @brief get the number of file
 *
 * @param pfile
 * @return int
 */
int file_line_cnt(file_t* pfile)
{
    return get_used_idx_num(pfile);
}
