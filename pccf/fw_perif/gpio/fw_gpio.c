#include "fw_gpio.h"

LL_GPIO_InitTypeDef GPIO_LedStruct;
LL_GPIO_InitTypeDef GPIO_MotStruct;

/*******************************************************************************/
void GPIO_Init()
{
  
  
  /* GPIO Ports Clock Enable */
  LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_GPIOC);
  LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_GPIOD);
  LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_GPIOA);
  LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_GPIOB);

  /**/
  LL_GPIO_ResetOutputPin(LED_PORT, LED_PIN);

  /**/
  GPIO_LedStruct.Pin = LED_PIN;
  GPIO_LedStruct.Mode = LL_GPIO_MODE_OUTPUT;
  GPIO_LedStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
  GPIO_LedStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  LL_GPIO_Init(LED_PORT, &GPIO_LedStruct);

  /**/
  GPIO_MotStruct.Pin = MOTOR_X_PIN | MOTOR_Y_PIN | MOTOR_Z_PIN;
  GPIO_MotStruct.Mode = LL_GPIO_MODE_OUTPUT;
  GPIO_MotStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
  GPIO_MotStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  LL_GPIO_Init(MOTOR_PORT,&GPIO_MotStruct);

  LL_GPIO_ResetOutputPin(MOTOR_PORT, MOTOR_X_PIN);
  LL_GPIO_ResetOutputPin(MOTOR_PORT, MOTOR_Y_PIN);
  LL_GPIO_ResetOutputPin(MOTOR_PORT, MOTOR_Z_PIN);

}
/*******************************************************************************/


/*******************************************************************************/
LL_GPIO_InitTypeDef* GetLedGPIO_StructAddress (void)
{
  return &GPIO_LedStruct;
}
/*******************************************************************************/


/*******************************************************************************/
LL_GPIO_InitTypeDef* GetMotorGPIO_StructAddress (void)
{
  return &GPIO_MotStruct;
}
/*******************************************************************************/
