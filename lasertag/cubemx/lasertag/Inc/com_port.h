/**
  ******************************************************************************
  * File Name          : com_port.h
  * Description        : pc com port interface
  ******************************************************************************
  * author: Tomas Krejci <info@tomaskrejci.com>
  * 
  *
  ******************************************************************************
  */

#ifndef __com_port_H
#define __com_port_H
#ifdef __cplusplus
 extern "C" {
#endif

/**		includes

*/

#include "stm32f0xx_hal.h"	 
	 
/**		defines

*/
	 
/**		prototypes

*/

/**		recive data from pc com port	
     			
   */	 
void com_port_RX(void);


#ifdef __cplusplus
}
#endif
#endif /*__com_port_H */
