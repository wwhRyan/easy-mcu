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

// #define container_of(ptr, type, member) (                  \
//     {                                                      \
//         const typeof(((type *)0)->member) *__mptr = (ptr); \
//         (type *)((char *)__mptr - offsetof(type, member)); \
//     })

/**
 * @brief get the address of the register
 * @param _BASE_ADDR the base address of the register
 * @param ptr the MCU pointer of the register
 * @param _BLK_T the block struct type
 */
#define REG_ADDR(_BASE_ADDR, _BLK_T, _REG) \
    (_BASE_ADDR + offsetof(_BLK_T, _REG))

#include "ckg.h"
#include "ddr2.h"
#include "frc.h"
#include "ipg.h"
#include "led.h"
#include "lpddr2.h"
#include "mini-dsi.h"
#include "pi.h"
#include "tx.h"
#include "misc.h"
#include "i2cm.h"
#include "mipi.h"
#include "inp.h"
#include "tpg.h"
#include "kst.h"
#include "bp.h"
#include "sxrd241_page0.h"
#include "sxrd241_page1.h"

#define CXD3554_ADDR 0x74
#define CXD3554_WRITE (CXD3554_ADDR | 0x00)
#define CXD3554_READ (CXD3554_ADDR | 0x01)

#define SXRD241_ADDR 0x92

#endif