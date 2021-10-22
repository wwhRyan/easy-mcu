/*
 * @File: cmdline.h
 * @Author: gengliang(gengliang@appotronics.cn)
 * @Brief:  
 * @Date: 2021-10-15 12:19:16
 * @LastEditTime: 2021-10-15 21:00:50
 * @Copyright: Copyright (c) 2021
 */

#ifndef __APPO_CMD_LINE_H
#define __APPO_CMD_LINE_H

#include "GlobalDef.h"

#define MAX_CMD_SIZE       (0x1F)

typedef void(*CmdFuncProtoType)(const char*, ...);

typedef struct _CmdListUnit {
    char CmdString[MAX_CMD_SIZE];
    CmdFuncProtoType CmdFuncPtr;
}CmdListUnit;

extern CmdListUnit g_CmdList[];

void ICmdLinesInput(char *cmd);
void m_3555_Data_Write(uint16_t reg_addr, uint32_t *reg_data, uint16_t data_size, uint8_t access_byte);
void m_3555_Data_Read(uint16_t reg_addr, uint16_t size);

#endif //__APPO_CMD_LINE_H
