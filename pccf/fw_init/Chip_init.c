#include "Chip_init.h"

void Chip_Init(void)
{
  SystemClock_Config();
  
  GPIO_Init();
  
  DMA_Init();
  
  MOT_TIM_Init();

}
