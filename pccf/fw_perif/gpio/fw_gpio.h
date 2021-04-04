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

#define LED_PIN  LL_GPIO_PIN_13
#define LED_PORT GPIOC

#define MOTOR_X_PIN  LL_GPIO_PIN_12
#define MOTOR_Y_PIN  LL_GPIO_PIN_13
#define MOTOR_Z_PIN  LL_GPIO_PIN_14
#define MOTOR_PORT   GPIOB

//*******************************************************************************
//
//*******************************************************************************
void GPIO_Init();
//*******************************************************************************


//*******************************************************************************
//
//*******************************************************************************
LL_GPIO_InitTypeDef* GetMotorGPIO_StructAddress (void);
//*******************************************************************************


//*******************************************************************************
//
//*******************************************************************************
LL_GPIO_InitTypeDef* GetLedGPIO_StructAddress (void);
//*******************************************************************************

#endif /* __GPIO_INIT_H */
