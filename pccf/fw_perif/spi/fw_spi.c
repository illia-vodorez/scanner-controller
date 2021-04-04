#include "fw_spi.h"

/*******************************************************************************/
void SPI1_Init(LL_SPI_InitTypeDef* SPI_InitStruct, LL_GPIO_InitTypeDef* GPIO_InitStruct)
{

  /* Peripheral clock enable */
  LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_SPI1);

  LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_GPIOA);
  /**SPI1 GPIO Configuration
  PA5   ------> SPI1_SCK
  PA6   ------> SPI1_MISO
  PA7   ------> SPI1_MOSI
  */
  GPIO_InitStruct->Pin = LL_GPIO_PIN_5|LL_GPIO_PIN_7;
  GPIO_InitStruct->Mode = LL_GPIO_MODE_ALTERNATE;
  GPIO_InitStruct->Speed = LL_GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct->OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  LL_GPIO_Init(GPIOA, GPIO_InitStruct);

  GPIO_InitStruct->Pin = LL_GPIO_PIN_6;
  GPIO_InitStruct->Mode = LL_GPIO_MODE_FLOATING;
  LL_GPIO_Init(GPIOA, GPIO_InitStruct);

  /* SPI1 DMA Init */

  /* SPI1_TX Init */
  LL_DMA_SetDataTransferDirection(DMA1, LL_DMA_CHANNEL_3, LL_DMA_DIRECTION_MEMORY_TO_PERIPH);

  LL_DMA_SetChannelPriorityLevel(DMA1, LL_DMA_CHANNEL_3, LL_DMA_PRIORITY_LOW);

  LL_DMA_SetMode(DMA1, LL_DMA_CHANNEL_3, LL_DMA_MODE_NORMAL);

  LL_DMA_SetPeriphIncMode(DMA1, LL_DMA_CHANNEL_3, LL_DMA_PERIPH_NOINCREMENT);

  LL_DMA_SetMemoryIncMode(DMA1, LL_DMA_CHANNEL_3, LL_DMA_MEMORY_INCREMENT);

  LL_DMA_SetPeriphSize(DMA1, LL_DMA_CHANNEL_3, LL_DMA_PDATAALIGN_BYTE);

  LL_DMA_SetMemorySize(DMA1, LL_DMA_CHANNEL_3, LL_DMA_MDATAALIGN_BYTE);

  /* SPI1 parameter configuration*/
  SPI_InitStruct->TransferDirection = LL_SPI_FULL_DUPLEX;
  SPI_InitStruct->Mode = LL_SPI_MODE_MASTER;
  SPI_InitStruct->DataWidth = LL_SPI_DATAWIDTH_8BIT;
  SPI_InitStruct->ClockPolarity = LL_SPI_POLARITY_LOW;
  SPI_InitStruct->ClockPhase = LL_SPI_PHASE_1EDGE;
  SPI_InitStruct->NSS = LL_SPI_NSS_SOFT;
  SPI_InitStruct->BaudRate = LL_SPI_BAUDRATEPRESCALER_DIV4;
  SPI_InitStruct->BitOrder = LL_SPI_MSB_FIRST;
  SPI_InitStruct->CRCCalculation = LL_SPI_CRCCALCULATION_DISABLE;
  SPI_InitStruct->CRCPoly = 10;
  LL_SPI_Init(SPI1, SPI_InitStruct);
}
/*******************************************************************************/
