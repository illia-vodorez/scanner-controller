#include "Chip_init.h"

LL_ADC_InitTypeDef ADC_InitStruct;

LL_GPIO_InitTypeDef GPIO_InitStruct;

LL_TIM_InitTypeDef TIM2_InitStruct;
LL_TIM_InitTypeDef TIM3_InitStruct;
LL_TIM_InitTypeDef TIM4_InitStruct;

LL_USART_InitTypeDef USART1_InitStruct;
LL_USART_InitTypeDef USART2_InitStruct;
LL_USART_InitTypeDef USART3_InitStruct;
LL_GPIO_InitTypeDef  GPIO_UART1_InitStruct;
LL_GPIO_InitTypeDef  GPIO_UART2_InitStruct;
LL_GPIO_InitTypeDef  GPIO_UART3_InitStruct;

LL_SPI_InitTypeDef   SPI_InitStruct;
LL_GPIO_InitTypeDef  GPIO_SPI_InitStruct;

void Chip_Init(void)
{
  SystemClock_Config();
  
  GPIO_Init(&GPIO_InitStruct);
  
  DMA_Init();
  
  SPI1_Init(&SPI_InitStruct, &GPIO_SPI_InitStruct);

  TIM2_Init(&TIM2_InitStruct);
  TIM3_Init(&TIM3_InitStruct);
  TIM4_Init(&TIM4_InitStruct);

  USART1_UART_Init(&USART1_InitStruct, &GPIO_UART1_InitStruct);
  USART2_UART_Init(&USART2_InitStruct, &GPIO_UART2_InitStruct);
  USART3_UART_Init(&USART3_InitStruct, &GPIO_UART3_InitStruct);
  
  ADC1_Init(&ADC_InitStruct);
}
