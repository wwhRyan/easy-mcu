/*
 * @File: SoftTimer.h
 * @Author: Mauro Gamba
 * @Descripttion: Contains all functions support for handling software timers.
 * @version: v1.0.0
 * @Date: 22 February 2013
 * @LastEditors: xusongbin@appotronics.cn
 * @LastEditTime: 2021-09-13 09:55:33
 * @Copyright: Copyright (c) 2020
 */

#ifndef SOFTTIMERS_H
#define SOFTTIMERS_H

#include "board.h"

#define ERR_TIMER_NOT_AVAILABLE     0xFF

#define DIS_TIMER_INT_RX
#define EN_TIMER_INT_RX

/**
 * @group Typedef definition.
 */
typedef void (*timer_handler_t)(void);

typedef struct
{
    uint16_t TimeoutTick; //!< Timeout tick counter. NB: MSB is 1 if the timer is active, 0 otherwise */
    timer_handler_t TimerHandler; //!< Timeout function handler */
} timer_t;

/**
 * @fn void Timer_Init(void)
 * @brief Initialize software timer module data structures.
 */
void Timer_Init(void);

/**
 * @fn uint8_t Timer_Create(uint16_t timeout, func_pnt_t FunctionPointer)
 * @brief Create a software timer.
 * @param FunctionPointer The function to call on timeout.
 * @return The timer id or the error code ERR_TIMER_NOT_AVAILABLE.
 */
uint8_t Timer_Create(timer_handler_t FunctionPointer);

/**
 * @fn void Timer_Destroy(uint8_t timerId)
 * @brief Destroy the timer passed as parameter
 * @param timerId The id of the timer to destroy.
 */
void Timer_Destroy(uint8_t timerId);

/**
 * @fn void Timer_Start(uint8_t timerId)
 * @brief Start the timer.
 * @param timerId The id of the timer to start.
 * @param timeout The timeout in tens of milliseconds. Max timeout value is 16383 (14 bits available).
 */
void Timer_Start(uint8_t timerId, uint16_t timeout);

/**
 * @fn void Timer_Stop(uint8_t timerId)
 * @brief Stop the timer.
 * @param timerId The id of the timer to stop.
 */
void Timer_Stop(uint8_t timerId);

/**
 * @fn void Timer_Update(void)
 * @brief Update active timers. Note that it's called in interrupt contest.
 */
void Timer_Update(void);

#endif // SOFTTIMERS_H
