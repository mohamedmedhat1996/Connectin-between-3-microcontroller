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
#define off 1
#define Red 0
#define Green 1
#define Blue 2
#define GPIO_PORTF_DATA_R       (*((volatile uint32_t *)0x400253FC))
unsigned long SWITCH_PIN0,SWITCH_PIN4;

void state_trans(void)
{
    SWITCH_PIN0 = GPIO_PORTF_DATA_R&0x10;
                   SWITCH_PIN4 = GPIO_PORTF_DATA_R&0x01;

            if(!(SWITCH_PIN0) &&(SWITCH_PIN4))
            {   ui32MsgData_TX=500;
                LAMP(off,0);
                CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
                SysCtlDelay(16000000 / 3);

                               if(g_bErrFlag)
                               {

                               }
                               else
                               {
                               }
             CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
            }
                        if((SWITCH_PIN0) &&!(SWITCH_PIN4))
                        {   ui32MsgData_TX=600;
                            LAMP(off,0);
                            CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
                            SysCtlDelay(16000000 / 3);

                                           if(g_bErrFlag)
                                           {

                                           }
                                           else
                                           {
                                           }
                         CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);

                        }

}
