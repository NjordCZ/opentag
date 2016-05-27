/**
  ******************************************************************************
  * File Name          : common.c
  * Description        : 
  ******************************************************************************
  * author: Tomas Krejci <info@tomaskrejci.com>
  * 
  *
  ******************************************************************************
  */
	
#include "stm32f0xx_hal.h"
#include "common.h"


/**	Error file name, file line

		Error_Handler(__FILE__, __LINE__);	
			
*/
void Error_Handler(void)
{
  
	while (1)
  {
		HAL_GPIO_TogglePin(LD4_GPIO_Port, LD4_Pin); //blue
	  HAL_Delay(100);
  }
	
}
