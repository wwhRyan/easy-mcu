#include "AtFsm.h"
#include "AtCmdHashTable.h"
#include "AtUtils.h"
#include <string.h>
#include "Utilities.h"

/* ________      __          __     _    __          
  / ____/ /___  / /_  ____ _/ /    | |  / /___ ______
 / / __/ / __ \/ __ \/ __ `/ /     | | / / __ `/ ___/
/ /_/ / / /_/ / /_/ / /_/ / /      | |/ / /_/ / /    
\____/_/\____/_.___/\__,_/_/       |___/\__,_/_/      */

/********* Internal variables *********/
extern aeAtErrorCode gAt_status_code;
extern char gAt_error_code_str[][0x10];

/* States Declarations*/
STATIC asState \
                    gProcessing_state, \
                    gFeedback_state, \
                    gIdle_state, \
                    gError_state, \
                    gFsm_error_state;

STATIC char gsAt_buff_str[MAX_ATCMD_STR_LEN] = {0};
STATIC char gsAt_feedback_buff_str[MAX_ATCMD_STR_LEN] = {0};
STATIC asAtKvUnit gsAt_units[MAX_KV_COUPLES_NUM] = {0};

/********* Export variables *********/
asStateMachine gFsm;
asEvent gEvent;

asAtKvList gAt_kv_list = {gsAt_units, 0};
asAtStr gAt_str = {gsAt_buff_str, 0};
asAtStr gFeedback_at_str = {gsAt_feedback_buff_str, 0};
aeAtErrorCode gAt_status_code = kAtOk;
asAtObj gAt_Obj = {kAtControlType, &gAt_str, &gAt_kv_list, NULL, kAtOk, NULL, &gFeedback_at_str};

/*  ___    ____  ____       ____       _____       _ __  _                 
   /   |  / __ \/  _/      / __ \___  / __(_)___  (_) /_(_)___  ____  _____
  / /| | / /_/ // /       / / / / _ \/ /_/ / __ \/ / __/ / __ \/ __ \/ ___/
 / ___ |/ ____// /       / /_/ /  __/ __/ / / / / / /_/ / /_/ / / / (__  ) 
/_/  |_/_/   /___/      /_____/\___/_/ /_/_/ /_/_/\__/_/\____/_/ /_/____/  */

void IAtFsmInit(p_VoidFuncpChar feedback_func)
{
    IStateMachineInit(&gFsm, &gIdle_state, &gFsm_error_state);

    gAt_str.pData = gsAt_buff_str;
    gFeedback_at_str.pData = gsAt_feedback_buff_str;
    gAt_kv_list.pList = gsAt_units;

    gAt_Obj.type = kAtControlType;
    gAt_Obj.pAt_str = &gAt_str;
    gAt_Obj.pKv_list = &gAt_kv_list;
    gAt_Obj.error_code = kAtOk;
    gAt_Obj.pFunc = NULL;
    gAt_Obj.feedbackFunc = feedback_func;
}

void IRaiseNewEvent(int type)
{
    __IRaiseNewEvent(&gEvent, type, gAt_Obj.pAt_str);
}

asEvent* IGetCurrEventPtr(void)
{
    return &gEvent;
}

void IAtFsmHandleInnerEvent(void)
{
    IStateMachineHandleEvent(&gFsm, &gEvent);
}

void IInputAtStrToFsm(const char* at_cmd_kv)
{
    //gAt_Obj.pAt_str->size = strnlen(at_cmd_kv, MAX_ATCMD_STR_LEN);
    gAt_Obj.pAt_str->size = strlen(at_cmd_kv);
    strncpy(gAt_Obj.pAt_str->pData, at_cmd_kv, MAX_ATCMD_STR_LEN);
}

void m_ClearFsmGlobalVariables(void)
{
    memset(gAt_Obj.pAt_str->pData, 0, MAX_ATCMD_STR_LEN);
    memset(gAt_Obj.pFeedback_at_str->pData, 0, MAX_ATCMD_STR_LEN);
    memset(gAt_Obj.pKv_list->pList, 0, sizeof(asAtKvUnit) * MAX_KV_COUPLES_NUM);
    gAt_Obj.pAt_str->size = 0;
    gAt_Obj.pFeedback_at_str->size = 0;
    gAt_Obj.pKv_list->size = 0;
}
/*  ___  ______     ___________ __  ___     ____  __           __  
   /   |/_  __/    / ____/ ___//  |/  /    / __ )/ /___  _____/ /__
  / /| | / /      / /_   \__ \/ /|_/ /    / __  / / __ \/ ___/ //_/
 / ___ |/ /      / __/  ___/ / /  / /    / /_/ / / /_/ / /__/ ,<   
/_/  |_/_/      /_/    /____/_/  /_/    /_____/_/\____/\___/_/|_|  

                INPUT STRING
                     +
                     |
                     v
              +------+------+             +---------------------+              +------------------+
              |             |   pAt_str   |                     |  At_Object   |                  |
          +-->+ gIdle_state +------------->  gProcessing_state  +-------------->  gFeedback_state |
          |   |             |             |                     |              |                  |
          |   +-^----+------+             +----------+----------+              +---------+--+-----+
          |     |    |                               | Error code                        |  |
          |     |    |                               |                                   |  |
          |     |    |                        +------v-------+                           |  |
          |     |    |       Error code       |              |           Error code      |  |
          |     |    +------------------------> gError_state +<--------------------------+  |
          |     |                             |              |                              |
          |     |                             +-------+------+                              |
          |     |                                     |                                     |
          |     +-------------------------------------+                                     |
          |                                                                                 |
          +---------------------------------------------------------------------------------+


*/

/*  ___  ______     ____    ____          _____ __        __     
   /   |/_  __/    /  _/___/ / /__       / ___// /_____ _/ /____ 
  / /| | / /       / // __  / / _ \      \__ \/ __/ __ `/ __/ _ \
 / ___ |/ /      _/ // /_/ / /  __/     ___/ / /_/ /_/ / /_/  __/
/_/  |_/_/      /___/\__,_/_/\___/     /____/\__/\__,_/\__/\___/  */

/* Global Variable */

/* Conditions */
STATIC char at_header_str[] = "AT+";

/* Transition Guards */
STATIC bool m_GuardIdle2Processing(void *condition, asEvent *event);
STATIC bool m_GuardIdle2Error(void *condition, asEvent *event);

/* Entry and Exit actions: */
STATIC void m_EntryIdleState( void *stateData, asEvent *event );
STATIC void m_ExitIdleState( void *stateData, asEvent *event );

/* Transitions' actions: */
STATIC void m_ActionIdle2Processing(\
                        void *currentStateData, asEvent *event,
                        void *newStateData );
STATIC void m_ActionIdle2Error(\
                        void *currentStateData, asEvent *event,
                        void *newStateData );

/* Transitions definition */
STATIC asState gIdle_state = {
    .parentState = NULL,
    .entryState = NULL,
    .transitions = (asTransition[]){
        {kInputStringEvent,                                    // event     
        (Condition*)at_header_str,                 // condition 
        (GuardFuncProto)m_GuardIdle2Error,                     // guard     
        (TransitionActionFuncProto)m_ActionIdle2Error,         // action    
        (asState*)&gError_state},                              // next state

        {kInputStringEvent,                                    // event     
        (Condition*)at_header_str,                 // condition 
        (GuardFuncProto)m_GuardIdle2Processing,                // guard     
        (TransitionActionFuncProto)m_ActionIdle2Processing,    // action    
        (asState*)&gProcessing_state}                          // next state
        },
    .numTransitions = 2,
    .data = &gAt_Obj,
    .entryAction = m_EntryIdleState,
    .exitAction = m_ExitIdleState
};

/*  ___  ______   ____                                 _                _____ __        __     
   /   |/_  __/  / __ \_________  ________  __________(_)___  ____ _   / ___// /_____ _/ /____ 
  / /| | / /    / /_/ / ___/ __ \/ ___/ _ \/ ___/ ___/ / __ \/ __ `/   \__ \/ __/ __ `/ __/ _ \
 / ___ |/ /    / ____/ /  / /_/ / /__/  __(__  |__  ) / / / / /_/ /   ___/ / /_/ /_/ / /_/  __/
/_/  |_/_/    /_/   /_/   \____/\___/\___/____/____/_/_/ /_/\__, /   /____/\__/\__,_/\__/\___/ 
                                                           /____/                               */
/* Global Variable */

/* Guard */
STATIC bool m_GuardProcessing2Feedback(void *condition, asEvent *event);
STATIC bool m_GuardProcessing2Error(void *condition, asEvent *event);

/* Entry and Exit actions: */
STATIC void m_EntryProcessingState( void *stateData, asEvent *event );
STATIC void m_ExitProcessingState( void *stateData, asEvent *event );

/* Transitions' actions: */
STATIC void m_ActionProcessing2Feedback(\
                        void *currentStateData, asEvent *event,
                        void *newStateData );
STATIC void m_ActionProcessing2Error(\
                        void *currentStateData, asEvent *event,
                        void *newStateData );

/* Transitions definition */
STATIC asState gProcessing_state = {
    .parentState = NULL,
    .entryState = NULL,
    .transitions = (asTransition[]){
        {kAtStringEvent, \
        (Condition*)NULL, \
        (GuardFuncProto)m_GuardProcessing2Error, \
        (TransitionActionFuncProto)m_ActionProcessing2Error, \
        (asState*)&gError_state},

        {kAtStringEvent, \
        (Condition*)NULL, \
        (GuardFuncProto)m_GuardProcessing2Feedback, \
        (TransitionActionFuncProto)m_ActionProcessing2Feedback,\
        (asState*)&gFeedback_state}
        },
    .numTransitions = 2,
    .data = &gAt_Obj,
    .entryAction = m_EntryProcessingState,
    .exitAction = m_ExitProcessingState
};

/*  ___  ______     ______              ____               __        _____ __        __     
   /   |/_  __/    / ____/__  ___  ____/ / /_  ____ ______/ /__     / ___// /_____ _/ /____ 
  / /| | / /      / /_  / _ \/ _ \/ __  / __ \/ __ `/ ___/ //_/     \__ \/ __/ __ `/ __/ _ \
 / ___ |/ /      / __/ /  __/  __/ /_/ / /_/ / /_/ / /__/ ,<       ___/ / /_/ /_/ / /_/  __/
/_/  |_/_/      /_/    \___/\___/\__,_/_.___/\__,_/\___/_/|_|     /____/\__/\__,_/\__/\___/ 
                                                                                             */
/* Global Variable */


/* Guard */

STATIC bool m_GuardFeedback2Idle(void *condition, asEvent *event);
STATIC bool m_GuardFeedback2Error(void *condition, asEvent *event);

/* Entry and Exit actions: */
STATIC void m_EntryFeedbackState( void *stateData, asEvent *event );
STATIC void m_ExitFeedbackState( void *stateData, asEvent *event );

/* Transitions' actions: */
STATIC void m_ActionFeedback2Idle(\
                        void *currentStateData, asEvent *event,
                        void *newStateData );
STATIC void m_ActionFeedback2Error(\
                        void *currentStateData, asEvent *event,
                        void *newStateData );

/* Transitions definition */
STATIC asState gFeedback_state = {
    .parentState = NULL,
    .entryState = NULL,
    .transitions = (asTransition[]){
        {kAtObjectEvent, \
        (Condition*)NULL, \
        (GuardFuncProto)m_GuardFeedback2Error, \
        (TransitionActionFuncProto)m_ActionFeedback2Error, \
        (asState*)&gError_state},

        {kAtObjectEvent, \
        (Condition*)NULL, \
        (GuardFuncProto)m_GuardFeedback2Idle, \
        (TransitionActionFuncProto)m_ActionFeedback2Idle,\
        (asState*)&gIdle_state}
        },
    .numTransitions = 2,
    .data = &gAt_Obj,
    .entryAction = m_EntryFeedbackState,
    .exitAction = m_ExitFeedbackState
};


/*  ___   __       ______                          _____ __        __     
   /   | / /_     / ____/_____________  _____     / ___// /_____ _/ /____ 
  / /| |/ __/    / __/ / ___/ ___/ __ \/ ___/     \__ \/ __/ __ `/ __/ _ \
 / ___ / /_     / /___/ /  / /  / /_/ / /        ___/ / /_/ /_/ / /_/  __/
/_/  |_\__/    /_____/_/  /_/   \____/_/        /____/\__/\__,_/\__/\___/ */

/* Entry and Exit actions: */
STATIC void m_EntryErrorState( void *stateData, asEvent *event );
STATIC void m_ExitErrorState( void *stateData, asEvent *event );

/* Transitions' actions: */
STATIC void m_ActionError2Idle(\
                        void *currentStateData, asEvent *event,
                        void *newStateData );

/* Transitions definition */
STATIC asState gError_state = {
    .parentState = NULL,
    .entryState = NULL,
    .transitions = (asTransition[]){
        {kIdleEvent, \
        (Condition*)NULL, \
        (GuardFuncProto)NULL, \
        (TransitionActionFuncProto)m_ActionError2Idle, \
        (asState*)&gIdle_state}
        },
    .numTransitions = 1,
    .data = &gAt_Obj,
    .entryAction = m_EntryErrorState,
    .exitAction = m_ExitErrorState
};

/* FsmError State definition */

/* Entry and Exit actions: */
STATIC void m_EntryFsmErrorState( void *stateData, asEvent *event )
{
    AtDebugPrintf("Fsm in error!");
}
STATIC void m_ExitFsmErrorState( void *stateData, asEvent *event )
{

}

/* Transitions definition */
STATIC asState gFsm_error_state = {
    .parentState = NULL,
    .entryState = NULL,
    .transitions = NULL,
    .numTransitions = 0,
    .data = NULL,
    .entryAction = m_EntryFsmErrorState,
    .exitAction = m_ExitFsmErrorState
};


/*  ______                    ____       ____
   / ____/_  ______  _____   / __ \___  / __/
  / /_  / / / / __ \/ ___/  / / / / _ \/ /_  
 / __/ / /_/ / / / / /__   / /_/ /  __/ __/  
/_/    \__,_/_/ /_/\___/  /_____/\___/_/     
*/
/* Idle State definition */
/* Guard */
STATIC bool m_GuardIdle2Processing(void *condition, asEvent *event)
{
    char at_temp[MAX_ATCMD_STR_LEN];
    memset(at_temp, 0, MAX_ATCMD_STR_LEN);
    strncpy(at_temp, ((asAtStr*)event->data)->pData, ((asAtStr*)event->data)->size);

    if(NULL != strstr(at_temp, (char*)condition))
    {
        uint8_t len = strlen(at_temp);
        for(uint8_t i=0; i<len; i++)
        {
            if(at_temp[i] == '\r' || at_temp[i] == '\n')
            {
                memset(gAt_Obj.pAt_str->pData, 0, gAt_Obj.pAt_str->size);
                strncpy(gAt_Obj.pAt_str->pData, at_temp, i);

                AtTracePrintf("AT format is right!");
                AtTracePrintf("%s", gAt_Obj.pAt_str->pData);
                return kAtTrue;
            }
        }
    }
    __IRaiseAtError(kAtError);
    return kAtFalse;
}

STATIC bool m_GuardIdle2Error(void *condition, asEvent *event)
{
    return (kAtOk != __ICheckAtErrorCode());
}

/* Entry and Exit actions: */
STATIC void m_EntryIdleState( void *stateData, asEvent *event )
{
   AtTracePrintf("Entry the gIdle_state!");

   AtTracePrintf("End Entry!");
}

STATIC void m_ExitIdleState( void *stateData, asEvent *event )
{
   AtTracePrintf("Exit the gIdle_state!");
}

/* Transitions' actions: */
STATIC void m_ActionIdle2Processing(\
                        void *currentStateData, asEvent *event,
                        void *newStateData )
{
   AtTracePrintf("Action: Idle to Processing!");
    /* Get AT <Cmd + kvs>'s size, remove the AT header. */
    //uint8_t at_head_size = strnlen(at_header_str, MAX_ATCMD_STR_LEN);
    #if 0
    uint8_t at_head_size = strlen(at_header_str);
    uint16_t at_str_size = gAt_Obj.pAt_str->size - at_head_size;
    gAt_Obj.pAt_str->size = at_str_size;

    /* Remove the "AT+" header */
    AtTracePrintf("%s, %s", gAt_Obj.pAt_str->pData, gAt_Obj.pAt_str->pData + at_head_size);
    memcpy(gAt_Obj.pAt_str->pData, gAt_Obj.pAt_str->pData + at_head_size, \
            at_str_size + at_head_size);
    #else

    uint8_t at_head_size = strlen(at_header_str);
    uint16_t at_str_size = gAt_Obj.pAt_str->size - at_head_size;
    char *at_head = strstr(gAt_Obj.pAt_str->pData, at_header_str);
    memcpy(gAt_Obj.pAt_str->pData, at_head + at_head_size, at_str_size);

    #endif
    AtTracePrintf("End!");
}

STATIC void m_ActionIdle2Error(\
                        void *currentStateData, asEvent *event,
                        void *newStateData )
{
   AtTracePrintf("m_ActionIdle2Error");
}


/* Processing State definition */
/* Guard */

STATIC bool m_GuardProcessing2Feedback(void *condition, asEvent *event)
{
    if(kAtStringEvent == event->type)
    {
        return __ICheckAtCmdFormatAndLoadAtObj(&gAt_Obj);
    }
    __IRaiseAtError(kAtEventError);
    return kAtFalse; 
}

STATIC bool m_GuardProcessing2Error(void *condition, asEvent *event)
{
    return (kAtOk != __ICheckAtErrorCode());
}

/* Entry and Exit actions: */
STATIC void m_EntryProcessingState( void *stateData, asEvent *event )
{
   AtTracePrintf("Entry Processing state!");
    __IRaiseAtError(kAtOk);
    __IRaiseNewEvent(event, kAtStringEvent, (pVoid_To_pAtObj(gProcessing_state.data)->pAt_str));
   AtTracePrintf("End!");
}
STATIC void m_ExitProcessingState( void *stateData, asEvent *event )
{
   AtTracePrintf("Exit Processing state!");
}

/* Transitions' actions: */
STATIC void m_ActionProcessing2Feedback(\
                        void *currentStateData, asEvent *event,
                        void *newStateData )
{
   AtTracePrintf("At Action Processing to feedback!");
}

STATIC void m_ActionProcessing2Error(\
                        void *currentStateData, asEvent *event,
                        void *newStateData )
{
   AtTracePrintf("AT Processing failed!");
}                        

/* Feedback State definition */
/* Guard */

STATIC bool m_GuardFeedback2Idle(void *condition, asEvent *event)
{
    AtTracePrintf("GuardFeedback2Idle");
    if(kAtObjectEvent == event->type)
    {
        /* TODO Need the type of key in python scripts. Save the KvList in type in the event data. */
        // event->data = AtMalloc()
        if (kAtQueryType == gAt_Obj.type)
        {
            AtTracePrintf("pVoid_To_pAtObj(gFeedback_state.data)->pKv_list->pList[i].key.pData 0x%x", pVoid_To_pAtObj(gFeedback_state.data)->pKv_list->pList[0].key.pData[0]);
            if (pVoid_To_pAtObj(gFeedback_state.data)->pKv_list->pList[0].key.pData[0] == '\n' || pVoid_To_pAtObj(gFeedback_state.data)->pKv_list->pList[0].key.pData[0] == '\r')
            {
                AtTracePrintf("get unformat query at cmd.");
                return kAtTrue;
            }
        }

        for(int i = 0; i < pVoid_To_pAtObj(gFeedback_state.data)->pKv_list->size; i++)
        {
            int index = __IGetHashIndex(kAtKeyFlag, pVoid_To_pAtObj(gFeedback_state.data)->pKv_list->pList[i].key.pData);
            if (-1 == index)
            {
                AtTracePrintf("Wrong Key index at i = %d", i);
                __IRaiseAtError(kAtInvalidKey);
                return kAtFalse;
            }
        }
        AtTracePrintf("True in GuardFeedback2Idle");
        return kAtTrue;
    }
    return kAtFalse;
}
STATIC bool m_GuardFeedback2Error(void *condition, asEvent *event)
{
    return (kAtOk != __ICheckAtErrorCode());
}

/* Entry and Exit actions: */
STATIC void m_EntryFeedbackState( void *stateData, asEvent *event )
{
   AtTracePrintf("Entry feedback state!");
    __IRaiseAtError(kAtOk);
    __IRaiseNewEvent(event, kAtObjectEvent, gFeedback_state.data);
}
STATIC void m_ExitFeedbackState( void *stateData, asEvent *event )
{
    __IRaiseNewEvent(event, kIdleEvent, NULL);
}

/* Transitions' actions: */
STATIC void m_ActionFeedback2Idle(\
                        void *currentStateData, asEvent *event,
                        void *newStateData )
{
    AtTracePrintf("Action feedback to idle");
    asAtObj *at_obj = pVoid_To_pAtObj(currentStateData);

    if(kAtQueryType == at_obj->type)
    {
        AtDebugPrintf("At Query!\n");

        /* Run the Registered function. */
        if(NULL != at_obj->pFunc)
        {
            at_obj->pFunc(at_obj->pKv_list, at_obj->pFeedback_at_str);
        }
        else
        {
            AtTracePrintf("No operation function!");
            __IRaiseAtError(kAtNotAllow);
        }

    }
    else if(kAtControlType == at_obj->type)
    {
        /* Run the Registered function. */
        if(NULL != at_obj->pFunc)
        {
            at_obj->pFunc(at_obj->pKv_list, at_obj->pFeedback_at_str);
        }
        else
        {
            AtTracePrintf("No operation function!");
            __IRaiseAtError(kAtNotAllow);
        }
    }

    /* Check if feedback_str is NULL and take the default or custom feedback. */
    if(0 != at_obj->pFeedback_at_str->size)
    {
        strncat(at_obj->pAt_str->pData, "#", MAX_ATCMD_STR_LEN);
        strncat(at_obj->pAt_str->pData, at_obj->pFeedback_at_str->pData, MAX_ATCMD_STR_LEN);
        snprintf(at_obj->pFeedback_at_str->pData, MAX_ATCMD_STR_LEN, "AT+%s\r\n", at_obj->pAt_str->pData);
    }

    /* Run the Feedback fucntion.  */
    if(NULL != at_obj->feedbackFunc)
    {
        AtTracePrintf("feedback Func.\r\n");
        if(at_obj->pFeedback_at_str->size > 0)
        {
            at_obj->feedbackFunc(at_obj->pFeedback_at_str->pData);
        }
    }
    else
    {
        AtTracePrintf("No feedback Func!\r\n");
        __IRaiseAtError(kAtNotAllow);
    }
        
    /* Clear all the global buffers. */
    m_ClearFsmGlobalVariables();
}


STATIC void m_ActionFeedback2Error(\
                        void *currentStateData, asEvent *event,
                        void *newStateData )
{
    __IRaiseNewEvent(event, kAtEventError, NULL);
   AtTracePrintf("Action Feedback to Error!");
}

/* Error State definition */

/* Entry and Exit actions: */
STATIC void m_EntryErrorState( void *stateData, asEvent *event )
{
    /* Feedback the Error log. */
   AtTracePrintf("AT Error: %s", gAt_error_code_str[__ICheckAtErrorCode()]);
   snprintf(gAt_Obj.pFeedback_at_str->pData ,MAX_ATCMD_STR_LEN, "AT ErrorCode: %s\r\n", gAt_error_code_str[__ICheckAtErrorCode()]);
   //gAt_Obj.feedbackFunc(gAt_Obj.pFeedback_at_str->pData);
   printf((gAt_Obj.pFeedback_at_str)->pData);

    /* Clear all the global buffers. */
    m_ClearFsmGlobalVariables();

    __IRaiseAtError(kAtOk);

    __IRaiseNewEvent(event, kIdleEvent, NULL);
}

STATIC void m_ExitErrorState( void *stateData, asEvent *event )
{

}

/* Transitions' actions: */
STATIC void m_ActionError2Idle(\
                        void *currentStateData, asEvent *event,
                        void *newStateData )
{
    AtTracePrintf("Error to Idle!");
}
