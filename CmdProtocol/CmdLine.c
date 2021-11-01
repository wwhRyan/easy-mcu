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

#define WRONG_CMD (0xFF)
#define MAX_WRITE_LEN (0x7F)

static void m_hello(const char *cmd, ...);
static void m_getNumber(const char *cmd, ...);
static void m_getMutiNumber(const char *cmd, ...);
static void m_getIndefinitelengthNumber(const char *cmd, ...);

static int m_FindInputCmdId(const char *inputCmd, const CmdListUnit *cmdList);

#define CMDLIST_SIZE sizeof(g_CmdList) / sizeof(CmdListUnit)
CmdListUnit g_CmdList[] =
    {
        {"hello", m_hello},
        {"getNumber", m_getNumber},
        {"getMutiNumber", m_getMutiNumber},
        {"getIndefinitelengthNumber", m_getIndefinitelengthNumber},
};

/**
 * Return cmdSize before flag like ":" or "=", cmdSize contains ":"
 * eg: CatchCmdSizeBeforeFlag("setPid=xxx", "=") = 7(not 6!)
 */
static size_t m_CatchCmdSizeBeforeFlag(const char *cmd, char *flag)
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

static uint32_t getIndexOfSigns(char ch)
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

static uint32_t hex2dec(unsigned char *source)
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

static uint32_t m_CatchCmdSizeAfterFlag(const char *cmd, char *flag)
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
    for (int i = 0; i < CMDLIST_SIZE; i++)
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

/**
                        __   ____                     __   _             
  _____ ____ ___   ____/ /  / __/__  __ ____   _____ / /_ (_)____   ____ 
 / ___// __ `__ \ / __  /  / /_ / / / // __ \ / ___// __// // __ \ / __ \
/ /__ / / / / / // /_/ /  / __// /_/ // / / // /__ / /_ / // /_/ // / / /
\___//_/ /_/ /_/ \__,_/  /_/   \__,_//_/ /_/ \___/ \__//_/ \____//_/ /_/ 
 */

static void m_hello(const char *cmd, ...)
{
    printf("hello\n");
}

static void m_getNumber(const char *cmd, ...)
{
    int data = 0;
    int cmdsize = m_CatchCmdSizeBeforeFlag(cmd, "=");
    sscanf(cmd + cmdsize, "%d", &data);
    printf("%d\n", data);
}

static void m_getMutiNumber(const char *cmd, ...)
{
    int data[8] = {0};
    int cmdsize = m_CatchCmdSizeBeforeFlag(cmd, "=");

    if (8 != sscanf(cmd + cmdsize, "%d,%d,%d,%d,%d,%d,%d,%d",
                    &data[0], &data[1], &data[2], &data[3],
                    &data[4], &data[5], &data[6], &data[7]))
    {
        printf("m_getMutiNumber cmd error!");
        return;
    }

    for (size_t i = 0; i < ARRAY_SIZE(data); i++)
    {
        printf("%d \n", data[i]);
    }
}

static void m_getIndefinitelengthNumber(const char *cmd, ...)
{
    uint8_t i = 0;
    uint32_t data[MAX_WRITE_LEN];
    int cmdsize = m_CatchCmdSizeBeforeFlag(cmd, "=");

    char *tmp = (char *)malloc(strlen((char *)cmd));

    memset(tmp, 0, strlen((char *)tmp));
    memset(data, 0, MAX_WRITE_LEN * sizeof(uint32_t));

    strcpy(tmp, cmd);
    char *token = NULL;
    token = strtok((char *)tmp, ",");

    while (token)
    {
        data[i++] = (hex2dec((unsigned char *)token)) & 0xFFFFFFFF;
        token = strtok(NULL, ",");
    }

    int len = i;
    free(tmp);
}
