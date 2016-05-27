/**
  ******************************************************************************
  * File Name          : common.h
  * Description        : 
  ******************************************************************************
  * author: Tomas Krejci <info@tomaskrejci.com>
  * 
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __common_H
#define __common_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"
	 


#define SET			1
#define RESET 	0
#define TRUE		1
#define FALSE		0



/**	Error file name, file line

				
*/
void Error_Handler(void);

#ifdef __cplusplus
}
#endif
#endif /*__common_H */
