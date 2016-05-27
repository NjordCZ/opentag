/**
  ******************************************************************************
  * File Name          : lasertag_board.h
  * Description        : lasertag board common defines and functions prototypes
  ******************************************************************************
  * author: Tomas Krejci <info@tomaskrejci.com>
  * 
  *
  ******************************************************************************
  */
	
#ifndef __LASERTAG_BOARD_H
#define __LASERTAG_BOARD_H

#ifdef __cplusplus
 extern "C" {
#endif

/**		command packet 
			<1.byte>	<2.byte>	<3.byte> 
	    <command>	<target>	<count page>	
			<com. set><data>		<data>	<...>
*/
// command
#define 	 LASERTAG_CMD_WRITE_DATA		0x01
#define 	 LASERTAG_CMD_READ_DATA			0x02
#define 	 LASERTAG_CMD_SET						0x03
// target
#define 	 LASERTAG_TAR_SETUP					0x11 
#define 	 LASERTAG_TAR_AUDIO					0x12 
#define 	 LASERTAG_TAR_LOG					  0x13

// page and buffer size	 
#define		 LASERTAG_DATA_PAGE_SIZE	 	0x200 //512 

// flash memory adress
#define 	 LASERTAG_ADR_SETUP					0x000000 //0x000000-0x001FFF
#define 	 LASERTAG_ADR_SETUP_SIZE	  0x002000 //8kB
#define 	 LASERTAG_ADR_AUDIO					0x002000 //0x002000-0x1FFFFF
#define 	 LASERTAG_ADR_AUDIO_SIZE	  0x200000 //2048kB	
#define 	 LASERTAG_ADR_LOG						0x202000 //0x202000-0x7FFFFF 
#define 	 LASERTAG_ADR_LOG_SIZE	  	0x5FE000 //6136kB		 
	 
	 
void LASERTAG_BOARD_Init(void);
void LASERTAG_BOARD_TxHalfCpltCallback(void);
void LASERTAG_BOARD_TxCpltCallback(void);
void LASERTAG_BOARD_RxHalfCpltCallback(void);	
void LASERTAG_BOARD_RxCpltCallback(void);

	 
#ifdef __cplusplus
}
#endif

#endif /* __LASERTAG_BOARD_H */
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

