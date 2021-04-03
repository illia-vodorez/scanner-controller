  /******************************************************************************
  * @file           : fw_gpio.h
  * @brief          :                  
  *****************************************************************************/

#ifndef __GPIO_INIT_H
#define __GPIO_INIT_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
#include "stm32f1xx_ll_bus.h"
#include "stm32f1xx_ll_system.h"
#include "stm32f1xx_ll_cortex.h"
#include "stm32f1xx_ll_utils.h"
#include "stm32f1xx_ll_pwr.h"
#include "stm32f1xx.h"
#include "stm32f1xx_ll_gpio.h"

//*******************************************************************************
//
//*******************************************************************************
void GPIO_Init(LL_GPIO_InitTypeDef* GPIO_InitStruct);
//*******************************************************************************

#endif /* __GPIO_INIT_H */
