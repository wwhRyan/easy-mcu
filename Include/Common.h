/**
 * @file Common.h
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief
 * @version 1.02
 * @date 2021-10-22
 *
 * @copyright Copyright@appotronics 2021. All Rights Reserved
 *
 */

#ifndef COMMON_H
#define COMMON_H

#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


/**
 * @brief get size of an array in number of elements
 *
 */
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))
#define ARRAYNUM(arr_name) (uint32_t)(sizeof(arr_name) / sizeof(*(arr_name)))

/* Swap bytes in 32 bit value.  */
#define BSWAP_32(x) \
    (uint32_t)((((uint32_t)(x)&0xff000000) >> 24) | (((uint32_t)(x)&0x00ff0000) >> 8) | (((uint32_t)(x)&0x0000ff00) << 8) | (((uint32_t)(x)&0x000000ff) << 24))

/* Swap bytes in 16 bit value.  */
#define BSWAP_16(x) \
    ((unsigned short int)((((x) >> 8) & 0xff) | (((x)&0xff) << 8)))

#ifdef DEBUG
#define E_assert(condition)                                \
    do {                                                   \
        if (condition)                                     \
            ;                                              \
        else {                                             \
            printf("\nERROR %s:%d\n", __FILE__, __LINE__); \
            for (;;)                                       \
                ;                                          \
        }                                                  \
    } while (0)
#else
#define E_assert(condition)
#endif

#ifdef WIN32
#define GET_TIME(func, ...)                                                       \
    LARGE_INTEGER timestart;                                                      \
    LARGE_INTEGER timeend;                                                        \
    LARGE_INTEGER freq;                                                           \
    do {                                                                          \
        QueryPerformanceFrequency(&freq);                                         \
        double freq_d = (double)freq.QuadPart;                                    \
        QueryPerformanceCounter(&timestart);                                      \
        func(__VA_ARGS__);                                                        \
        QueryPerformanceCounter(&timeend);                                        \
        double time_d = (double)(timeend.QuadPart - timestart.QuadPart) / freq_d; \
        printf("time: %.2f Us\n", time_d * 1000000);                              \
    } while (0)

#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__) //获取文件名 windows下

#endif

#if defined(__CC_ARM)

/**
 * @brief 需要更新SysTick计数最大值，使用cm4函数SysTick_Config(XXX);
 * @note 更改了SysTick重载数值，被测试函数中不能使用依赖SysTick的延时函数。
 * @note 使用RTOS，SysTick在1000U后就会重载。
 */
// #define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__) //获取文件名 linux下
#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__) //获取文件名 windows下

#define GET_TIME(func, ...)                                                                                \
    do {                                                                                                   \
        uint32_t start = 0, end = 0;                                                                       \
        uint32_t backup = SysTick->LOAD + 1;                                                               \
        SysTick_Config(SysTick_LOAD_RELOAD_Msk);                                                           \
        start = (uint32_t)(SysTick->VAL);                                                                  \
        func(__VA_ARGS__);                                                                                 \
        end = (uint32_t)(SysTick->VAL);                                                                    \
        printf("%s-->%s-->%dUs\r\n", __FILENAME__, #func, abs(end - start) / (SystemCoreClock / 1000000)); \
        SysTick_Config(backup);                                                                            \
    } while (0)

#endif

#endif
