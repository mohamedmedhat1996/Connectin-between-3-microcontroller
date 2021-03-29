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
#include "state_transmeter.h"
#include "switches.h"
#include "lighting.h"
#include "switch_interput.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "list.h"
#include "semphr.h"
#include "sensor_reading.h"
#define input 0
#define output 1
#define PortF 5
#define PortE 4
#define PortD 3
#define PortC 2
#define PortB 1
#define PortA 0
#define Pin0 0
#define Pin1 1
#define Pin2 2
#define Pin3 3
#define Pin4 4
#define open 0
#define Red 0
#define Green 1
#define Blue 2
#define TX 1
#define RX 2
void Task3( void *pvParameters );
/********************************************************************************/
/* Function Name :Task3                                          */
/* Input : None                                                              */
/* Output: Void                                                                 */
/* Reentrancy:  reentrant                                                       */
/* Synchronous: ASynchronous                                                    */
/* Description:  Token     */
/********************************************************************************/
void Read_UART( void *pvParameters );
/********************************************************************************/
/* Function Name :Read_UART                                           */
/* Input : None                                                              */
/* Output: Void                                                                 */
/* Reentrancy:  reentrant                                                       */
/* Synchronous: ASynchronous                                                    */
/* Description:  read value of sensor from message data     */
/********************************************************************************/
