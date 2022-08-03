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

#include <Common.h>

#define LINE_SIZE 32
#define TEXT_NUMBER (LINE_SIZE - sizeof(uint8_t) - sizeof(uint32_t))
#define HEADER_SIZE 32
#define MAGIC_NUM 0x12344321
#define VERSION 0x00

typedef struct header_t {
    uint32_t check_sum;
    uint32_t magic_num;
    uint32_t version;
    uint32_t start_addr;
    uint32_t total_size;
    uint32_t idx_num; // the total line idx number
    uint32_t head_idx;
    uint32_t tail_idx;
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
