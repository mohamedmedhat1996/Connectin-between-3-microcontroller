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
#include "lighting.h"
#include "switch_interput.h"
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


    //if(button_Flag)
 //  {

            if(GPIOPinRead(GPIO_PORTF_BASE, GPIO_PIN_4)==0 && GPIOPinRead(GPIO_PORTF_BASE, GPIO_PIN_0)!=0)
         {  // if( button_Flag_2)
        //  {
                UARTprintf("switch1 is pressed\n");
                //lighting_white();
                ui32MsgData_TX=2;

                CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
                SysCtlDelay(16000000 / 3);

                               if(g_bErrFlag)
                               {

                               }
                               else
                               {
                               }
             CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
          //  button_Flag_2=0;

         //   }
          }
             if(GPIOPinRead(GPIO_PORTF_BASE, GPIO_PIN_0)==0 && GPIOPinRead(GPIO_PORTF_BASE, GPIO_PIN_4)!=0)
                        {
                           // if(button_Flag)
                           // {
                            //lighting_red();
                            ui32MsgData_TX=1;
                            UARTprintf("switch 2 is pressed ");
                            CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
                            SysCtlDelay(16000000 / 3);

                                           if(g_bErrFlag)
                                           {

                                           }
                                           else
                                           {
                                           }
                         CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
                         button_Flag=0;
             //   }
                        }
             /*else if(starter==0)
             {
                                             ui32MsgData_TX=9;

                                             CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
                                             SysCtlDelay(16000000 / 3);

                                                            if(g_bErrFlag)
                                                            {

                                                            }
                                                            else
                                                            {
                                                            }
                                          CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
                                         // button_Flag=0;
                                          starter++;
             }

*/


                       // button_Flag = 0;
            // UARTprintf("starter =%u\n", starter);
//}
}
