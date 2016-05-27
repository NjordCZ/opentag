/**
  ******************************************************************************
  * File Name          : lasertag_board.c
  * Description        : lasertag board driver
  ******************************************************************************
  * author: Tomas Krejci <info@tomaskrejci.com>
  * 
  *
  ******************************************************************************
  */
#include "main.h"	

// packet... head or data
uint8_t PacketHead = TRUE;

// data page counter
uint8_t DataPageCnt;

/* Buffer used for transmission */
uint8_t TxBuffer[LASERTAG_DATA_PAGE_SIZE];
/* Buffer used for reception */
uint8_t RxBuffer[LASERTAG_DATA_PAGE_SIZE];

void LASERTAG_BOARD_Init(void)
{
	HAL_UART_MspInit(&huart1);
	
	if (HAL_UART_Receive_DMA(&huart1, (uint8_t *)RxBuffer, LASERTAG_DATA_PAGE_SIZE) == HAL_ERROR)
  {
    /* Transfer error in reception process */
    Error_Handler();
  }
	
}

void LASERTAG_BOARD_TxHalfCpltCallback(void)
{
	
}

void LASERTAG_BOARD_TxCpltCallback(void)
{

}


void LASERTAG_BOARD_RxHalfCpltCallback(void)
{
	
	
}

void LASERTAG_BOARD_RxCpltCallback(void)
{

}


/*****************************END OF FILE************************************/
