/**
  ******************************************************************************
  * File Name          : flash.c
  * Description        : flash spi memory driver
  ******************************************************************************
  * author: Tomas Krejci <info@tomaskrejci.com>
  * 
  *
  ******************************************************************************
  */
	
#include "flash.h"
#include "spi.h"
#include "gpio.h"
#include "dma.h"

#define FLASH_CS_GPIO_PIN		SD_CS_GPIO_Out_Pin 
#define FLASH_CS_GPIO				SD_CS_GPIO_Out_GPIO_Port
#define HSPI hspi1

#define COMMAND_JDEC_ID		0x9F //JEDEC ID



/**		Flash memory init
*/
void Flash_Init(void)
{
	MX_GPIO_Init();
	MX_SPI1_Init();
	HAL_SPI_MspInit(&hspi1);
	Flash_CS(SET);
}

/**		Flash CS
			param: active = 1, inactive = 0
*/
void Flash_CS(uint8_t active)
{
	if (active)
  {
		// flash cs low - active flash
		HAL_GPIO_WritePin(FLASH_CS_GPIO,FLASH_CS_GPIO_PIN, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_SET);
  }
  else
  {
		// flash cs high - deactive flash
		HAL_GPIO_WritePin(FLASH_CS_GPIO,FLASH_CS_GPIO_PIN, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_RESET);
  }
}

/**		Flash read JDEC ID 3x8bit
      param: pJdecId pointer 3x8bit structure 
			
*/
void Flash_ReadID(uint8_t *pJdecId)
{
	uint8_t TxData = COMMAND_JDEC_ID;
	uint16_t Size = 5;
	
	//Flash_CS(SET);
	HAL_SPI_TransmitReceive_DMA(&HSPI, &TxData, pJdecId, Size);
	
}

/**		Flash read JDEC ID 3x8bit
      param: pJdecId pointer 3x8bit structure 
			
*/
void Flash_Write(uint8_t *pData, uint32_t Size, uint32_t address)
{
	
	
	//Flash_CS(SET);
	HAL_SPI_TransmitReceive_DMA(&HSPI, &TxData, pJdecId, Size);
	
	
}
