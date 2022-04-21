/**
 * @file main.c
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief 
 * @version 1.02
 * @date 2022-04-21
 * 
 * @copyright Copyright@appotronics 2022. All Rights Reserved
 * 
 */

#include "Common.h"
#include "cxd3554.h"

extern misc_t misc;

void main()
{
    // misc.reg00.byte = 0x00;
    printf("misc.reg00 is addr = 0x%04x\n", MISC_REG_ADDR(reg00));
    printf("misc.reg00.byte = 0x%02x\n", misc.reg00.byte);
}