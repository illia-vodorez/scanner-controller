  /******************************************************************************
  * @file           : fw_tim.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  *****************************************************************************/

#ifndef __TIM_INIT_H
#define __TIM_INIT_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
#include "stm32f1xx_ll_adc.h"
#include "stm32f1xx_ll_dma.h"
#include "stm32f1xx_ll_rcc.h"
#include "stm32f1xx_ll_bus.h"
#include "stm32f1xx_ll_system.h"
#include "stm32f1xx_ll_exti.h"
#include "stm32f1xx_ll_cortex.h"
#include "stm32f1xx_ll_utils.h"
#include "stm32f1xx_ll_pwr.h"
#include "stm32f1xx_ll_spi.h"
#include "stm32f1xx_ll_tim.h"
#include "stm32f1xx_ll_usart.h"
#include "stm32f1xx.h"
#include "stm32f1xx_ll_gpio.h"

void TIM2_Init(LL_TIM_InitTypeDef* TIM_InitStruct);
void TIM3_Init(LL_TIM_InitTypeDef* TIM_InitStruct);
void TIM4_Init(LL_TIM_InitTypeDef* TIM_InitStruct);

#endif /* __TIM_INIT_H */
