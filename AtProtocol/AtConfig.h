/*
 * @file: AtConfig.h
 * @author: gengliang (gengliang@appotronics.cn)
 * @brief:
 * @date: 2021-07-28
 */

#ifndef __AT_CONFIG_H
#define __AT_CONFIG_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

//#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Service Adapter */

#define __AtDebugPrintf printf
#define __AtMalloc malloc
#define __AtFree free

#define aeAtBool bool
#define kAtTrue true
#define kAtFalse false

/* User-define values */
/* AT commands' keys and values shall be allocated into AtObjUnits[],
   and the total string length shall be controlled. */
#define MAX_KV_COUPLES_NUM (10) ///< k-v couples' num
#define MAX_ATCMD_STR_LEN (1280) ///< k-v string maximum length
#define MAX_FEEDBACK_STR_LEN (255) ///< k-v string maximum length

#ifdef __cplusplus
}
#endif
#endif /* __AT_CONFIG_H */
