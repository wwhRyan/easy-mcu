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
#include <stddef.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

/**
 * @brief get size of an array in number of elements
 *
 */
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))
#define ARRAYNUM(arr_name) (uint32_t)(sizeof(arr_name) / sizeof(*(arr_name)))

#ifdef DEBUG
#define E_assert(condition)                                 \
    do                                                      \
    {                                                       \
        if (condition)                                      \
            ;                                               \
        else                                                \
        {                                                   \
            printf("\nERROR:%s, %d\n", __FILE__, __LINE__); \
            for (;;)                                        \
                ;                                           \
        }                                                   \
    } while (0)
#else
#define E_assert(condition)
#endif

#ifdef WIN32
#define GET_TIME(func, ...)                                                       \
    LARGE_INTEGER timestart;                                                      \
    LARGE_INTEGER timeend;                                                        \
    LARGE_INTEGER freq;                                                           \
    do                                                                            \
    {                                                                             \
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
#define GET_TIME(func, ...)                                                  \
    do                                                                       \
    {                                                                        \
        uint32_t start = 0, end = 0;                                         \
        start = GET_SysTick;                                                 \
        func(__VA_ARGS__);                                                   \
        end = GET_SysTick;                                                   \
        printf("%s-->%s-->%dUs\r\n", __FILENAME__, #func, abs(end - start)); \
    } while (0)

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__) //获取文件名 linux下

#endif

#endif
