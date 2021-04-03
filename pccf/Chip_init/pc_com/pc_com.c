#include "pc_com_private.h"

extern uint8_t UserRxBufferFS[APP_RX_DATA_SIZE];


uint8_t ubGetRecived_USB_Byte(uint8_t ubBufElemOrder)
{
  return UserRxBufferFS[ubBufElemOrder];
}


void ubTransmit_USB_Byte(uint8_t ubBufElemOrder)
{

}
