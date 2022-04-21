/**
 * @file cxd3554.h
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief 
 * @version 1.02
 * @date 2022-04-21
 * 
 * @copyright Copyright@appotronics 2022. All Rights Reserved
 * 
 */

#ifndef CXD3554_H
#define CXD3554_H

// #include "main.h"
#include "Common.h"

//include/stddef.h:414: note: this is the location of the previous definition
// #define offsetof(struct_t, member) ((int)&((struct_t *)0)->member)

#define container_of(ptr, type, member) (                  \
    {                                                      \
        const typeof(((type *)0)->member) *__mptr = (ptr); \
        (type *)((char *)__mptr - offsetof(type, member)); \
    })

/**
 * @brief get the address of the register
 * @param _BASE_ADDR the base address of the register
 * @param ptr the MCU pointer of the register
 * @param _BLK_T the block struct type
 */
#define REG_ADDR(_BASE_ADDR, _BLK_T, _REG) \
    (_BASE_ADDR + offsetof(_BLK_T, _REG))

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