/**
 * @file file_test.c
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief
 * @version 1.02
 * @date 2022-07-28
 *
 * @copyright Copyright@appotronics 2022. All Rights Reserved
 *
 */

#include "file.h"
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#define mem_size 1024 /* 1024 / 32 - 1 - 1 = 30 */
uint8_t mem[mem_size];

void mem_read(void* pData, size_t size, uint32_t addr)
{
    memcpy(pData, mem + addr, size);
}

void mem_write(void* pData, size_t size, uint32_t addr)
{
    memcpy(mem + addr, pData, size);
}

int main(int argc, char** argv)
{
    file_t file_opt;
    file_init(&file_opt, 0, mem_size,
        mem_read, mem_write, NULL);

    line_t line1 = {
        .level = 0,
        .time = 1000,
        .text = "line1_1234567890_0987654321"
    };

    line_t line2 = {
        .level = 0,
        .time = 1000,
        .text = "line2_0987654321_0987654321"
    };

    line_t line3 = {
        .level = 3,
        .time = 1000,
        .text = "line3_1234554321_0987654321"
    };

    line_t temp_line;

    /* test base append */
    file_append_line(&file_opt, &line1);
    memset(&temp_line, 0, sizeof(line_t));
    file_read(&file_opt, &temp_line, 0);
    assert(memcmp(&temp_line, &line1, sizeof(line_t)) == 0);

    /* test read null line */
    file_read(&file_opt, &temp_line, 1);
    assert(strcmp(temp_line.text, "null") == 0);

    /* test append 2 line */
    file_append_line(&file_opt, &line2);
    memset(&temp_line, 0, sizeof(line_t));
    file_read(&file_opt, &temp_line, 0);
    assert(memcmp(&temp_line, &line2, sizeof(line_t)) == 0);

    /* test append all line */
    for (int i = 0; i < 30 - 2; i++) {
        file_append_line(&file_opt, &line1);
    }

    for (int i = 0; i < 30 - 2; i++) {
        memset(&temp_line, 0, sizeof(line_t));
        file_read(&file_opt, &temp_line, i);
        assert(memcmp(&temp_line, &line1, sizeof(line_t)) == 0);
    }

    /* test read the second */
    memset(&temp_line, 0, sizeof(line_t));
    file_read(&file_opt, &temp_line, 28);
    assert(memcmp(&temp_line, &line2, sizeof(line_t)) == 0);

    /* test read the first */
    memset(&temp_line, 0, sizeof(line_t));
    file_read(&file_opt, &temp_line, 29);
    assert(memcmp(&temp_line, &line1, sizeof(line_t)) == 0);

    /* test read over max idx num */
    assert(file_read(&file_opt, &temp_line, 29) == true);
    assert(file_read(&file_opt, &temp_line, 31) == false);

    /* test file remove the last line when overflow */
    file_append_line(&file_opt, &line3);

    memset(&temp_line, 0, sizeof(line_t));
    file_read(&file_opt, &temp_line, 29);
    assert(memcmp(&temp_line, &line2, sizeof(line_t)) == 0);

    memset(&temp_line, 0, sizeof(line_t));
    file_read(&file_opt, &temp_line, 0);
    assert(memcmp(&temp_line, &line3, sizeof(line_t)) == 0);

    printf("test success!\n");
    return 0;
}
