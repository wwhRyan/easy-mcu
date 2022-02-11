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

uint16_t cmd_list_cnt;

static int m_FindInputCmdId(const char *inputCmd, const CmdListUnit *cmdList);

// #define CMDLIST_SIZE sizeof(g_CmdList) / sizeof(CmdListUnit)
CmdListUnit g_CmdList[255] = {0};

uint16_t max_cmd_list_size = sizeof(g_CmdList) / sizeof(CmdListUnit);
/**
 * Return cmdSize before flag like ":" or "=", cmdSize contains ":"
 * eg: CatchCmdSizeBeforeFlag("setPid=xxx", "=") = 7(not 6!)
 */
size_t m_CatchCmdSizeBeforeFlag(const char *cmd, char *flag)
{
    size_t ret = 0;
    char *tmp = (char *)malloc(strlen(cmd));
    strcpy(tmp, cmd);
    char *token;
    token = strtok(tmp, flag);
    ret = strlen(token) + 1;
    free(tmp);
    return ret;
}

uint32_t getIndexOfSigns(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return ch - '0';
    }
    else if (ch >= 'A' && ch <= 'F')
    {
        return ch - 'A' + 10;
    }
    else if (ch >= 'a' && ch <= 'f')
    {
        return ch - 'a' + 10;
    }
    return 999;
}

uint32_t hex2dec(unsigned char *source)
{
    uint32_t sum = 0;
    uint32_t t = 1;
    unsigned char i = 0;

    unsigned char len = strlen((char *)source);
    for (i = len; i >= 1; i--)
    {
        sum += t * getIndexOfSigns(*(source + i - 1));
        t *= 16;
    }
    return sum;
}

uint32_t m_CatchCmdSizeAfterFlag(const char *cmd, char *flag)
{
    uint8_t i = 0;
    uint32_t data[2];

    char *tmp = (char *)malloc(strlen((char *)cmd));
    strcpy(tmp, cmd);
    char *token = NULL;

    token = strtok((char *)tmp, flag);
    while (token)
    {
        data[i++] = hex2dec((unsigned char *)token);
        token = strtok(NULL, flag);
    }

    free(tmp);
    return data[1];
}

static int m_FindInputCmdId(const char *inputCmd, const CmdListUnit *cmdList)
{
    for (int i = 0; i < cmd_list_cnt; i++)
    {
        if ((strstr(inputCmd, cmdList[i].CmdString)))
        {
            return i;
        }
    }
    return WRONG_CMD;
}

void ICmdLinesInput(char *cmd)
{
    uint8_t WRONG_asMsg[] = "\0";
    if (strcmp(cmd, (char *)WRONG_asMsg))
    {
        int cmdId = m_FindInputCmdId(cmd, g_CmdList);
        if (cmdId != WRONG_CMD)
        {
            g_CmdList[cmdId].CmdFuncPtr(cmd);
        }
        else
        {
            printf("WRONG_CMD!\r\n");
        }
    }
}
