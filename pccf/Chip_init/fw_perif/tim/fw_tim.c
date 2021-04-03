#include "fw_tim.h"


/*******************************************************************************/
void TIM2_Init(LL_TIM_InitTypeDef* TIM_InitStruct)
{

  /* Peripheral clock enable */
  LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM2);

  /* TIM2 interrupt Init */
  NVIC_SetPriority(TIM2_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),5, 0));
  NVIC_EnableIRQ(TIM2_IRQn);

  TIM_InitStruct->Prescaler = 0;
  TIM_InitStruct->CounterMode = LL_TIM_COUNTERMODE_UP;
  TIM_InitStruct->Autoreload = 65535;
  TIM_InitStruct->ClockDivision = LL_TIM_CLOCKDIVISION_DIV1;
  LL_TIM_Init(TIM2, TIM_InitStruct);
  LL_TIM_DisableARRPreload(TIM2);
  LL_TIM_SetClockSource(TIM2, LL_TIM_CLOCKSOURCE_INTERNAL);
  LL_TIM_SetTriggerOutput(TIM2, LL_TIM_TRGO_RESET);
  LL_TIM_DisableMasterSlaveMode(TIM2);
}
/*******************************************************************************/


/*******************************************************************************/
void TIM3_Init(LL_TIM_InitTypeDef* TIM_InitStruct)
{
  /* Peripheral clock enable */
  LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM3);

  /* TIM3 interrupt Init */
  NVIC_SetPriority(TIM3_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),5, 0));
  NVIC_EnableIRQ(TIM3_IRQn);

  TIM_InitStruct->Prescaler = 0;
  TIM_InitStruct->CounterMode = LL_TIM_COUNTERMODE_UP;
  TIM_InitStruct->Autoreload = 65535;
  TIM_InitStruct->ClockDivision = LL_TIM_CLOCKDIVISION_DIV1;
  LL_TIM_Init(TIM3, TIM_InitStruct);
  LL_TIM_DisableARRPreload(TIM3);
  LL_TIM_SetClockSource(TIM3, LL_TIM_CLOCKSOURCE_INTERNAL);
  LL_TIM_SetTriggerOutput(TIM3, LL_TIM_TRGO_RESET);
  LL_TIM_DisableMasterSlaveMode(TIM3);
}
/*******************************************************************************/


/*******************************************************************************/
void TIM4_Init(LL_TIM_InitTypeDef* TIM_InitStruct)
{
  /* Peripheral clock enable */
  LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM4);

  /* TIM4 interrupt Init */
  NVIC_SetPriority(TIM4_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),5, 0));
  NVIC_EnableIRQ(TIM4_IRQn);

  TIM_InitStruct->Prescaler = 0;
  TIM_InitStruct->CounterMode = LL_TIM_COUNTERMODE_UP;
  TIM_InitStruct->Autoreload = 65535;
  TIM_InitStruct->ClockDivision = LL_TIM_CLOCKDIVISION_DIV1;
  LL_TIM_Init(TIM4, TIM_InitStruct);
  LL_TIM_DisableARRPreload(TIM4);
  LL_TIM_SetClockSource(TIM4, LL_TIM_CLOCKSOURCE_INTERNAL);
  LL_TIM_SetTriggerOutput(TIM4, LL_TIM_TRGO_RESET);
  LL_TIM_DisableMasterSlaveMode(TIM4);
}
/*******************************************************************************/