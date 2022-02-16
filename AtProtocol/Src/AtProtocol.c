#include "AtProtocol.h"
#include "GlobalDef.h"
/* ________      __          __     _    __          
  / ____/ /___  / /_  ____ _/ /    | |  / /___ ______
 / / __/ / __ \/ __ \/ __ `/ /     | | / / __ `/ ___/
/ /_/ / / /_/ / /_/ / /_/ / /      | |/ / /_/ / /    
\____/_/\____/_.___/\__,_/_/       |___/\__,_/_/      */
/* Service help values. */
uint8_t gMalloc_cnt = 0;
asAtHashUnit gMalloc_addrs[31] = {0};
uint8_t gMalloc_table_len = sizeof(gMalloc_addrs) / sizeof(asAtHashUnit);

aeAtBool gsAt_decode_mutex = kAtFalse;

/*  ____       _             __          ______                    ____            __              
   / __ \_____(_)   ______ _/ /____     / ____/_  ______  _____   / __ \___  _____/ /___ _________ 
  / /_/ / ___/ / | / / __ `/ __/ _ \   / /_  / / / / __ \/ ___/  / / / / _ \/ ___/ / __ `/ ___/ _ \
 / ____/ /  / /| |/ / /_/ / /_/  __/  / __/ / /_/ / / / / /__   / /_/ /  __/ /__/ / /_/ / /  /  __/
/_/   /_/  /_/ |___/\__,_/\__/\___/  /_/    \__,_/_/ /_/\___/  /_____/\___/\___/_/\__,_/_/   \___/ */

void m_RunAtDecodeWorkflow(asAtProtocol *obj, char* input_at_str);

#define m_TakeAtDecodeMutex()     \
do{                               \
if(kAtFalse == gsAt_decode_mutex) \
    gsAt_decode_mutex = kAtTrue;  \
else                              \
    return;                       \
}while(0)

#define m_GiveAtDecodeMutex()     \
do{                               \
    gsAt_decode_mutex = kAtFalse; \
}while (0)

/*  ___    ____  ____       ____       _____       _ __  _                 
   /   |  / __ \/  _/      / __ \___  / __(_)___  (_) /_(_)___  ____  _____
  / /| | / /_/ // /       / / / / _ \/ /_/ / __ \/ / __/ / __ \/ __ \/ ___/
 / ___ |/ ____// /       / /_/ /  __/ __/ / / / / / /_/ / /_/ / / / (__  ) 
/_/  |_/_/   /___/      /_____/\___/_/ /_/_/ /_/_/\__/_/\____/_/ /_/____/  */

void IInitAtLib(asAtProtocol* obj, \
aeAtLibMode mode, void* mode_config, p_VoidFuncpChar feedbackFunc)
{
    /* Private variable asigning */
    obj->mode = mode;
    obj->mode_config = mode_config;
    obj->feedbackFunc = feedbackFunc;
    obj->enable_flag = kAtTrue;

    /* API asigning. */
    obj->IAtCmdDecodeAndRun = IAtCmdDecodeAndRun;
    obj->ICheckAtStatus = ICheckAtStatus;
    obj->IDisableAt = IDisableAt;
    obj->IEnableAt = IEnableAt;
    obj->IGenerateAtTempCmd = IGenerateAtTempCmd;

    /* Initialization sequeuce. */
    IAtFsmInit(feedbackFunc);
}
	
aeAtBool IGenerateAtTempCmd(asAtProtocol* obj, char* at_cmd_key_value, APPO_FUNC_SOLT func_pointer)
{
	return true;
}

aeAtBool IAtCmdDecodeAndRun(asAtProtocol* obj, char* at_cmd_key_value)
{
    if(kAtTrue == obj->enable_flag)
    {
        m_RunAtDecodeWorkflow(obj, at_cmd_key_value);
		return true;
    }
	return false;
}

aeAtBool ICheckAtStatus(asAtProtocol* obj)
{
	return true;
}

aeAtBool IEnableAt(asAtProtocol* obj)
{
    obj->enable_flag = kAtTrue;
	return true;
}

aeAtBool IDisableAt(asAtProtocol* obj)
{
    obj->enable_flag = kAtFalse;
	return true;
}

aeAtCmdType IGetAtCmdType(asAtProtocol* obj)
{
	return gAt_Obj.type;
}

/* Private methods definitions */
void m_RunAtDecodeWorkflow(asAtProtocol *obj, char* input_at_str)
{
    m_TakeAtDecodeMutex();
    
    IAtFsmInit(obj->feedbackFunc);
    // obj->feedbackFunc("\r\nInput:");
    // obj->feedbackFunc(input_at_str);
    // obj->feedbackFunc("\n");
    // printf("\r\nInput:");
    // printf(input_at_str);
    // printf("\n");

    /* Input AT string to Fsm. */
    IInputAtStrToFsm(input_at_str);

    /* Raise new event. */
    IRaiseNewEvent(kInputStringEvent);

    /* Run the AT StateMachine. */
    int MAX_LOOP_NUM = 5, loop_cnt = 0;
    while(kIdleEvent != IGetCurrEventPtr()->type && loop_cnt++ < MAX_LOOP_NUM)
    {
        AtTracePrintf("Event type = %d", IGetCurrEventPtr()->type);
        AtDebugAnchor();
        IAtFsmHandleInnerEvent();
    }
    AtTracePrintf("Event type = %d", IGetCurrEventPtr()->type);

    m_GiveAtDecodeMutex();
}

