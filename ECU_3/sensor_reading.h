#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_can.h"
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/can.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"
#include "utils/uartstdio.h"
#include "console.h"
#include "Dio_IntPin.h"
#include "lamp.h"
#include "can_rx.h"
#include "state_receiver.h"
#include "lighting.h"
#include "state_transmeter.h"

void sensor_UART(void);
/********************************************************************************/
/* Function Name :sensor_UART                                           */
/* Input : None                                                              */
/* Output: Void                                                                 */
/* Reentrancy:  reentrant                                                       */
/* Synchronous: ASynchronous                                                    */
/* Description:  read value of sensor from message data     */
/********************************************************************************/
