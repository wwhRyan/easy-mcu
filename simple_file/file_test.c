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

#include "Common.h"
#include "file.h"
#include "ulog.h"
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define mem_size 1024 /* 1024 / 32 - 1 - 1 = 30 */
uint8_t mem[mem_size * 2];

void mem_read(void* pData, size_t size, uint32_t addr)
{
    memcpy(pData, mem + addr, size);
}

void mem_write(void* pData, size_t size, uint32_t addr)
{
    memcpy(mem + addr, pData, size);
}

void file_base_test(void)
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

    // /* test append all line */
    // for (int i = 0; i < (mem_size - HEADER_SIZE)/LINE_SIZE  -3 ; i++) {
    //     file_append_line(&file_opt, &line1);
    // }

    // for (int i = 0; i < (mem_size - HEADER_SIZE)/LINE_SIZE  -3; i++) {
    //     memset(&temp_line, 0, sizeof(line_t));
    //     file_read(&file_opt, &temp_line, i);
    //     assert(memcmp(&temp_line, &line1, sizeof(line_t)) == 0);
    // }

    // /* test read the second */
    // memset(&temp_line, 0, sizeof(line_t));
    // file_read(&file_opt, &temp_line, (mem_size - HEADER_SIZE)/LINE_SIZE  -2);
    // assert(memcmp(&temp_line, &line2, sizeof(line_t)) == 0);

    // /* test read the first */
    // memset(&temp_line, 0, sizeof(line_t));
    // file_read(&file_opt, &temp_line, (mem_size - HEADER_SIZE)/LINE_SIZE -1);
    // assert(memcmp(&temp_line, &line1, sizeof(line_t)) == 0);

    // /* test read over max idx num */
    // assert(file_read(&file_opt, &temp_line, (mem_size - HEADER_SIZE)/LINE_SIZE -1 == true));
    // assert(file_read(&file_opt, &temp_line, (mem_size - HEADER_SIZE)/LINE_SIZE == false));

    // /* test file remove the last line when overflow */
    // file_append_line(&file_opt, &line3);

    // memset(&temp_line, 0, sizeof(line_t));
    // file_read(&file_opt, &temp_line, (mem_size - HEADER_SIZE)/LINE_SIZE -1);
    // assert(memcmp(&temp_line, &line2, sizeof(line_t)) == 0);

    // memset(&temp_line, 0, sizeof(line_t));
    // file_read(&file_opt, &temp_line, 0);
    // assert(memcmp(&temp_line, &line3, sizeof(line_t)) == 0);

    printf("test success!\n");
}

void char_replace(char* str, char dest, char new_char)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == dest)
            str[i] = new_char;
    }
}

void my_console_logger(ulog_level_t severity, char* msg)
{
    printf("%s.%s", ulog_level_name(severity), msg);
}

int source_time = 0;
file_t file_obj = { 0 };

void my_file_logger(ulog_level_t severity, char* msg)
{
    line_t new_line;
    new_line.level = severity;
    new_line.time = source_time;
    strncpy(new_line.text, msg, TEXT_NUMBER);
    char_replace(new_line.text, ' ', '_');
    char_replace(new_line.text, ',', '_');
    char_replace(new_line.text, '\n', '\0');
    file_append_line(&file_obj, &new_line);
}

void file_log_test(void)
{
    file_init(&file_obj, mem_size, mem_size,
        mem_read, mem_write, NULL);
    ULOG_INIT();
    ULOG_SUBSCRIBE(my_console_logger, ULOG_DEBUG_LEVEL);
    ULOG_SUBSCRIBE(my_file_logger, ULOG_WARNING_LEVEL);
    ULOG_INFO("ULOG init\n"); // logs to file and console
    ULOG_WARNING("test.\n");
    ULOG_ERROR("red ntc %d error.\n", 56);
    ULOG_ERROR("cw %#X error.\n", 0x999);

    line_t line_tmp[10] = { 0 };
    int number = file_burst_read(&file_obj, line_tmp, ARRAY_SIZE(line_tmp));
    for (int i = 0; i < number; i++) {
        printf("%s.%d.%s\n", ulog_level_name(line_tmp[i].level), line_tmp[i].time, line_tmp[i].text);
    }
}

int main(int argc, char** argv)
{
    file_base_test();
    file_log_test();
    return 0;
}
