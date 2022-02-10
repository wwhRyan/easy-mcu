/**
 * @file event_group.h
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief 
 * @version 1.02
 * @date 2021-11-18
 * 
 * @copyright Copyright@appotronics 2021. All Rights Reserved
 * 
 */

#ifndef EVENT_GROUP_H
#define EVENT_GROUP_H

#include "../Include/summary.h"

/**
 * event_groups.h
 *
 * Type by which event groups are referenced.  For example, a call to
 * xEventGroupCreate() returns an EventGroupHandle_t variable that can then
 * be used as a parameter to other event group functions.
 *
 * \defgroup EventGroupHandle_t EventGroupHandle_t
 * \ingroup EventGroup
 */
typedef int * EventGroupHandle_t;

EventGroupHandle_t EventGroupCreat(void);
bool EventBitGet(EventGroupHandle_t pEventGroup, int BitInx);
void EVentBitSet(EventGroupHandle_t pEventGroup, int BitInx);
void EVentBitClear(EventGroupHandle_t pEventGroup, int BitInx);

#endif