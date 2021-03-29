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
#define open 0
#define Red 0
#define Green 1
#define Blue 2
#define off 1
void state(void)
{

            if(g_bRXFlag)
            {

                sCANMessage.pui8MsgData = pui8MsgData;


                CANMessageGet(CAN0_BASE, 1, &sCANMessage, 0);


                g_bRXFlag = 0;


                if(sCANMessage.ui32Flags & MSG_OBJ_DATA_LOST)
                {

                }

                UARTprintf("Start of Frame (Message ID)=0x%08X l=%u data=0x",
                           sCANMessage.ui32MsgID, sCANMessage.ui32MsgLen);

             switch( pui8MsgData[0 ])
                          {
                                       case 1:
                                           LAMP(off,0);
                                           lighting_white();
                                           SysCtlDelay(16000000 / 3);
                                           LAMP(off,0);
                                           lighting_Green();


                                           ui32MsgData_TX=10;
                                          //LAMP(off,0);
                                          CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
                                          SysCtlDelay(2*16000000 / 3);

                                          if(g_bErrFlag)
                                         {

                                          }
                                          else
                                         {
                                          }

                                        CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
                                        g_bRXFlag = 0;
                                            break;
                                       case 2:
                                              LAMP(1,0);
                                             // UARTprintf("reset swith 1");
                                              lighting_white();
                                              SysCtlDelay(16000000 / 3);
                                              LAMP(1,0);
                                              lighting_Green();
                                              ui32MsgData_TX=3;
                                                                                       //LAMP(off,0);
                                              CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
                                               SysCtlDelay(2*16000000 / 3);

                                                if(g_bErrFlag)
                                                  {

                                                     }
                                                   else
                                                  {
                                                   }
                                              CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
                                              g_bRXFlag = 0;
                                              break;
                                      /*****************************************************/
                                       case 13:
                                            LAMP(1,0);

                                            lighting_white();
                                            SysCtlDelay(16000000 / 3);
                                            LAMP(1,0);
                                            lighting_red();
                                           ui32MsgData_TX=11;

                                           CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
                                           SysCtlDelay(2*16000000 / 3);

                                           if(g_bErrFlag)
                                             {

                                             }
                                           else
                                               {
                                                }
                                          CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
                                           g_bRXFlag = 0;
                                           break;
                                       case 23:
                                            LAMP(1,0);

                                           lighting_white();
                                           SysCtlDelay(16000000 / 3);
                                           LAMP(1,0);
                                           lighting_blue();
                                           ui32MsgData_TX=21;
                                                                                                                              //LAMP(off,0);
                                           CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
                                           SysCtlDelay(2*16000000 / 3);

                                           if(g_bErrFlag)
                                             {

                                               }
                                              else
                                            {
                                               }
                                           CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
                                          g_bRXFlag = 0;
                                            break;
                                       case 32:
                                                                                   LAMP(1,0);

                                                                                  lighting_white();
                                                                                  SysCtlDelay(16000000 / 3);
                                                                                  LAMP(1,0);
                                                                                  lighting_blue();
                                                                                  ui32MsgData_TX=33;
                                                                                                                                                                     //LAMP(off,0);
                                                                                  CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
                                                                                  SysCtlDelay(2*16000000 / 3);

                                                                                  if(g_bErrFlag)
                                                                                    {

                                                                                      }
                                                                                     else
                                                                                   {
                                                                                      }
                                                                                  CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
                                                                                 g_bRXFlag = 0;
                                                                                   break;
                                       case 42:
                                                                                   LAMP(1,0);

                                                                                  lighting_white();
                                                                                  SysCtlDelay(16000000 / 3);
                                                                                  LAMP(1,0);
                                                                                  lighting_red();
                                                                                  ui32MsgData_TX=43;
                                                                                                                                                                     //LAMP(off,0);
                                                                                  CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
                                                                                  SysCtlDelay(2*16000000 / 3);

                                                                                  if(g_bErrFlag)
                                                                                    {

                                                                                      }
                                                                                     else
                                                                                   {
                                                                                      }
                                                                                  CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
                                                                                 g_bRXFlag = 0;
                                                                                   break;
                         /* case 0:
                              lighting_blue();

                              break;
                          case 1:
                              lighting_blue();
                               break;
                          case 2:
                              lighting_blue();
                               break;
                          case 3:
                              lighting_white();
                            break;
                          case 10:
                              lighting_red();
                              break;
                          case 11:
                              lighting_red();
                               break;
                          case 12:
                              lighting_red();
                               break;
                          case 13:
                              lighting_white();
                               break;
                          case 20:
                              lighting_blue();
                               break;
                          case 21:
                              lighting_blue();
                               break;
                          case 22:
                              lighting_blue();
                               break;
                          case 23:
                              lighting_blue();
                                break;
                          case 30:
                              lighting_Green();
                                break;
                          case 31:
                              lighting_Green();
                                break;
                          case 32:
                              lighting_Green();
                                break;
                          case 33:
                              lighting_white();
                                break;
                          case 40:
                              lighting_blue();
                                break;
                          case 41:
                              lighting_blue();
                                break;
                          case 42:
                              lighting_blue();
                                break;
                          case 43:
                              lighting_white();
                                break;*/
                          default:
                              break;


                          }

             UARTprintf("shalabi =%u\n", pui8MsgData[0 ]);
               UARTprintf("val =%u\n", g_ui32MsgCount);
            }
}


