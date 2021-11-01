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
#define MAX_CMD_SIZE       (0x1F)

typedef void(*CmdFuncProtoType)(const char*, ...);

typedef struct _CmdListUnit {
    char CmdString[MAX_CMD_SIZE];
    CmdFuncProtoType CmdFuncPtr;
}CmdListUnit;

extern CmdListUnit g_CmdList[];

void ICmdLinesInput(char *cmd);

#endif //__CMD_LINE_H__
