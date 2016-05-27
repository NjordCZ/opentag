/**
  ******************************************************************************
  * File Name          : com_port.c
  * Description        : pc com port interface
  ******************************************************************************
  * author: Tomas Krejci <info@tomaskrejci.com>
  * 
  *
  ******************************************************************************
  */
	
#include "stm32f0xx_hal.h"	
#include "usart.h"



#define BUFFERSIZE	255

/* Buffer used for transmission */
uint8_t com_port_TxBuffer[BUFFERSIZE];

/* Buffer used for reception */
uint8_t com_port_RxBuffer[BUFFERSIZE];

void com_port_RX()
{
	HAL_UART_Receive_IT(&huart1, (uint8_t *)com_port_RxBuffer, BUFFERSIZE);

}
