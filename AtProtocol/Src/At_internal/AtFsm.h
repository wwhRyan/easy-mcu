/*
 * @file: AtFsm.h
 * @author: gengliang (gengliang@appotronics.cn)
 * @brief:
 * @date: 2021-07-28
 */

#ifndef __AT_FSM_H
#define __AT_FSM_H

#include "AtConfig.h"
#include "AtInternalConfig.h"
#include "stateMachine.h"


#ifdef __cplusplus
extern "C" {
#endif

/* TEST MACRO */
#ifdef __TEST__
#define STATIC
STATIC int m_AddTwo(int a, int b);
#else
#define STATIC static
#endif

/* Function Pointer Typedef */
typedef void* Condition;
typedef bool (*GuardFuncProto)(void*, asEvent*);
typedef void (*StateActionFuncProto)(void* stateData, asEvent* event);
typedef void (*TransitionActionFuncProto)(void* currentStateData, asEvent* event, void* newStateData);

/* Types of events */
enum eEventType {
    kInputStringEvent,
    kAtStringEvent,
    kAtObjectEvent,
    kErrorCodeEvent,
    kIdleEvent
};

/* Export Variables */
extern asStateMachine gFsm;
extern asEvent gEvent;
extern asAtKvList gAt_kv_list;
extern asAtStr gAt_str;
extern asAtObj gAt_Obj;

/*  ___    ____  ____       ____            __                 __  _
   /   |  / __ \/  _/      / __ \___  _____/ /___ __________ _/ /_(_)___  ____  _____
  / /| | / /_/ // /       / / / / _ \/ ___/ / __ `/ ___/ __ `/ __/ / __ \/ __ \/ ___/
 / ___ |/ ____// /       / /_/ /  __/ /__/ / /_/ / /  / /_/ / /_/ / /_/ / / / (__  )
/_/  |_/_/   /___/      /_____/\___/\___/_/\__,_/_/   \__,_/\__/_/\____/_/ /_/____/  */

void IAtFsmInit(p_VoidFuncpChar feedback_func);
void IRaiseNewEvent(int type);
asEvent* IGetCurrEventPtr(void);
void IAtFsmHandleInnerEvent(void);
void IInputAtStrToFsm(char* at_cmd_kv);

/* Private Methods Extern for Testing */
#ifdef __TEST__
/********* Global variables *********/
/* States Declarations*/
extern STATIC asState
    gProcessing_state,
    gFeedback_state,
    gIdle_state,
    gError_state,
    gFsm_error_state;

/* Idle state */
/* Conditions */
extern STATIC char at_header_str[];

/* Transition Guards */
STATIC bool m_GuardIdle2Processing(void* condition, asEvent* event);
STATIC bool m_GuardIdle2Error(void* condition, asEvent* event);

/* Entry and Exit actions: */
STATIC void m_EntryIdleState(void* stateData, asEvent* event);
STATIC void m_ExitIdleState(void* stateData, asEvent* event);

/* Transitions' actions: */
STATIC void m_ActionIdle2Processing(
    void* currentStateData, asEvent* event,
    void* newStateData);
STATIC void m_ActionIdle2Error(
    void* currentStateData, asEvent* event,
    void* newStateData);

/* Process state */
/* Guard */
STATIC bool m_GuardProcessing2Feedback(void* condition, asEvent* event);
STATIC bool m_GuardProcessing2Error(void* condition, asEvent* event);

/* Entry and Exit actions: */
STATIC void m_EntryProcessingState(void* stateData, asEvent* event);
STATIC void m_ExitProcessingState(void* stateData, asEvent* event);

/* Transitions' actions: */
STATIC void m_ActionProcessing2Feedback(
    void* currentStateData, asEvent* event,
    void* newStateData);
STATIC void m_ActionProcessing2Error(
    void* currentStateData, asEvent* event,
    void* newStateData);

/* Guard */

STATIC bool m_GuardFeedback2Idle(void* condition, asEvent* event);
STATIC bool m_GuardFeedback2Error(void* condition, asEvent* event);

/* Entry and Exit actions: */
STATIC void m_EntryFeedbackState(void* stateData, asEvent* event);
STATIC void m_ExitFeedbackState(void* stateData, asEvent* event);

/* Transitions' actions: */
STATIC void m_ActionFeedback2Idle(
    void* currentStateData, asEvent* event,
    void* newStateData);
STATIC void m_ActionFeedback2Error(
    void* currentStateData, asEvent* event,
    void* newStateData);

#endif

#ifdef __cplusplus
}
#endif
#endif /* __AT_FSM_H */
