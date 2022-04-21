/**
 * @file misc.h
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief 
 * @version 1.02
 * @date 2022-04-21
 * 
 * @copyright Copyright@appotronics 2022. All Rights Reserved
 * 
 */

#ifndef __MISC_H__
#define __MISC_H__

#define MISC_ADDR 0x0000
#define MISC_REG_ADDR(reg) REG_ADDR(MISC_ADDR, misc_t, reg)

union REG_00
{
    uint8_t byte;
    struct
    {
        uint8_t gmport16_oe : 1;
        uint8_t gmport17_oe : 1;
        uint8_t gmport18_oe : 1;
        uint8_t gmport19_oe : 1;
        uint8_t gmport20_oe : 1;
        uint8_t : 3;
    };
};

typedef struct MISC_T
{
    union REG_00 reg00;
} misc_t;

#endif