/**
 * @file CmdLine.h
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief 
 * @version 1.02
 * @date 2021-11-01
 * 
 * @copyright Copyright@appotronics 2021. All Rights Reserved
 * 
 */

#ifndef __CMD_LINE_H__
#define __CMD_LINE_H__

#include "../Include/Common.h"
#define MAX_CMD_SIZE (0x1F)
#define WRONG_CMD (0xFF)
#define MAX_WRITE_LEN (0x7F)

typedef void (*CmdFuncProtoType)(const char *, ...);

typedef struct _CmdListUnit
{
    char *CmdString;
    CmdFuncProtoType CmdFuncPtr;
} CmdListUnit;

extern CmdListUnit g_CmdList[];

#define CMD_PREINIT(cmd_cnt, cmd_str, cmd_func)              \
    __attribute__((constructor)) int RegisterCmdFunc##cmd_func()  \
    {                                                        \
        extern CmdListUnit g_CmdList[];                      \
        extern uint16_t max_cmd_list_size;                   \
        if ((cmd_cnt >= 0) && (cmd_cnt < max_cmd_list_size)) \
        {                                                    \
            g_CmdList[cmd_cnt].CmdString = cmd_str;          \
            g_CmdList[cmd_cnt].CmdFuncPtr = cmd_func;        \
            cmd_cnt++;                                       \
            return 0;                                        \
        }                                                    \
        else                                                 \
            return -1;                                       \
    }

/**
 * @brief Register a command function
 * @param cmd_str string of command, char*
 * @param cmd_func function pointer of command, CmdFuncProtoType
 */
#define ICmdRegister(cmd_str, cmd_func) \
    extern uint16_t cmd_cnt;            \
    CMD_PREINIT(cmd_cnt, cmd_str, cmd_func)

void ICmdLinesInput(char *cmd);
size_t m_CatchCmdSizeBeforeFlag(const char *cmd, char *flag);
uint32_t getIndexOfSigns(char ch);
uint32_t hex2dec(unsigned char *source);
uint32_t m_CatchCmdSizeAfterFlag(const char *cmd, char *flag);

#endif //__CMD_LINE_H__
