/**
 * @file CmdlineRegister.c
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief 
 * @version 1.02
 * @date 2022-02-17
 * 
 * @note this file must contian in the elf file, not in the lib file.
 *       because the lib file will be linked to the elf file, the Reg
 *       ister will not be called in the lib file.
 * 
 * @copyright Copyright@appotronics 2022. All Rights Reserved
 * 
 */

#include "CmdLine.h"

/**
                        __   ____                     __   _             
  _____ ____ ___   ____/ /  / __/__  __ ____   _____ / /_ (_)____   ____ 
 / ___// __ `__ \ / __  /  / /_ / / / // __ \ / ___// __// // __ \ / __ \
/ /__ / / / / / // /_/ /  / __// /_/ // / / // /__ / /_ / // /_/ // / / /
\___//_/ /_/ /_/ \__,_/  /_/   \__,_//_/ /_/ \___/ \__//_/ \____//_/ /_/ 
 */

static void hello(char argc, char *argv)
{
    cmd_printf("hello\n");
}

static void getnumber(char argc, char *argv)
{
    int data = 0;
    if (argc > 1 && argc < 3)
    {
        sscanf((const char *)&(argv[argv[1]]), "%d", &data);
        cmd_printf("%d\n", data);
    }
    else
    {
        cmd_printf("input a number\n");
        cmd_printf("getnumber need right arguments!\r\n");
    }
}

static void getmutinumber(char argc, char *argv)
{
    if (argc > 1)
    {
        for (size_t i = 1; i < argc; i++)
        {
            cmd_printf("%d \n", atoi((const char *)&(argv[argv[i]])));
        }
    }
    else
    {
        cmd_printf("getmutinumber need right arguments!\r\n");
    }
}

/**
 * @brief ls command
 */
void ls(char argc, char *argv)
{
    if (argc > 1)
    {
        if (!strcmp("cmd", &argv[argv[1]]))
        {
            for (int i = 0; i < get_cmd_table_cnt(); i++)
            {
                cmd_printf("%s", get_cmd_table()[i].CmdString);
                cmd_printf("\r\n");
            }
        }
        else if (!strcmp("-v", &argv[argv[1]]))
        {
            cmd_printf("ls version 1.0.\r\n");
        }
        else if (!strcmp("-h", &argv[argv[1]]))
        {
            cmd_printf("useage: ls [options]\r\n");
            cmd_printf("options: \r\n");
            cmd_printf("\t -h \t: show help\r\n");
            cmd_printf("\t -v \t: show version\r\n");
            cmd_printf("\t cmd \t: show all commands\r\n");
        }
    }
    else
    {
        cmd_printf("ls need more arguments!\r\n");
    }
}

/**
 * @brief tell user how to use the command
 * 
 * @param argc the number of arguments, must larger than 1, the first argument is the command name "test"
 * @param argv char array, index + buffer, index argv[index], buffer argv[argv[index]]
 */
void test(char argc, char *argv)
{
    int i;
    cmd_printf("test command:\r\n");
    for (i = 0; i < argc; i++)
    {
        cmd_printf("paras %d: %s\r\n", i, &(argv[argv[i]]));
    }
}

ICmdRegister("ls", ls);
ICmdRegister("test", test);
ICmdRegister("hello", hello);
ICmdRegister("getnumber", getnumber);
ICmdRegister("getmutinumber", getmutinumber);
