#include "pc_com_private.h"

extern uint8_t UserRxBufferFS[APP_RX_DATA_SIZE];


uint8_t ubGetRecived_USB_Byte(uint8_t ubBufElemOrder)
{
  return UserRxBufferFS[ubBufElemOrder];
}


uint8_t ubTransmit_USB_Byte(uint8_t ubBufElemOrder)
{
  return (uint8_t)CDC_Transmit_FS(&ubBufElemOrder, 1);
}
