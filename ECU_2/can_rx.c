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
#include "can_rx.h"
    /*tCANMsgObject sCANMessage;
    uint8_t pui8MsgData[8];*/
void
CANIntHandler(void)
{
    uint32_t ui32Status;
    ui32Status = CANIntStatus(CAN0_BASE, CAN_INT_STS_CAUSE);
    if(ui32Status == CAN_INT_INTID_STATUS)
    {
        ui32Status = CANStatusGet(CAN0_BASE, CAN_STS_CONTROL);
        g_bErrFlag = 1;
    }
    else if(ui32Status == 1)
    {
        CANIntClear(CAN0_BASE, 1);
        g_ui32MsgCount++;
        g_bRXFlag = 1;
        g_bErrFlag = 0;
    }

    else
    {

    }
}
void CAN_Int(void)
{
#if defined(TARGET_IS_TM4C129_RA0) ||                                         \
    defined(TARGET_IS_TM4C129_RA1) ||                                         \
    defined(TARGET_IS_TM4C129_RA2)
    uint32_t ui32SysClock;
#endif
/*
    tCANMsgObject sCANMessage;
    uint8_t pui8MsgData[8];
*/
    pui8MsgData_TX = (uint8_t *)&ui32MsgData_TX;
#if defined(TARGET_IS_TM4C129_RA0) ||                                         \
    defined(TARGET_IS_TM4C129_RA1) ||                                         \
    defined(TARGET_IS_TM4C129_RA2)
    ui32SysClock = SysCtlClockFreqSet((SYSCTL_XTAL_25MHZ |
                                       SYSCTL_OSC_MAIN |
                                       SYSCTL_USE_OSC)
                                       25000000);
#else
    SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_OSC | SYSCTL_OSC_MAIN |
                   SYSCTL_XTAL_16MHZ);
#endif
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);


       GPIOPinConfigure(GPIO_PB4_CAN0RX);
       GPIOPinConfigure(GPIO_PB5_CAN0TX);


       GPIOPinTypeCAN(GPIO_PORTB_BASE, GPIO_PIN_4 | GPIO_PIN_5);


       SysCtlPeripheralEnable(SYSCTL_PERIPH_CAN0);


       CANInit(CAN0_BASE);


   #if defined(TARGET_IS_TM4C129_RA0) ||                                         \
       defined(TARGET_IS_TM4C129_RA1) ||                                         \
       defined(TARGET_IS_TM4C129_RA2)
       CANBitRateSet(CAN0_BASE, ui32SysClock, 500000);
   #else
       CANBitRateSet(CAN0_BASE, SysCtlClockGet(), 500000);
   #endif


       CANIntEnable(CAN0_BASE, CAN_INT_MASTER | CAN_INT_ERROR | CAN_INT_STATUS);


       IntEnable(INT_CAN0);


       CANEnable(CAN0_BASE);

       sCANMessage.ui32MsgID = 0;
       sCANMessage.ui32MsgIDMask = 0;
       sCANMessage.ui32Flags = MSG_OBJ_RX_INT_ENABLE | MSG_OBJ_USE_ID_FILTER;
       sCANMessage.ui32MsgLen = 8;
       CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
//*********************************************************************************
       ui32MsgData_TX = 0;
      sCANMessage_TX.ui32MsgID = 1;
      sCANMessage_TX.ui32MsgIDMask = 0;
      sCANMessage_TX.ui32Flags = MSG_OBJ_TX_INT_ENABLE;
      sCANMessage_TX.ui32MsgLen = sizeof(pui8MsgData_TX);
      sCANMessage_TX.pui8MsgData = pui8MsgData_TX;
}
