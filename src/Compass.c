/**********************************************************************
 Module
   Compass.c

 Author: John Ash

 Description
	Code to initialzie and control the Xbee modules in API mode
   
 Notes

 History
 When                   Who         What/Why
 --------------         ---         --------
2/25/2013   11:10PM     jash        Initial Creation
***********************************************************************/

#include <xc.h>
#include <peripheral/uart.h>
#include <stdint.h>
#include <ports.h>
#include "Board.h"
#include "Uart.h"
#include "Mavlink.h"
#include "Timer.h"
#include "Xbee.h"


/***********************************************************************
 * PRIVATE DEFINITIONS                                                 *
 ***********************************************************************/

/**********************************************************************
 * PRIVATE PROTOTYPES                                                 *
 **********************************************************************/

/**********************************************************************
 * PRIVATE VARIABLES                                                  *
 **********************************************************************/

/**********************************************************************
 * PUBLIC FUNCTIONS                                                   *
 **********************************************************************/
void commandStation_message_start_resuce(mavlink_xbee_heartbeat_t* packet){

}
/**********************************************************************
 * PRIVATE FUNCTIONS                                                  *
 **********************************************************************/
