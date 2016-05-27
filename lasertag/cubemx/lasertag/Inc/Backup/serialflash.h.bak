/**
  ******************************************************************************
  * @file    serialflash.c
  * @author  TK (MCD Application Team)
  * @version V1.0 (V6.0.1)
  * @date    14-5-2016
  * @brief   This file contains the common defines and functions prototypes for
  *          the flash driver.
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __SERIAL_FLASH_H
#define __SERIAL_FLASH_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/** @addtogroup BSP
  * @{
  */ 

/** @addtogroup STM32F0
  * @{
  */
  
/** @addtogroup STM32F0_SERIAL_FLASH
  * @{
  */  

/** @defgroup STM3210E_EVAL_SERIAL_FLASH_Exported_Types Exported_Types
  * @{
  */ 
/**
  * @}
  */
  
/** @defgroup STM3210E_EVAL_SERIAL_FLASH_Exported_Constants Exported_Constants
  * @{
  */
#define   FLASH_OK         0x00
#define   FLASH_ERROR      0x01
/**
  * @}
  */ 
  
/** @defgroup STM3210E_EVAL_SERIAL_FLASH_Exported_Macros Exported_Macros
  * @{
  */
/**
  * @}
  */ 
 

/** @addtogroup STM3210E_EVAL_SERIAL_FLASH_Exported_Functions
  * @{
  */
uint8_t  BSP_SERIAL_FLASH_Init(void);
uint8_t  BSP_SERIAL_FLASH_EraseSector(uint32_t SectorAddr);
uint8_t  BSP_SERIAL_FLASH_EraseBulk(void);
uint8_t  BSP_SERIAL_FLASH_WritePage(uint32_t uwStartAddress, uint8_t* pData, uint32_t uwDataSize);
uint8_t  BSP_SERIAL_FLASH_WriteData(uint32_t uwStartAddress, uint8_t* pData, uint32_t uwDataSize);
uint8_t  BSP_SERIAL_FLASH_ReadData( uint32_t uwStartAddress, uint8_t* pData, uint32_t uwDataSize);
uint32_t BSP_SERIAL_FLASH_ReadID(void);



/*##################### SPIx ###################################*/
#define EVAL_SPIx                               SPI1
#define EVAL_SPIx_CLK_ENABLE()                  __HAL_RCC_SPI1_CLK_ENABLE()

#define EVAL_SPIx_SCK_GPIO_PORT                 GPIOA             /* PA.05*/
#define EVAL_SPIx_SCK_PIN                       GPIO_PIN_5
#define EVAL_SPIx_SCK_GPIO_CLK_ENABLE()         __HAL_RCC_GPIOA_CLK_ENABLE()
#define EVAL_SPIx_SCK_GPIO_CLK_DISABLE()        __HAL_RCC_GPIOA_CLK_DISABLE()

#define EVAL_SPIx_MISO_MOSI_GPIO_PORT           GPIOA
#define EVAL_SPIx_MISO_MOSI_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOA_CLK_ENABLE()
#define EVAL_SPIx_MISO_MOSI_GPIO_CLK_DISABLE()  __HAL_RCC_GPIOA_CLK_DISABLE()
#define EVAL_SPIx_MISO_PIN                      GPIO_PIN_6       /* PA.06*/
#define EVAL_SPIx_MOSI_PIN                      GPIO_PIN_7       /* PA.07*/
/* Maximum Timeout values for flags waiting loops. These timeouts are not based
   on accurate values, they just guarantee that the application will not remain
   stuck if the SPI communication is corrupted.
   You may modify these timeout values depending on CPU frequency and application
   conditions (interrupts routines ...). */   
#define EVAL_SPIx_TIMEOUT_MAX                   1000

/**
  * @}
  */ 

/** @addtogroup STM3210E_EVAL_COMPONENT
  * @{
  */

/*##################### FLASH SPI ###################################*/
/**
  * @brief  FLASH SPI Chip Select macro definition 
  */
#define FLASH_SPI_CS_LOW()       HAL_GPIO_WritePin(FLASH_SPI_CS_GPIO_PORT, FLASH_SPI_CS_PIN, GPIO_PIN_RESET)
#define FLASH_SPI_CS_HIGH()      HAL_GPIO_WritePin(FLASH_SPI_CS_GPIO_PORT, FLASH_SPI_CS_PIN, GPIO_PIN_SET)

/**
  * @brief  FLASH SPI Control Interface pins
  */
#define FLASH_SPI_CS_PIN                           GPIO_PIN_5        /* PF.05*/
#define FLASH_SPI_CS_GPIO_PORT                     GPIOF
#define FLASH_SPI_CS_GPIO_CLK_ENABLE()             __HAL_RCC_GPIOF_CLK_ENABLE()
#define FLASH_SPI_CS_GPIO_CLK_DISABLE()            __HAL_RCC_GPIOF_CLK_DISABLE()

/**
  * @brief  FLASH SPI supported commands
  */  
#define FLASH_SPI_CMD_WRITE          0x02  /*!< Write to Memory instruction */
#define FLASH_SPI_CMD_WRSR           0x01  /*!< Write Status Register instruction */
#define FLASH_SPI_CMD_WREN           0x06  /*!< Write enable instruction */
#define FLASH_SPI_CMD_READ           0x03  /*!< Read from Memory instruction */
#define FLASH_SPI_CMD_RDSR           0x05  /*!< Read Status Register instruction  */
#define FLASH_SPI_CMD_RDID           0x9F  /*!< Read identification */
#define FLASH_SPI_CMD_SE             0x20  /*!< Sector Erase instruction */
#define FLASH_SPI_CMD_BE             0xC7  /*!< Bulk Erase instruction */

#define FLASH_SPI_WIP_FLAG           0x01  /*!< Write In Progress (WIP) flag */

#define FLASH_SPI_DUMMY_BYTE         0xA5
#define FLASH_SPI_PAGESIZE           0x100

#define FLASH_SPI_M25P128_ID         0x202018
#define FLASH_SPI_M25P64_ID          0x202017
















/**
  * @}
  */

  
#ifdef __cplusplus
}
#endif

#endif /* __SERIAL_FLASH_H */
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/****************************END OF FILE****************************/
