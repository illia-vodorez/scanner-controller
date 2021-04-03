  /******************************************************************************
  * @file           : fw_spi.h
  * @brief          :                 
  *****************************************************************************/

#ifndef __SPI_INIT_H
#define __SPI_INIT_H

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

//*******************************************************************************
//
//*******************************************************************************
void SPI1_Init(LL_SPI_InitTypeDef* SPI_InitStruct, LL_GPIO_InitTypeDef* GPIO_InitStruct);
/*******************************************************************************/

#endif /* __SPI_INIT_H */
