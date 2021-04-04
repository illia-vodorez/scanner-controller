  /******************************************************************************
  * @file           : Chip_init.h
  * @brief          :                  
  *****************************************************************************/

#ifndef __CHIP_INIT_H
#define __CHIP_INIT_H

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

#include "fw_adc.h"
#include "fw_gpio.h"
#include "fw_tim.h"
#include "fw_uart.h"
#include "fw_spi.h"
#include "fw_dma.h"
#include "fw_rcc.h"


void Chip_Init(void);

#endif /* __CHIP_INIT_H */
