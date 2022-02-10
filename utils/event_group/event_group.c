/**
 * @file event_group.c
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief 
 * @version 1.02
 * @date 2021-11-18
 * 
 * @copyright Copyright@appotronics 2021. All Rights Reserved
 * 
 */

#include "event_group.h"

EventGroupHandle_t EventGroupCreat(void)
{
    return (EventGroupHandle_t)malloc(sizeof(int));
}

bool EventBitGet(EventGroupHandle_t pEventGroup, int BitInx)
{
    if (BitInx >= sizeof(int) * 8 - 1)
    {
        printf("Error bit inx.\n");
    }
    return (bool)((*pEventGroup >> BitInx) & 0x00000001);
}

void EVentBitSet(EventGroupHandle_t pEventGroup, int BitInx)
{
    if (BitInx >= sizeof(int) * 8 - 1)
    {
        printf("Error bit inx.\n");
    }
    *pEventGroup = *pEventGroup | (0x00000001 << BitInx);
}

void EVentBitClear(EventGroupHandle_t pEventGroup, int BitInx)
{
    if (BitInx >= sizeof(int) * 8 - 1)
    {
        printf("Error bit inx.\n");
    }
    int uxBitsToClear = 0x00000001 << BitInx;
    *pEventGroup = *pEventGroup & (~uxBitsToClear);
}
