/*
 * @file: AtInterConfig.h
 * @author: gengliang (gengliang@appotronics.cn)
 * @brief:  
 * @date: 2021-07-28 
 */

#ifndef __AT_INTERNAL_CONFIG_H
#define __AT_INTERNAL_CONFIG_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "AtConfig.h"

#ifdef __cplusplus
extern "C"{
#endif

/* TEST MACRO */
#ifdef __TEST__
#define STATIC 
#else
#define STATIC static
#endif

/* Service Adapers */
#ifdef __TEST__
#define AtTracePrintf(format,...) __AtDebugPrintf(format"\n[file %s:%d],[function: %s]\n", ##__VA_ARGS__, __FILE__, __LINE__, __func__)
#define AtDebugPrintf(format,...) __AtDebugPrintf(format, ##__VA_ARGS__)
#define AtMalloc(pType, pData, size)                                    \
pData = (pType)__AtMalloc(size);                                  \
__IInputMallocAddrToHashTable(pData, gMalloc_addrs, gMalloc_table_len);\
AtDebugPrintf("No.%d--->malloc name:%s\naddr:%p\n", ++gMalloc_cnt, #pData, pData) 

#define AtFree(ptr)                                       \
__AtFree(ptr);                                                \
__IPopMallocAddrFromHashTable(ptr, gMalloc_addrs, gMalloc_table_len);\
AtDebugPrintf("No.%d--->free name:%s\n", gMalloc_cnt--, #ptr)

#else
// #define AtTracePrintf(format,...) __AtDebugPrintf(format"\n[file %s:%d],[function: %s]\n", ##__VA_ARGS__, __FILE__, __LINE__, __func__)
// #define AtDebugPrintf(format,...) __AtDebugPrintf(format, ##__VA_ARGS__)
#define AtTracePrintf(format,...)
#define AtDebugPrintf(format,...)
#define MarkPrintf(format,...)  printf(format"[ %s - %d ]\r\n", ##__VA_ARGS__,__func__, __LINE__)

#define AtMalloc(pType, pData, size) \
pData = (pType)__AtMalloc(size);     \
__IInputMallocAddrToHashTable(pData, gMalloc_addrs, gMalloc_table_len)

#define AtFree(ptr)                  \
__AtFree(ptr);                       \
__IPopMallocAddrFromHashTable(ptr, gMalloc_addrs, gMalloc_table_len)

#endif

#ifdef WIN32
#define AtStrtok strtok_s
#else
#define AtStrtok strtok_r
#endif

/* AT protocol class declaration */
typedef struct __asAtProtocol asAtProtocol;

/* AT Input String  */
typedef struct __asAtStr{
    char *pData;
    uint16_t size;
}asAtStr;

/* AT Cmd Type */
typedef enum __aeAtCmdType{
    kAtControlType,
    kAtQueryType,
    kAtWrongType
}aeAtCmdType;

/* AT Value Type */
typedef enum __aeAtValueType {
    kAtValueStr,      ///< Default type.
    kAtValueInt,
    kAtValueFloat,
    kAtValueEnum,
}aeAtValueType;

/* AT hash table unit prototype. */
typedef struct __asAtHashUnit{
    unsigned var;
    void* ptr;
}asAtHashUnit;

/* AT hash index and check value couples. */
typedef struct __asAtHashCheck{
    uint16_t index;
    uint8_t check_val;
}asAtHashCheck;


/* AT Key value couple. */
typedef struct __asAtKvUnit{
    asAtStr key;
    asAtStr value;
}asAtKvUnit;

/* AT Key value List */
typedef struct __asAtKvList{
    asAtKvUnit *pList;
    uint8_t size;
}asAtKvList;

/* AT Error code */
typedef enum __aeAtAtStatus{
    kAtOk,                       
    kAtError,

    /* At format error */                     
    kAtInvalidCmd,       
    kAtCmdNotSupport,             
    kAtInvalidOperator,
    kAtInvalidKey,
    kAtNotAllow,
    kAtNoOperation,
    kAtKeyValueOverflow,

    /* At decode processing error */
    kAtEventError,
    kAtUndefinedError
}aeAtErrorCode;



/* Function Pointers */
typedef void (*p_VoidFuncpVoid)(void *);
typedef void(*p_VoidFuncpChar)(const char*, ...);
typedef void (*APPO_FUNC_SOLT)(asAtKvList*, asAtStr*);

/* AT object */
typedef struct __asAtObj{
    aeAtCmdType type;
    asAtStr *pAt_str;
    asAtKvList *pKv_list;
    APPO_FUNC_SOLT pFunc;
    aeAtErrorCode error_code;
    p_VoidFuncpChar feedbackFunc;
    asAtStr *pFeedback_at_str;
}asAtObj;

/* Help Global variables */
extern uint8_t gMalloc_cnt;
extern asAtHashUnit gMalloc_addrs[];
extern uint8_t gMalloc_table_len;

/* Help Macros */
#define pVoid_TO_pAtStr(pVoid)          ((asAtStr*)pVoid)
#define pVoid_To_pAtObj(pVoid)          ((asAtObj*)pVoid)
#define pVoid_To_pAtKvList(pVoid)       ((asAtKvList*)pVoid)
#define pVoid_To_pAtProtocol(pVoid)     ((asAtProtocol*)pVoid)
#define AtDebugAnchor()                 AtTracePrintf("\n-------------------\n")

#define APPO_ATFUNC_PREINIT(atindex)\
__attribute__((constructor)) int LoadAtFunc##atindex() {\
    extern asCmdListUnit gsCmdList[];                   \
    extern uint16_t gScmd_list_len;                     \
	if ((atindex >= 0) && (atindex < gScmd_list_len)) {\
    	gsCmdList[atindex].func = appo_##atindex##_handler;\
		return 0;\
	}\
	else\
		return -1;\
}
#define APPO_ATFUNC_DECLARE(atindex)\
void appo_##atindex##_handler(asAtKvList*, asAtStr*);


#ifdef __cplusplus
}
#endif
#endif /* __AT_INTERNAL_CONFIG_H */
