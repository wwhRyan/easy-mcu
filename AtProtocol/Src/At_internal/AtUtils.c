#include "AtUtils.h"
#include <stdint.h>

/* ________      __          __     _    __          
  / ____/ /___  / /_  ____ _/ /    | |  / /___ ______
 / / __/ / __ \/ __ \/ __ `/ /     | | / / __ `/ ___/
/ /_/ / / /_/ / /_/ / /_/ / /      | |/ / /_/ / /    
\____/_/\____/_.___/\__,_/_/       |___/\__,_/_/      */

/* Status code string. */
extern aeAtErrorCode gAt_status_code;
extern asAtObj gAt_Obj;

const char *gAt_error_code_str[] = {
    "Ok",
    "Error",
    "InvalidCmd",
    "CmdNoSupport",
    "InvalidOperator",
    "InvalidKey",
    "NotAllow",
    "NoOperation",
    "KeyValueOverflow",
    "AtEventError",
    "UndefinedError"};

STATIC uint32_t m_BkdrHash(const char* input_str);
STATIC uint32_t m_CalculateHashCheck(const char* input_str);
STATIC int m_ReHash(uint16_t index, uint8_t val, uint8_t max_collide_num, asAtHashUnit* hash_table, uint16_t table_len);
STATIC aeAtBool m_ParseAtKeyValues(asAtObj *obj, char* str_kvs, uint32_t MAX_KVS_STR_LEN);
STATIC int m_SplitStr2Tokens(char* s, char *delimeter, char **tokens, int max_token_num);
/*  ___    ____  ____   ____       ____
   /   |  / __ \/  _/  / __ \___  / __/
  / /| | / /_/ // /   / / / / _ \/ /_  
 / ___ |/ ____// /   / /_/ /  __/ __/  
/_/  |_/_/   /___/  /_____/\___/_/      */

int __IGetHashIndex(aeAtCmdKeyFlag flag, char* input_str)
{
    asAtHashUnit* hash_table = (kAtCmdFlag == flag) ? (void*)&gsCmdList : (void*)&gsKeyList;
    uint16_t table_len = (kAtCmdFlag == flag) ? gScmd_list_len : gSkey_list_len;

    uint32_t tmp_check = m_CalculateHashCheck(input_str);

    for (int i = 0; i < table_len; i++) {
        if (tmp_check == hash_table[i].var) {
            return i;
        }
    }
    return -1;
}

aeAtValueType __IGetValueType(int index)
{
    return *(aeAtValueType*)gsKeyList[index].type;
}

aeAtBool __ICheckCmdValid(char* input_cmd)
{
    return (-1 == __IGetHashIndex(kAtCmdFlag, input_cmd)) ? \
            kAtFalse : kAtTrue;
}

APPO_FUNC_SOLT __IGetCmdOperation(char* input_cmd)
{
    int operation_index = __IGetHashIndex(kAtCmdFlag, input_cmd);
    if(-1 != operation_index)
    {
        return gsCmdList[operation_index].func;
    }
    return NULL;
}

void __IRaiseNewEvent(asEvent* curr_event, int type, void* data)
{
    curr_event->type = type;
    curr_event->data = data;
}

void __IRaiseAtError(aeAtErrorCode error_code)
{
    gAt_Obj.error_code = error_code;
}

aeAtErrorCode __ICheckAtErrorCode(void)
{
    return gAt_Obj.error_code;
}

aeAtCmdType __IGetAtCmdType(char* input_at_cmd_kv)
{
    /* If  "[CMD]?" */
    if(NULL != strstr(input_at_cmd_kv, "?"))
        return kAtQueryType;
    
    /* If  "[CMD]=k:v,k:v" */
    if(NULL != strstr(input_at_cmd_kv, "="))
        return kAtControlType;

    return kAtWrongType;
}

/**
 * @brief Check the pObj->pAt_str's format,
 *        if the format is correct, the pObj->units[] will be loaded by key-value couples.
 * 
 * @param pObj: asAtObj*, pObj->pAt_str should contain the AT cmd string.
 * @return aeAtBool 
 */
aeAtBool __ICheckAtCmdFormatAndLoadAtObj(asAtObj *pObj)
{
    /* Save_str_ptr for AtStrtok */
    char *tmp_rest_str;

    /* Get cmd type. */
    pObj->type = __IGetAtCmdType(pObj->pAt_str->pData);
    if(kAtWrongType == pObj->type)
    {
        __IRaiseAtError(kAtInvalidOperator);
        /*AtFree*/
        return kAtFalse;
    }

    /* Check if the cmd is valid */
    char *cmd = AtStrtok(pObj->pAt_str->pData, "?=", &tmp_rest_str);
    if(kAtFalse == __ICheckCmdValid(cmd))
    {
       AtTracePrintf("wrong cmd!");
        __IRaiseAtError(kAtInvalidCmd);
        return kAtFalse;
    }

    /* Get the cmd's operation function. */
    pObj->pFunc = __IGetCmdOperation(cmd);
    if(NULL == pObj->pFunc)
    {
       AtTracePrintf("no operation registered!");
        __IRaiseAtError(kAtNoOperation);
        return kAtFalse;
    }

    /* Get K-V couples into asAtObj->asAtKvUnit[]*/
    aeAtBool state = m_ParseAtKeyValues( pObj, tmp_rest_str, MAX_ATCMD_STR_LEN);

    return state;
}

void __ICastKvListTo_kAtValueInt(asAtKvList* kv_list_str, asAtKvUnit_Int* kv_list,size_t array_size)
{
    if (NULL != kv_list_str && NULL != kv_list)
    {
        /* num is MIN (kv_list_str->size , num), avoiding arrar bounds error.*/
        int num = (kv_list_str->size <= array_size) ? kv_list_str->size : array_size;
        for (int i = 0; i < num; i++)
        {
            /* TODO check the index = -1 !!!! */
            kv_list[i].key = (aeKeyName)__IGetHashIndex(kAtKeyFlag, kv_list_str->pList[i].key.pData);
            kv_list[i].value = atoi(kv_list_str->pList[i].value.pData);
        }
    }
}

void __ICastKvListTo_kAtValueFloat(asAtKvList *kv_list_str, asAtKvUnit_Float *kv_list, size_t array_size)
{
    if (NULL != kv_list_str && NULL != kv_list)
    {
        int num = (kv_list_str->size <= array_size) ? kv_list_str->size : array_size;
        for (int i = 0; i < num; i++)
        {
            kv_list[i].key = (aeKeyName)__IGetHashIndex(kAtKeyFlag, kv_list_str->pList[i].key.pData);
            kv_list[i].value = atof(kv_list_str->pList[i].value.pData);
        }
    }
}

void __ICastKvListTo_kAtValueStr(asAtKvList *kv_list_str, asAtKvUnit_Str *kv_list, size_t array_size)
{
    if (NULL != kv_list_str && NULL != kv_list)
    {
        int num = (kv_list_str->size <= array_size) ? kv_list_str->size : array_size;
        for (int i = 0; i < num; i++)
        {
            kv_list[i].key = (aeKeyName)__IGetHashIndex(kAtKeyFlag, kv_list_str->pList[i].key.pData);
            kv_list[i].value = kv_list_str->pList[i].value.pData;
        }
    }
}

void __ICastKvListTo_kAtValueEnum(asAtKvList *kv_list_str, asAtKvUnit_Enum *kv_list, size_t array_size)
{
    if (NULL != kv_list_str && NULL != kv_list)
    {
        int num = (kv_list_str->size <= array_size) ? kv_list_str->size : array_size;
        for (int i = 0; i < num; i++)
        {
            kv_list[i].key = (aeKeyName)__IGetHashIndex(kAtKeyFlag, kv_list_str->pList[i].key.pData);
            kv_list[i].value = (aeKeyName)__IGetHashIndex(kAtKeyFlag, kv_list_str->pList[i].value.pData);
        }
    }
}

#if 0
aeAtBool __IInputMallocAddrToHashTable(void* ptr, asAtHashUnit *addr_hash_table, uint8_t table_len)
{
    char tmp[0x10] = {0};
    snprintf(tmp, 0x10, "%p", ptr);

    uint8_t UINT8_BITS = 8, MAX_DEFAULT_COLLIDE_NUM = 10;
    asAtHashCheck tmp_check = m_CalculateHashCheck(tmp);

    /* Find empty position. */
    int re_index = m_ReHash(tmp_check.index, 0, MAX_DEFAULT_COLLIDE_NUM, addr_hash_table, table_len);
    if(re_index != 1)
    {
        addr_hash_table[re_index].var = tmp_check.check_val;
        addr_hash_table[re_index].ptr = ptr;
        return kAtTrue;
    }
    return kAtFalse;
}


int __IGetMallocedPtrIndex(void* ptr, asAtHashUnit *addr_hash_table, uint8_t table_len)
{
    char tmp[0x10] = {0};
    snprintf(tmp, 0x10, "%p", ptr);
    
    uint8_t UINT8_BITS = 8, MAX_DEFAULT_COLLIDE_NUM = 10;
    asAtHashCheck tmp_check = m_CalculateHashCheck(tmp, UINT8_BITS, table_len);

    /* Check if addr is malloced. */
    return m_ReHash(tmp_check.index, tmp_check.check_val, MAX_DEFAULT_COLLIDE_NUM, addr_hash_table, table_len); 
}

aeAtBool __IPopMallocAddrFromHashTable(void *ptr, asAtHashUnit *addr_hash_table, uint8_t table_len)
{
    int index = __IGetMallocedPtrIndex(ptr, addr_hash_table, table_len);
    if(-1 != index)
    {
        addr_hash_table[index].var = 0;
        addr_hash_table[index].ptr = NULL;
        return kAtTrue;
    }
    return kAtFalse;
}

void __IPrintCurrMallocsAndIfClear(aeAtBool clear_flag, asAtHashUnit *addr_hash_table, uint8_t table_len)
{
   AtTracePrintf("Total Malloced Ptr num: %d", gMalloc_cnt);
    for(int i = 0; i < table_len; i++)
    {
        if(NULL != addr_hash_table[i].ptr)
        {
        //    AtDebugPrintf("No.%d address: %p\n", ++cnt, addr_hash_table[i].ptr);
            if(kAtTrue == clear_flag)
                AtFree(addr_hash_table[i].ptr);
        }
    }
}
#endif

/*  ______                    ____       ____
   / ____/_  ______  _____   / __ \___  / __/
  / /_  / / / / __ \/ ___/  / / / / _ \/ /_  
 / __/ / /_/ / / / / /__   / /_/ /  __/ __/  
/_/    \__,_/_/ /_/\___/  /_____/\___/_/      */

STATIC uint32_t m_BkdrHash(const char* input_str)
{
        const char* str = input_str;
        uint32_t seed = 13131; // 31 131 1313 13131 131313 etc..
        uint32_t hash = 0;
            
        while (*str && *str != '\r' && *str != '\n')
        {
            hash = hash * seed + (*str++);
        }
            
        return (hash & 0x7FFFFFFF);
}

STATIC uint32_t m_CalculateHashCheck(const char* input_str)
{
    return m_BkdrHash(input_str);
}

/* Variable table_len is a prime number in (1, 256). */
STATIC int m_ReHash(uint16_t index, uint8_t var, uint8_t max_collide_num, asAtHashUnit* hash_table, uint16_t table_len)
{
    uint16_t tmp_index = index;
    uint16_t delta = index % 7 + 1; ///< 7 is a prime number, +1 to avoid delta = 0. 
    int i = 0;
    
    while((i++ < max_collide_num) && (var != hash_table[tmp_index].var))
    {
        AtDebugPrintf("index = %d, collide time: %d\n", tmp_index, i);
        tmp_index = (tmp_index + delta) % table_len;
    }
    return (i > max_collide_num) ? (-1) : tmp_index;
}

/**
 * @brief Parse the input k-v string into the input asAtObj's AtObjUnit(key,value in char*).
 * @attention The input string "str_kvs" will be seperated!!!
 * 
 * @param obj : asAtObj, the object containing k-v couples, cmd-type, at_string and couples' num.
 * @param str_kvs : char*, input string containing key-values in format of "key1:value1,key2:value2......"
 * @param MAX_KVS_STR_LEN : uint, the maximum length of the input string.
 * @return aeAtBool 
 */
STATIC aeAtBool m_ParseAtKeyValues(asAtObj *obj, char* str_kvs, uint32_t MAX_KVS_STR_LEN)
{
    if(NULL == obj)
    {
       AtTracePrintf("NULL AtObj!");
        __IRaiseAtError(kAtUndefinedError);
        return kAtFalse;
    }

    if (NULL != str_kvs && 0 != strcmp("", str_kvs))
    {
        AtTracePrintf("Start parsing!");
        char* kv_couples[MAX_KV_COUPLES_NUM];

        int kv_num = m_SplitStr2Tokens(str_kvs, ",", kv_couples, MAX_KV_COUPLES_NUM + 1);

        /* Too many key-values. */
        if (MAX_KV_COUPLES_NUM <= kv_num)
        {
            AtTracePrintf("K-V overflow!");
            __IRaiseAtError(kAtKeyValueOverflow);
            return kAtFalse;
        }

        obj->pKv_list->size = kv_num;
        for (int i = 0; i < kv_num; i++)
        {
            AtTracePrintf("i = %d, %p", i, obj->pKv_list->pList + i);
            char *tmp_rest_str;

            obj->pKv_list->pList[i].key.pData = AtStrtok(kv_couples[i], ":", &tmp_rest_str);
            if (NULL != obj->pKv_list->pList[i].key.pData)
            {
                obj->pKv_list->pList[i].key.size = strlen(obj->pKv_list->pList[i].key.pData);
            }
            else
            {
                AtTracePrintf("Key is NULL!");
                obj->pKv_list->pList[i].key.pData = "NULL";
                obj->pKv_list->pList[i].key.size = sizeof("NULL");
            }

            obj->pKv_list->pList[i].value.pData = AtStrtok(NULL, ":", &tmp_rest_str);
            if (NULL != obj->pKv_list->pList[i].value.pData)
            {
                obj->pKv_list->pList[i].value.size = strlen(obj->pKv_list->pList[i].value.pData);
            }
            else
            {
                AtTracePrintf("Value is NULL! copy to key!");
                obj->pKv_list->pList[i].value.pData = obj->pKv_list->pList[i].key.pData;
                obj->pKv_list->pList[i].value.size = obj->pKv_list->pList[i].key.size;
            }
        }
        return kAtTrue;
    }

    AtTracePrintf("Invalid input!");
    __IRaiseAtError(kAtInvalidKey);
    return kAtFalse;
}

STATIC int m_SplitStr2Tokens(char* s, char *delimeter, char **tokens, int max_token_num)
{
    if (NULL != s && 0 != strcmp("", s) && NULL != delimeter )
    {
        char* rest_str;
        char* token = AtStrtok(s, delimeter, &rest_str);
        int i = 0;
        while(NULL != token && i < max_token_num)
        {
            tokens[i++] = token;
            token = AtStrtok(NULL, delimeter, &rest_str);
        }
        return i;
    }
    return 0;
}
