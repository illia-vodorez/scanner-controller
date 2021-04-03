#include "fw_gpio.h"

/*******************************************************************************/
void GPIO_Init(LL_GPIO_InitTypeDef* GPIO_InitStruct)
{
  /* GPIO Ports Clock Enable */
  LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_GPIOC);
  LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_GPIOD);
  LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_GPIOA);
  LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_GPIOB);

  /**/
  LL_GPIO_ResetOutputPin(GPIOC, LL_GPIO_PIN_13);

  /**/
  GPIO_InitStruct->Pin = LL_GPIO_PIN_13;
  GPIO_InitStruct->Mode = LL_GPIO_MODE_OUTPUT;
  GPIO_InitStruct->Speed = LL_GPIO_SPEED_FREQ_LOW;
  GPIO_InitStruct->OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  LL_GPIO_Init(GPIOC, GPIO_InitStruct);

}
/*******************************************************************************/

