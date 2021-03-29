#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include "inc/hw_can.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/can.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"
#include "utils/uartstdio.h"
#include "can_rx.h"


void
InitConsole(void);
/********************************************************************************/
/* Function Name :InitConsole                                            */
/* Input : NONE                                                               */
/* Output: Void                                                                 */
/* Reentrancy:  reentrant                                                       */
/* Synchronous: ASynchronous                                                    */
/* Description:  initialiayion of UART      */
/********************************************************************************/
void Writer(void);
/********************************************************************************/
/* Function Name :Writer                                           */
/* Input : NONE                                                               */
/* Output: Void                                                                 */
/* Reentrancy:  reentrant                                                       */
/* Synchronous: ASynchronous                                                    */
/* Description:  for writing from PC      */
/********************************************************************************/
void UART0_Handler (void);
/********************************************************************************/
/* Function Name :UART0_Handler                                            */
/* Input : NONE                                                               */
/* Output: Void                                                                 */
/* Reentrancy:  reentrant                                                       */
/* Synchronous: ASynchronous                                                    */
/* Description:  initialiayion of UART      */
/********************************************************************************/
extern volatile int global;
extern volatile bool  UARTGetFlag;
