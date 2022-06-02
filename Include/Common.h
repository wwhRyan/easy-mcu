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

#define E_assert(condition)                                   \
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

// #define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)   //获取文件名 linux下
#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__) //获取文件名 windows下

#endif
