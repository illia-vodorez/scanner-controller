  /*****************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  *****************************************************************************/
 
#include "main.h"
#include "cmsis_os.h"
#include "usb_device.h"

osThreadId defaultTaskHandle;
uint8_t usbByte;
void StartDefaultTask(void const * argument);

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
  
  for(;;)
  {
    LL_GPIO_ResetOutputPin(GPIOC, LL_GPIO_PIN_13);
    osDelay(100);
    LL_GPIO_SetOutputPin(GPIOC, LL_GPIO_PIN_13);
    osDelay(100);
    usbByte = ubGetRecived_USB_Byte(0);
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
