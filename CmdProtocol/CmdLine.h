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

/**
 * @brief Register a command function
 * 
 * @param cmd_list_cnt how many commands have been registered
 * @param cmd_str registered command string pointer
 * @param cmd_func registered command function pointer
 * @return int 
 * @example CMD_PREINIT(cmd_list_cnt, m_hello_str, m_hello);
 * ----------------------------------------
 * __attribute__((constructor)) int RegisterCmdFuncm_hello()
 * {
 *     extern CmdListUnit g_CmdList[];
 *     extern uint16_t max_cmd_list_size;
 *     if ((cmd_list_cnt >= 0) && (cmd_list_cnt < max_cmd_list_size))
 *     {
 *         g_CmdList[cmd_list_cnt].CmdString = m_hello_str;
 *         g_CmdList[cmd_list_cnt].CmdFuncPtr = m_hello;
 *         cmd_list_cnt++;
 *         return 0;
 *     }
 *     else
 *         return -1;
 * }
 */
#define CMD_PREINIT(cmd_list_cnt, cmd_str, cmd_func)                  \
    __attribute__((constructor)) int RegisterCmdFunc##cmd_func() \
    {                                                            \
        extern CmdListUnit g_CmdList[];                          \
        extern uint16_t max_cmd_list_size;                       \
        if ((cmd_list_cnt >= 0) && (cmd_list_cnt < max_cmd_list_size))     \
        {                                                        \
            g_CmdList[cmd_list_cnt].CmdString = cmd_str;              \
            g_CmdList[cmd_list_cnt].CmdFuncPtr = cmd_func;            \
            cmd_list_cnt++;                                           \
            return 0;                                            \
        }                                                        \
        else                                                     \
            return -1;                                           \
    }

/**
 * @brief Register a command function
 * @param cmd_str string of command, char*, like "hello"
 * @param cmd_func function pointer of command, CmdFuncProtoType, like m_hello
 * @example ICmdRegister("hello", m_hello);
 * ----------------------------------------
 * extern uint16_t cmd_list_cnt; char *m_hello_str = "hello"; CMD_PREINIT(cmd_list_cnt, m_hello_str, m_hello)
 */
#define ICmdRegister(cmd_str, cmd_func) \
    extern uint16_t cmd_list_cnt;            \
    char *cmd_func##_str = cmd_str;     \
    CMD_PREINIT(cmd_list_cnt, cmd_func##_str, cmd_func)

/**

 */

void ICmdLinesInput(char *cmd);
size_t m_CatchCmdSizeBeforeFlag(const char *cmd, char *flag);
uint32_t getIndexOfSigns(char ch);
uint32_t hex2dec(unsigned char *source);
uint32_t m_CatchCmdSizeAfterFlag(const char *cmd, char *flag);

#endif //__CMD_LINE_H__
