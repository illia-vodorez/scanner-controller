#include "fw_tim.h"

LL_TIM_InitTypeDef MOT_TIM_Struct;

/*******************************************************************************/
void MOT_TIM_Init()
{

  /* Peripheral clock enable */
  LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_TIM2);

  /* TIM2 interrupt Init */
  NVIC_SetPriority(TIM2_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(),5, 0));
  NVIC_EnableIRQ(TIM2_IRQn);

  MOT_TIM_Struct.Prescaler = 700;
  MOT_TIM_Struct.CounterMode = LL_TIM_COUNTERMODE_UP;
  MOT_TIM_Struct.Autoreload = 65535/2;
  MOT_TIM_Struct.ClockDivision = LL_TIM_CLOCKDIVISION_DIV1;
  LL_TIM_Init(MOT_TIM, &MOT_TIM_Struct);
  LL_TIM_DisableARRPreload(MOT_TIM);
  LL_TIM_SetClockSource(MOT_TIM, LL_TIM_CLOCKSOURCE_INTERNAL);
  LL_TIM_SetTriggerOutput(MOT_TIM, LL_TIM_TRGO_RESET);
  LL_TIM_DisableMasterSlaveMode(MOT_TIM);
  LL_TIM_EnableIT_UPDATE (MOT_TIM);  
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

LL_TIM_InitTypeDef* tGetMotTimAddress (void)
{
  return &MOT_TIM_Struct;
}


void vStartMotorTim(void)
{
  LL_TIM_EnableCounter(MOT_TIM);
}