#ifndef __GLOBAL_H
#define __GLOBAL_H

#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum __aeAppoBool {
    kAppoFalse = 0,
    kAppoTrue = 1
} aeAppoBool;

typedef enum __APPO_TYPE {
    kAppoError,
    kAppoOk
} aeAppoStatus;

typedef enum __TypeId {
    kInt,
    kFloat,
    kString
} aeTypeId;

typedef enum __aeAppoLibStatus {
    kAppoLibError,
    kAppoLibOK
} aeAppoLibStatus;

typedef struct __asMsg {
    char* pData;
    uint16_t length;
} asMsg;

typedef void (*pVoidFuncPvoid)(void*);
typedef void (*lib_VoidFunc_Pvoid)(void*);

#define STATIC static

#endif //__GLOBAL_H
