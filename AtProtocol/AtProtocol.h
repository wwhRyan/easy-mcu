/*
 * @file: AtProtocol.h
 * @author: gengliang (gengliang@appotronics.cn)
 * @brief:  
 * @date: 2021-07-28 
 */

#ifndef __AT_PROTOCOL_H
#define __AT_PROTOCOL_H

#include "AtConfig.h"
#include "AtInternalConfig.h"
#include "AtFsm.h"
#include "AtUtils.h"

#ifdef __cplusplus
extern "C"{
#endif


/*  ___    ____  ____     ____            __                 __  _                 
   /   |  / __ \/  _/    / __ \___  _____/ /___ __________ _/ /_(_)___  ____  _____
  / /| | / /_/ // /     / / / / _ \/ ___/ / __ `/ ___/ __ `/ __/ / __ \/ __ \/ ___/
 / ___ |/ ____// /     / /_/ /  __/ /__/ / /_/ / /  / /_/ / /_/ / /_/ / / / (__  ) 
/_/  |_/_/   /___/    /_____/\___/\___/_/\__,_/_/   \__,_/\__/_/\____/_/ /_/____/  */


/* AT mode */
typedef enum __aeAtLibMode{
    kAtNormalMode,
    kAtEventMode,
    kAtTaskMode
}aeAtLibMode;

// typedef struct __asAtEventModeConfig{

// }asAtEventModeConfig;

// typedef struct __asAtTaskModeConfig{

// }asAtTaskModeConfig;

/**
 * @brief AtProtocol class
 * 
 */
typedef struct __asAtProtocol asAtProtocol;
typedef struct __asAtProtocol{
    aeAtLibMode mode;
    void *mode_config;
    p_VoidFuncpChar feedbackFunc;
    aeAtBool enable_flag;

/* Public methods */
    aeAtBool (*IInitAtLib)(asAtProtocol* obj, \
                aeAtLibMode mode, void* mode_config, p_VoidFuncpChar feedbackFunc);	
    aeAtBool (*IGenerateAtTempCmd)(asAtProtocol* obj, char* at_cmd_key_value, APPO_FUNC_SOLT func_pointer);
    aeAtBool (*IAtCmdDecodeAndRun)(asAtProtocol* obj, char* at_cmd_key_value);
    aeAtBool (*IEnableAt)(asAtProtocol* obj);
    aeAtBool (*IDisableAt)(asAtProtocol* obj);
    aeAtBool (*ICheckAtStatus)(asAtProtocol* obj);

}asAtProtocol;

/* At Key-Value list type, already define in the internal files */
typedef struct __asAtKvUnit_Int asAtKvUnit_Int;
/*{
    aeKeyName key;
    int value;
}*/

typedef struct __asAtKvUnit_Float asAtKvUnit_Float;
/*{
    aeKeyName key;
    float value;
}*/

typedef struct __asAtKvUnit_Str asAtKvUnit_Str;
/*{
    aeKeyName key;
    char* value;
}*/

typedef struct __asAtKvUnit_Enum asAtKvUnit_Enum;
/*{
    aeKeyName key;
    aeKeyName value;
}*/
/*  ___    ____  ____       ____            __                 __  _                 
   /   |  / __ \/  _/      / __ \___  _____/ /___ __________ _/ /_(_)___  ____  _____
  / /| | / /_/ // /       / / / / _ \/ ___/ / __ `/ ___/ __ `/ __/ / __ \/ __ \/ ___/
 / ___ |/ ____// /       / /_/ /  __/ /__/ / /_/ / /  / /_/ / /_/ / /_/ / / / (__  ) 
/_/  |_/_/   /___/      /_____/\___/\___/_/\__,_/_/   \__,_/\__/_/\____/_/ /_/____/  */

/* API Macro declarations */
/**
 * @brief This API is used for registering operation functions to certain At cmd. 
 * Users write their own code just below the API surrounded with "{}"
 * @example 
 * 
 * IAtOperationRegister(kCmdLightSource, light_src_list, at_str_feedback)
 *  {
 *      asAtKvUnit_Int light_src_int_type_list[KV_LIST_LEN];
 *      ICastAtKvListTo(kAtValueInt, light_src_list, light_src_int_type_list);
 *      for(int i = 0; i < light_src_list->size; i++)
 *      {
 *          // Do something!
 *          light_src_int_type_list[i].key;
 *          light_src_int_type_list[i].value;    
 *      }
 *      //.....
 * 
 *      IAddFeedbackStrTo(at_str_feedback, "just like printf: %d%s", var1, var2);    
 *  }
 * 
 * @param atindex: enum of At commands pre-defined by AtLib helps the AtLib to combine your function to the certain AT CMD.
 * @param at_kv_list: asAtKvList*, key-value data input to the function, user just use this data struct since the AtLib has already 
 *                    parsed the AT cmd's key and values into the asAtKvList. 
 *                    AtLib uses asAtKvUnit[] containing key-value couples.
 * @param at_feedback_str: asAtStr*, output string defined by user, this string's format looks like "AT+<CMD># ", AtLib will use the
 *                    user-defined feedback_func to print this string(asAtStr containig string's size, safer).
 */
#define IAtOperationRegister(atindex, pAt_kv_list, pAt_feedback_str)\
    APPO_ATFUNC_DECLARE(atindex)\
    APPO_ATFUNC_PREINIT(atindex)\
    void appo_##atindex##_handler(asAtKvList* pAt_kv_list, asAtStr* pAt_feedback_str)

/**
 * @brief This API is a help macro for user to cast k-v list containing certain value type.
 * @warning User must confirm the kv_list's length and the kv_certain_type_list value type.
 * @example 
 * asAtKvList* kv_list = ((asAtKvList*)gFeedback_state.data);
 * asAtKvUnit_Int kv_int_type_list[KV_LIST_LEN];
 * ICastAtKvListTo(kAtValueInt, kv_list, kv_int_type_list);
 * 
 * @param at_value_type: aeAtValueType,  kAtValueEnum, kAtValueInt, kAtValueFloat, kAtValueStr(default mode).
 * @param kv_list_str: asAtKvList*, the pointer of asAtKvList provided by feedback_state.data.
 * @param kv_certain_type_list: int, float or string type list defined by user.
 * 
 */
#define ICastAtKvListTo(at_value_type, kv_list_str, kv_certain_type_list) \
    __ICastKvListTo_##at_value_type(kv_list_str, kv_certain_type_list, sizeof(kv_certain_type_list) / sizeof(kv_certain_type_list[0]))

/**
 * @brief This API is a help macro for user to add feedback string into the pAt_str so that the AtLib could use the user-define
 *        feedbackFunc() to print the AT cmd feedback message.
 * @example 
 * IAddFeedbackStrTo(pAt_str, "AT\nOK\n");
 * 
 * @param pAt_str: asAtStr*, the pointer AtLib managed, user don't have to warry about its length.
 * @param format: printf like str-format.
 * @param ...: any length variable list.
 */
#define IAddFeedbackStrTo(pAt_str, format, ...)                                                    \
    do                                                                                             \
    {                                                                                              \
        memset(pAt_str->pData, 0, pAt_str->size);                                                  \
        pAt_str->size = snprintf((char *)pAt_str->pData, MAX_FEEDBACK_STR_LEN, format, ##__VA_ARGS__); \
    } while (0)

/**
 * @brief This API is a help macro for user to add feedback string into the pAt_str, the function can be repeat call in the
 *        "IAtOperationRegister()" function, in order to feedback mutiply key-value commmand.
 */
#define IAddKeyValueStrTo(pAt_str, format, ...)                                                                                     \
    do                                                                                                                              \
    {                                                                                                                               \
        if (pAt_str->size == 0 && pAt_str->pData[pAt_str->size] == 0)                                                               \
        {                                                                                                                           \
            pAt_str->size = snprintf((char *)pAt_str->pData, MAX_FEEDBACK_STR_LEN, format, ##__VA_ARGS__);                          \
        }                                                                                                                           \
        else if (pAt_str->size > 0 && pAt_str->pData[pAt_str->size - 1] == '\n')                                                    \
        {                                                                                                                           \
            pAt_str->pData[pAt_str->size - 1] = ',';                                                                                \
            pAt_str->size += snprintf(pAt_str->pData + pAt_str->size, MAX_FEEDBACK_STR_LEN - pAt_str->size, format, ##__VA_ARGS__); \
        }                                                                                                                           \
        else if (pAt_str->size > 0 && pAt_str->pData[pAt_str->size - 1] != '\n')                                                    \
        {                                                                                                                           \
            pAt_str->size += snprintf(pAt_str->pData + pAt_str->size, MAX_FEEDBACK_STR_LEN - pAt_str->size, format, ##__VA_ARGS__); \
        }                                                                                                                           \
        else                                                                                                                        \
        {                                                                                                                           \
            E_assert(false);                                                                                                        \
        }                                                                                                                           \
    } while (0)

        /* API fucntion declarations */
    void IInitAtLib(asAtProtocol *obj,
                    aeAtLibMode mode, void *mode_config, p_VoidFuncpChar feedbackFunc);

    aeAtBool IGenerateAtTempCmd(asAtProtocol *obj, char *at_cmd_key_value, APPO_FUNC_SOLT func_pointer);

    aeAtBool IAtCmdDecodeAndRun(asAtProtocol *obj, char *at_cmd_key_value);

    aeAtBool IEnableAt(asAtProtocol *obj);

    aeAtBool IDisableAt(asAtProtocol *obj);

    aeAtBool ICheckAtStatus(asAtProtocol *obj);

    aeAtCmdType IGetAtCmdType(asAtProtocol *obj);

#ifdef __cplusplus
}
#endif
#endif /* __AT_PROTOCOL_H */
