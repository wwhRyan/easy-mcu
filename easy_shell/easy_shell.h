/**
 * @file easy_shell.h
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief
 * @version 1.02
 * @date 2022-05-16
 *
 * @copyright Copyright@appotronics 2022. All Rights Reserved
 *
 */

#ifndef __CMD_LINE_H__
#define __CMD_LINE_H__

#include "Common.h"
#include "shell_config.h"
#include "dictionary.h"

typedef void (*cmd_func_t)(char, char *);

#define shell_register(str, func)                                 \
    extern dictionary *cmd_shell;                                 \
    __attribute__((constructor)) void shell_register##func()      \
    {                                                             \
        if (cmd_shell == NULL)                                    \
        {                                                         \
            cmd_shell = dictionary_new(INITIAL_EASYSHELL_REGISTER_NUM); \
        }                                                         \
        dictionary_set(cmd_shell, str, func);                     \
    }

extern dictionary *cmd_shell;

void easy_shell_input(char *cmd);
void shell_append(char *cmd, cmd_func_t fp);

#endif
