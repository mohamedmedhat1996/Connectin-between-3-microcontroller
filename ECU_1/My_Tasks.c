#include "My_Tasks.h"

volatile bool g_bRXFlag=0;
volatile bool g_bErrFlag=0;
volatile uint32_t g_ui32MsgCount=0;
tCANMsgObject sCANMessage;
uint8_t pui8MsgData[8];
tCANMsgObject sCANMessage_TX;
uint32_t ui32MsgData_TX;
 uint8_t *pui8MsgData_TX;
extern TaskHandle_t mytask_handle;
extern TaskHandle_t mytask_handle_2;
int start=0;
void starting_Task( void *pvParameters )
{

while(1)
{
if(start==0)
{
start++;                        /* Description: this task makes tiva 1  sends once      */
g_bRXFlag = 0;

lighting_white();
SysCtlDelay(16000000 / 3);
LAMP(1,0);
ui32MsgData_TX=1;

CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);


if(g_bErrFlag)
 {

  }
  else
  {
   }
CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
lighting_red();
SysCtlDelay(16000000 / 3);
}
else
{}
UARTprintf("Task_Starting \n");
vTaskDelete(mytask_handle);
}
}



void Task( void *pvParameters )
{
	while(1)
	{
	     
       state();   /* Description: Task of Token     */
	
	}
}

