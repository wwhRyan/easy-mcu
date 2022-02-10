#ifndef __GLOBAL_H
#define __GLOBAL_H

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>

typedef enum __aeAppoBool
{
	kAppoFalse = 0,
	kAppoTrue = 1
}aeAppoBool;

typedef enum __APPO_TYPE{
	kAppoError,
	kAppoOk
}aeAppoStatus;

typedef enum __TypeId{
	kInt,
	kFloat,
	kString
}aeTypeId;

typedef enum __aeAppoLibStatus{
    kAppoLibError,
    kAppoLibOK
}aeAppoLibStatus;

typedef struct __asMsg {
	char* pData;
	uint16_t length;
}asMsg;

typedef void(*pVoidFuncPvoid)(void *);
typedef void(*lib_VoidFunc_Pvoid)(void*);

#define STATIC static

#endif //__GLOBAL_H

