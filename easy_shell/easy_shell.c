/**
 * @file CmdLine.c
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief 
 * @version 1.02
 * @date 2021-11-01
 * 
 * @copyright Copyright@appotronics 2021. All Rights Reserved
 * 
 */

#include "easy_shell.h"

dictionary *cmd_shell = NULL;

void remove_cmd_tail(char *cmd)
{
    int len = strlen(cmd);

    for (int i = 0; i < len; i++)
    {
        if (cmd[i] == '\r' || cmd[i] == '\n')
        {
            memset(cmd + i, 0, len - i); // ignore other cmds. including \r\n
        }
    }
}

void shell_append(char *cmd, cmd_func_t fp)
{
    if (fp == NULL)
    {
        es_printf("shell_append: fp is NULL!\n");
        return;
    }
    dictionary_set(cmd_shell, cmd, fp);
}

void easy_shell_input(char *cmd)
{
    cmd_func_t fp;
    char argc = 0;
    char argv[MAX_PARAM_NUM + MAX_CHAR_SIZE] = {0};
    char *token = NULL;
    char index = MAX_PARAM_NUM;

    remove_cmd_tail(cmd);

    char tmp[MAX_CHAR_SIZE] = {0};
    strcpy(tmp, cmd);

    // A pointer, which we will be used as the context variable
    // Initially, we will set it to NULL
    char *context = NULL;
    token = strtok_r((char *)tmp, " ", &context);
    while (token != NULL)
    {
        argv[argc] = index;
        strcpy(argv + index, token);
        index += strlen(token) + 1;
        argc++;
        token = strtok_r(NULL, " ", &context); // We pass the context variable to strtok_r
    }

    fp = dictionary_get(cmd_shell, &argv[(uint8_t)argv[0]], NULL);

    if ((void *)fp != NULL)
    {
        fp(argc, argv);
        return;
    }
    else
    {
        es_printf("WRONG_CMD!\r\n");
        return;
    }
}
