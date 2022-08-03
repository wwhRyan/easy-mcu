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

#include "Common.h"

/* Cmdlines Config */
#define MAX_CMDLINE_REGISTER_NUM (30) // max number of cmdline register table
#define MAX_CMD_SIZE (0xFF) // max size of single cmdline
#define WRONG_CMD (0xFF) // wrong cmd
#define CMD_PARAS_MAX_NUM 10 // max number of parameters
#define cmd_printf printf

typedef void (*cmd_func_t)(char, char*);

typedef struct _cmd_table_t {
    char* CmdString;
    cmd_func_t CmdFuncPtr;
} cmd_table_t;

extern cmd_table_t st_cmd_table[];

/**
 * @brief Register a command function
 *
 * @param cmd_table_cnt how many commands have been registered
 * @param p_str registered command string pointer
 * @param p_func registered command function pointer
 * @return int
 * @example CMD_PREINIT(cmd_table_cnt, m_hello_str, m_hello);
 * ----------------------------------------
 * __attribute__((constructor)) int RegisterCmdFuncm_hello()
 * {
 *     extern cmd_table_t st_cmd_table[];
 *     extern uint16_t max_cmd_list_size;
 *     if ((cmd_table_cnt >= 0) && (cmd_table_cnt < max_cmd_list_size))
 *     {
 *         st_cmd_table[cmd_table_cnt].CmdString = m_hello_str;
 *         st_cmd_table[cmd_table_cnt].CmdFuncPtr = m_hello;
 *         cmd_table_cnt++;
 *         return 0;
 *     }
 *     else
 *         return -1;
 * }
 */
#define CMD_PREINIT(cmd_table_cnt, p_str, p_func)            \
    __attribute__((constructor)) int RegisterCmd##p_func()   \
    {                                                        \
        extern cmd_table_t st_cmd_table[];                   \
        extern uint16_t max_cmd_list_size;                   \
        if (cmd_table_cnt < max_cmd_list_size) {             \
            st_cmd_table[cmd_table_cnt].CmdString = p_str;   \
            st_cmd_table[cmd_table_cnt].CmdFuncPtr = p_func; \
            cmd_table_cnt++;                                 \
            return 0;                                        \
        } else                                               \
            return -1;                                       \
    }

/**
 * @brief Register a command function
 * @param cmd_str string of command, char*, like "hello"
 * @param cmd_func function pointer of command, cmd_func_t, like m_hello
 * @example ICmdRegister("hello", m_hello);
 * ----------------------------------------
 * extern uint16_t cmd_table_cnt; char *m_hello_str = "hello"; CMD_PREINIT(cmd_table_cnt, m_hello_str, m_hello)
 */
#define ICmdRegister(cmd_str, cmd_func) \
    extern uint16_t cmd_table_cnt;      \
    char* cmd_func##_str = cmd_str;     \
    CMD_PREINIT(cmd_table_cnt, cmd_func##_str, cmd_func)

/**

 */

void ICmdLinesInput(char* cmd);
cmd_table_t* get_cmd_table(void);
uint16_t get_cmd_table_cnt(void);

#endif //__CMD_LINE_H__
