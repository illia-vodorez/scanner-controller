  /*****************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  *****************************************************************************/
 
#include "main.h"
#include "cmsis_os.h"
#include "usb_device.h"

osThreadId defaultTaskHandle;
osThreadId commTaskHandle;

uint8_t usbByte;

LL_TIM_InitTypeDef MOT_TIM_Struct;

void StartDefaultTask(void const * argument);
void StartUSBTask(void const * argument);

int main(void)
{
  HAL_Init();
  Chip_Init();

  osThreadDef(defaultTask, StartDefaultTask, osPriorityNormal, 0, 128);
  defaultTaskHandle = osThreadCreate(osThread(defaultTask), NULL);

  osKernelStart();
}

void StartDefaultTask(void const * argument)
{
  /* init code for USB_DEVICE */
  MX_USB_DEVICE_Init();
  /* Infinite loop */
  osThreadDef(usbTask, StartUSBTask, osPriorityNormal, 0, 512);
  commTaskHandle = osThreadCreate(osThread(usbTask), NULL);

  //MOT_TIM_Struct = tGetMotTimAddress();
  vStartMotorTim(); 

  for(;;)
  {
    LL_GPIO_ResetOutputPin(GPIOC, LL_GPIO_PIN_13);
    osDelay(250);
    LL_GPIO_SetOutputPin(GPIOC, LL_GPIO_PIN_13);
    osDelay(250);
  }
}


void StartUSBTask(void const * argument)
{

  for(;;)
  {
    uint32_t temp = HAL_GetTick();
    while (ubTransmit_USB_Byte(99) != 0)
    {
      if (HAL_GetTick() > temp + 10000) break;
    }
    
    osDelay(500);
    usbByte = ubGetRecived_USB_Byte(0);
    osDelay(500);
    
  }
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  if (htim->Instance == TIM1) {
    HAL_IncTick();
  }
}

void Error_Handler(void)
{
  __disable_irq();
  while (1)
  {
  }
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
