/*
 * @file: AtUtils.h 
 * @author: gengliang (gengliang@appotronics.cn)
 * @brief:  
 * @date: 2021-07-28 
 */

#ifndef __AT_UTILS_H
#define __AT_UTILS_H

#include "AtConfig.h"
#include "AtInternalConfig.h"
#include "AtCmdHashTable.h"
#include "AtKeyHashTable.h"
#include "stateMachine.h"
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
extern "C"{
#endif 

#ifdef __TEST__

STATIC aeAtBool m_ParseAtKeyValues(asAtObj *obj, char* str_kvs, uint MAX_KVS_STR_LEN);
STATIC int m_SplitStr2Tokens(char* s, char *delimeter, char **tokens, int max_token_num);
STATIC asAtHashCheck m_CalculateHashCheck(const char* input_str, uint8_t table_len_bits, uint32_t table_len);
STATIC int m_ReHash(uint16_t index, uint8_t var, uint8_t max_collide_num, asAtHashUnit* hash_table, uint16_t table_len);
#endif

/* Extern Variable */

/* At Key or Cmd flag for Hash check. */
typedef enum __aeAtCmdKeyFlag{
    kAtCmdFlag,
    kAtKeyFlag
}aeAtCmdKeyFlag;

/* At Key-Value list type */
typedef struct __asAtKvUnit_Int{
    aeKeyName key;
    int value;
}asAtKvUnit_Int;

typedef struct __asAtKvUnit_Float{
    aeKeyName key;
    float value;
}asAtKvUnit_Float;

typedef struct __asAtKvUnit_Str{
    aeKeyName key;
    char* value;
}asAtKvUnit_Str;

typedef struct __asAtKvUnit_Enum{
    aeKeyName key;
    aeKeyName value;
}asAtKvUnit_Enum;

void __ICastKvListTo_kAtValueInt(asAtKvList* kv_list_str, asAtKvUnit_Int* kv_list,size_t array_size);
void __ICastKvListTo_kAtValueFloat(asAtKvList* kv_list_str, asAtKvUnit_Float* kv_list,size_t array_size);
void __ICastKvListTo_kAtValueStr(asAtKvList* kv_list_str, asAtKvUnit_Str* kv_list,size_t array_size);
void __ICastKvListTo_kAtValueEnum(asAtKvList* kv_list_str, asAtKvUnit_Enum* kv_list,size_t array_size);

int __IGetHashIndex(aeAtCmdKeyFlag flag, char* input_str);

aeAtValueType __IGetValueType(int index);

aeAtBool __ICheckCmdValid(char* input_cmd);

APPO_FUNC_SOLT __IGetCmdOperation(char* input_cmd);

void __IRaiseNewEvent(asEvent* curr_event, int type, void* data);

void __IRaiseAtError(aeAtErrorCode error_code);

aeAtErrorCode __ICheckAtErrorCode(void);

aeAtCmdType __IGetAtCmdType(char* input_at_cmd_kv);

aeAtBool __ICheckAtCmdFormatAndLoadAtObj(asAtObj *pObj);

aeAtBool __IInputMallocAddrToHashTable(void* ptr, asAtHashUnit *addr_hash_table, uint8_t table_len);

int __IGetMallocedPtrIndex(void* ptr, asAtHashUnit *addr_hash_table, uint8_t table_len);

aeAtBool __IPopMallocAddrFromHashTable(void *ptr, asAtHashUnit *addr_hash_table, uint8_t table_len);

void __IPrintCurrMallocsAndIfClear(aeAtBool clear_flag, asAtHashUnit *addr_hash_table, uint8_t table_len);

#ifdef __cplusplus
}
#endif 


#endif /* __AT_UTILS_H */
