/**
 * @file shell_cmd.c
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief
 * @version 1.02
 * @date 2022-05-16
 *
 * @copyright Copyright@appotronics 2022. All Rights Reserved
 *
 *
 * @note this file must contian in the elf file, not in the lib file.
 *       because the lib file will be linked to the elf file, the Reg
 *       ister will not be called in the lib file.
 *
 * @copyright Copyright@appotronics 2022. All Rights Reserved
 *
 */

#include "easy_shell.h"

/**
                        __   ____                     __   _
  _____ ____ ___   ____/ /  / __/__  __ ____   _____ / /_ (_)____   ____
 / ___// __ `__ \ / __  /  / /_ / / / // __ \ / ___// __// // __ \ / __ \
/ /__ / / / / / // /_/ /  / __// /_/ // / / // /__ / /_ / // /_/ // / / /
\___//_/ /_/ /_/ \__,_/  /_/   \__,_//_/ /_/ \___/ \__//_/ \____//_/ /_/
 */

void hello(char argc, char *argv)
{
    es_printf("hello\n");
}

void getnumber(char argc, char *argv)
{
    int data = 0;
    if (argc > 1 && argc < 3)
    {
        sscanf((const char *)&(argv[(uint8_t)argv[1]]), "%d", &data);
        es_printf("%d\n", data);
    }
    else
    {
        es_printf("input a number\n");
        es_printf("getnumber need right arguments!\r\n");
    }
}

void getmutinumber(char argc, char *argv)
{
    if (argc > 1)
    {
        for (size_t i = 1; i < argc; i++)
        {
            es_printf("%d \n", atoi((const char *)&(argv[(uint8_t)argv[i]])));
        }
    }
    else
    {
        es_printf("getmutinumber need right arguments!\r\n");
    }
}

/**
 * @brief ls command
 */
void ls(char argc, char *argv)
{
    if (argc > 1)
    {
        if (!strcmp("cmd", &argv[(uint8_t)argv[1]]))
        {
            // for (int i = 0; i < get_cmd_table_cnt(); i++)
            // {
            //     es_printf("%s", get_cmd_table()[i].CmdString);
            //     es_printf("\r\n");
            // }
            dictionary_dump(cmd_shell, stdout);
        }
        else if (!strcmp("-v", &argv[(uint8_t)argv[1]]))
        {
            es_printf("ls version 1.0.\r\n");
        }
        else if (!strcmp("-h", &argv[(uint8_t)argv[1]]))
        {
            es_printf("useage: ls [options]\r\n");
            es_printf("options: \r\n");
            es_printf("\t -h \t: show help\r\n");
            es_printf("\t -v \t: show version\r\n");
            es_printf("\t cmd \t: show all commands\r\n");
        }
    }
    else
    {
        es_printf("ls need more arguments!\r\n");
    }
}

/**
 * @brief tell user how to use the command
 *
 * @param argc the number of arguments, must larger than 1, the first argument is the command name "test"
 * @param argv char array, index + buffer, index argv[index], buffer argv[(uint8_t)argv[index]]
 */
void test(char argc, char *argv)
{
    int i;
    es_printf("test command:\r\n");
    for (i = 0; i < argc; i++)
    {
        es_printf("paras %d: %s\r\n", i, &(argv[(uint8_t)argv[i]]));
    }
}

shell_register("ls", ls);
shell_register("test", test);
shell_register("hello", hello);
shell_register("getnumber", getnumber);
shell_register("getmutinumber", getmutinumber);
