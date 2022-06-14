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

#include "CmdLine.h"

uint16_t cmd_table_cnt;
cmd_table_t st_cmd_table[MAX_CMDLINE_REGISTER_NUM] = {0};
uint16_t max_cmd_list_size = sizeof(st_cmd_table) / sizeof(cmd_table_t);

static int m_FindInputCmdId(const char *input_cmd, const cmd_table_t *cmd_table);

static int m_FindInputCmdId(const char *input_cmd, const cmd_table_t *cmd_table)
{
    char *token;
    int len;
    token = strstr(input_cmd, " ");
    if (token == NULL)
    {
        len = strlen(input_cmd);
    }
    else
    {
        len = token - input_cmd;
    }

    for (int i = 0; i < cmd_table_cnt; i++)
    {
        // if ((strstr(input_cmd, cmd_table[i].CmdString)))
        // {
        //     return i;
        // }
        if ((strncmp(input_cmd, cmd_table[i].CmdString, len) == 0))
        {
            return i;
        }
    }
    return WRONG_CMD;
}

cmd_table_t *get_cmd_table()
{
    return st_cmd_table;
}

uint16_t get_cmd_table_cnt()
{
    return cmd_table_cnt;
}

cmd_func_t cmd_search_func(char *cmd)
{
    uint8_t WRONG_asMsg[] = "\0";
    if (strlen(cmd) > MAX_CMD_SIZE)
    {
        printf("too long cmd!\n");
        return NULL;
    }
    else if (strcmp(cmd, (char *)WRONG_asMsg))
    {
        int cmdId = m_FindInputCmdId(cmd, st_cmd_table);
        if (cmdId != WRONG_CMD)
        {
            return st_cmd_table[cmdId].CmdFuncPtr;
        }
        else
        {
            return NULL;
        }
    }
    else
    {
        return NULL;
    }
}

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

void ICmdLinesInput(char *cmd)
{
    cmd_func_t fp;

    char argc = 0;
    char argv[CMD_PARAS_MAX_NUM + MAX_CMD_SIZE] = {0};
    char *token = NULL;
    char index = CMD_PARAS_MAX_NUM;

    char tmp[MAX_CMD_SIZE] = {0};
    strcpy(tmp, cmd);
    remove_cmd_tail(tmp);

    fp = cmd_search_func(tmp);
    if (fp != NULL)
    {
    }
    else
    {
        printf("WRONG_CMD!\r\n");
        return;
    }

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

    fp(argc, argv);
}
