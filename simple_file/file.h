/**
 * @file file.h
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief
 * @version 1.02
 * @date 2022-07-27
 *
 * @copyright Copyright@appotronics 2022. All Rights Reserved
 *
 */
#ifndef _FILE_H_
#define _FILE_H_
#include <Common.h>

#define LINE_SIZE 32
#define TEXT_NUMBER (LINE_SIZE - sizeof(uint8_t) - sizeof(uint32_t))
#define HEADER_SIZE 32
#define MAGIC_NUM 0x12344321
#define VERSION 0x00

typedef struct header_t {
    uint32_t check_sum; /* header check sum */
    uint32_t magic_num; /* fixed magic number for check */
    uint32_t version; /* file version */
    uint32_t start_addr; /* line start addr */
    uint32_t total_size; /* the total line size of bytes */
    uint32_t idx_num; /* the total line idx number */
    uint32_t head_idx; /* the head index of the stored line */
    uint32_t tail_idx; /* the end index of the stored line */
} header_t;

typedef struct file_t {
    header_t header;
    void (*read)(void*, size_t, uint32_t);
    void (*write)(void*, size_t, uint32_t);
    uint32_t (*check)(void*, size_t);
} file_t;

#pragma pack(1)
typedef struct line_t {
    uint8_t level;
    uint32_t time;
    char text[TEXT_NUMBER];
} line_t;
#pragma pack()

bool file_init(file_t* file, uint32_t start_addr, size_t total_size,
    void (*read)(void*, size_t, uint32_t), void (*write)(void*, size_t, uint32_t), uint32_t (*check)(void*, size_t));
bool file_remove_all(file_t* file);
bool file_append_line(file_t* file, line_t* line_write);
bool file_read(file_t* file, line_t* line_read, size_t idx);
int file_burst_read(file_t* pfile, line_t* pline_read, size_t size);
int file_line_cnt(file_t* file);

#endif
