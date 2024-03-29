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

const char* gAt_error_code_str[] = {
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
    "UndefinedError"
};

STATIC uint32_t m_BkdrHash(const char* input_str);
STATIC uint32_t m_CalculateHashCheck(const char* input_str);
STATIC aeAtBool m_ParseAtKeyValues(asAtObj* obj, char* str_kvs, uint32_t MAX_KVS_STR_LEN);
STATIC int m_SplitStr2Tokens(char* s, char* delimeter, char** tokens, int max_token_num);
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

    int low = 0, high = table_len - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (tmp_check > hash_table[mid].var) {
            low = mid + 1;
        } else if (tmp_check < hash_table[mid].var) {
            high = mid - 1;
        } else {
            return mid;
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
    return (-1 == __IGetHashIndex(kAtCmdFlag, input_cmd)) ? kAtFalse : kAtTrue;
}

APPO_FUNC_SOLT __IGetCmdOperation(char* input_cmd)
{
    int operation_index = __IGetHashIndex(kAtCmdFlag, input_cmd);
    if (-1 != operation_index) {
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
    if (NULL != strstr(input_at_cmd_kv, "?"))
        return kAtQueryType;

    /* If  "[CMD]=k:v,k:v" */
    if (NULL != strstr(input_at_cmd_kv, "="))
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
aeAtBool __ICheckAtCmdFormatAndLoadAtObj(asAtObj* pObj)
{
    /* Save_str_ptr for AtStrtok */
    char* tmp_rest_str;

    /* Get cmd type. */
    pObj->type = __IGetAtCmdType(pObj->pAt_str->pData);
    if (kAtWrongType == pObj->type) {
        __IRaiseAtError(kAtInvalidOperator);
        /*AtFree*/
        return kAtFalse;
    }

    /* Check if the cmd is valid */
    char* cmd = AtStrtok(pObj->pAt_str->pData, "?=", &tmp_rest_str);
    if (kAtFalse == __ICheckCmdValid(cmd)) {
        AtTracePrintf("wrong cmd!");
        __IRaiseAtError(kAtInvalidCmd);
        return kAtFalse;
    }

    /* Get the cmd's operation function. */
    pObj->pFunc = __IGetCmdOperation(cmd);
    if (NULL == pObj->pFunc) {
        AtTracePrintf("no operation registered!");
        __IRaiseAtError(kAtNoOperation);
        return kAtFalse;
    }

    /* Get K-V couples into asAtObj->asAtKvUnit[]*/
    aeAtBool state = m_ParseAtKeyValues(pObj, tmp_rest_str, MAX_ATCMD_STR_LEN);

    return state;
}

void __ICastKvListTo_kAtValueInt(asAtKvList* kv_list_str, asAtKvUnit_Int* kv_list, size_t array_size)
{
    if (NULL != kv_list_str && NULL != kv_list) {
        /* num is MIN (kv_list_str->size , num), avoiding arrar bounds error.*/
        int num = (kv_list_str->size <= array_size) ? kv_list_str->size : array_size;
        for (int i = 0; i < num; i++) {
            kv_list[i].key = (int)__IGetHashIndex(kAtKeyFlag, kv_list_str->pList[i].key.pData);
            kv_list[i].value = atoi(kv_list_str->pList[i].value.pData);
        }
    }
}

void __ICastKvListTo_kAtValueFloat(asAtKvList* kv_list_str, asAtKvUnit_Float* kv_list, size_t array_size)
{
    if (NULL != kv_list_str && NULL != kv_list) {
        int num = (kv_list_str->size <= array_size) ? kv_list_str->size : array_size;
        for (int i = 0; i < num; i++) {
            kv_list[i].key = (int)__IGetHashIndex(kAtKeyFlag, kv_list_str->pList[i].key.pData);
            kv_list[i].value = atof(kv_list_str->pList[i].value.pData);
        }
    }
}

void __ICastKvListTo_kAtValueStr(asAtKvList* kv_list_str, asAtKvUnit_Str* kv_list, size_t array_size)
{
    if (NULL != kv_list_str && NULL != kv_list) {
        int num = (kv_list_str->size <= array_size) ? kv_list_str->size : array_size;
        for (int i = 0; i < num; i++) {
            kv_list[i].key = (int)__IGetHashIndex(kAtKeyFlag, kv_list_str->pList[i].key.pData);
            kv_list[i].value = kv_list_str->pList[i].value.pData;
        }
    }
}

void __ICastKvListTo_kAtValueEnum(asAtKvList* kv_list_str, asAtKvUnit_Enum* kv_list, size_t array_size)
{
    if (NULL != kv_list_str && NULL != kv_list) {
        int num = (kv_list_str->size <= array_size) ? kv_list_str->size : array_size;
        for (int i = 0; i < num; i++) {
            kv_list[i].key = (int)__IGetHashIndex(kAtKeyFlag, kv_list_str->pList[i].key.pData);
            kv_list[i].value = (int)__IGetHashIndex(kAtKeyFlag, kv_list_str->pList[i].value.pData);
        }
    }
}

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

    while (*str && *str != '\r' && *str != '\n') {
        hash = hash * seed + (*str++);
    }

    return (hash & 0x7FFFFFFF);
}

STATIC uint32_t m_CalculateHashCheck(const char* input_str)
{
    return m_BkdrHash(input_str);
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
STATIC aeAtBool m_ParseAtKeyValues(asAtObj* obj, char* str_kvs, uint32_t MAX_KVS_STR_LEN)
{
    if (NULL == obj) {
        AtTracePrintf("NULL AtObj!");
        __IRaiseAtError(kAtUndefinedError);
        return kAtFalse;
    }

    if (NULL != str_kvs && 0 != strcmp("", str_kvs)) {
        AtTracePrintf("Start parsing!");
        char* kv_couples[MAX_KV_COUPLES_NUM];

        int kv_num = m_SplitStr2Tokens(str_kvs, ",", kv_couples, MAX_KV_COUPLES_NUM + 1);

        /* Too many key-values. */
        if (MAX_KV_COUPLES_NUM < kv_num) {
            AtTracePrintf("K-V overflow!");
            __IRaiseAtError(kAtKeyValueOverflow);
            return kAtFalse;
        }

        obj->pKv_list->size = kv_num;
        for (int i = 0; i < kv_num; i++) {
            AtTracePrintf("i = %d, %p", i, obj->pKv_list->pList + i);
            char* tmp_rest_str;

            obj->pKv_list->pList[i].key.pData = AtStrtok(kv_couples[i], ":", &tmp_rest_str);
            if (NULL != obj->pKv_list->pList[i].key.pData) {
                obj->pKv_list->pList[i].key.size = strlen(obj->pKv_list->pList[i].key.pData);
            } else {
                AtTracePrintf("Key is NULL!");
                obj->pKv_list->pList[i].key.pData = "NULL";
                obj->pKv_list->pList[i].key.size = sizeof("NULL");
            }

            obj->pKv_list->pList[i].value.pData = AtStrtok(NULL, ":", &tmp_rest_str);
            if (NULL != obj->pKv_list->pList[i].value.pData) {
                obj->pKv_list->pList[i].value.size = strlen(obj->pKv_list->pList[i].value.pData);
            } else {
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

STATIC int m_SplitStr2Tokens(char* s, char* delimeter, char** tokens, int max_token_num)
{
    if (NULL != s && 0 != strcmp("", s) && NULL != delimeter) {
        char* rest_str;
        char* token = AtStrtok(s, delimeter, &rest_str);
        int i = 0;
        while (NULL != token && i < max_token_num) {
            tokens[i++] = token;
            token = AtStrtok(NULL, delimeter, &rest_str);
        }
        return i;
    }
    return 0;
}
