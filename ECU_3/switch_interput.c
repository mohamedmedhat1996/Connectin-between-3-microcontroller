#include "switch_interput.h"
#include "lighting.h"
#include "lamp.h"
volatile bool button_Flag = 0;
volatile bool button_Flag_2 = 0;
/*Interrupt handler for port F*/
void
portF_handler(void)
{

    uint32_t status=0;

      status = GPIOIntStatus(GPIO_PORTF_BASE,true);
      GPIOIntClear(GPIO_PORTF_BASE,status);



        uint8_t value=0;


        value= GPIOPinRead(GPIO_PORTF_BASE,GPIO_PIN_4);

        if( value==0 && GPIOPinRead(GPIO_PORTF_BASE,GPIO_PIN_0)!=0)
        {
           g_bRXFlag = 0;

                            lighting_white();
                            SysCtlDelay(16000000 / 3);
                            LAMP(1,0);
                            ui32MsgData_TX=41;

                            CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
                          SysCtlDelay(16000000 / 3);

                                           if(g_bErrFlag)
                                           {

                                           }
                                           else
                                           {
                                           }
                         CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
        SysCtlDelay(70000);
                                   lighting_blue();
                                    SysCtlDelay(16000000 / 3);
        }
      //}
     // if(status & GPIO_INT_PIN_0 == GPIO_INT_PIN_0){

          uint8_t value1=0;

              value1= GPIOPinRead(GPIO_PORTF_BASE,GPIO_PIN_0);

              if( value1==0)
              {
                  g_bRXFlag = 0;

                  lighting_white();
                  SysCtlDelay(16000000 / 3);
                  LAMP(1,0);
                                  //lighting_white();
                                  ui32MsgData_TX=31;

                                  CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
                                  SysCtlDelay(16000000 / 3);

                                                 if(g_bErrFlag)
                                                 {

                                                 }
                                                 else
                                                 {
                                                 }
                               CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
              SysCtlDelay(70000);
                                                  lighting_red();
                                                  SysCtlDelay(16000000 / 3);

         //     }
          //  }
      }
}


/*Initialization of port F*/
void
portF_init(void)
{
    SysCtlClockSet(SYSCTL_SYSDIV_2_5|SYSCTL_USE_PLL|SYSCTL_OSC_MAIN|SYSCTL_XTAL_16MHZ);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
   /*Wait for clock to stabilize*/
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF));

    /*Define switch 1 as an input*/
    GPIOPinTypeGPIOInput(GPIO_PORTF_BASE, SW1);
    GPIOPinTypeGPIOInput(GPIO_PORTF_BASE, SW0);

    GPIOIntRegister(GPIO_PORTF_BASE, portF_handler);

    GPIODirModeSet(GPIO_PORTF_BASE, SW1, GPIO_DIR_MODE_IN);
    GPIOPadConfigSet(GPIO_PORTF_BASE, SW1, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
    GPIOIntTypeSet(GPIO_PORTF_BASE,SW1,GPIO_FALLING_EDGE);
    GPIOIntEnable(GPIO_PORTF_BASE, SW1);

    GPIO_PORTF_LOCK_R = 0x4C4F434B ;
    GPIO_PORTF_CR_R = 0x01F ;
    GPIODirModeSet(GPIO_PORTF_BASE, SW0, GPIO_DIR_MODE_IN);
    GPIOPadConfigSet(GPIO_PORTF_BASE, SW0, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
    GPIOIntTypeSet(GPIO_PORTF_BASE,SW0,GPIO_FALLING_EDGE);
    GPIOIntEnable(GPIO_PORTF_BASE, SW0);
}
