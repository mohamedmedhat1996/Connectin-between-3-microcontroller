#include "My_Tasks.h"


 volatile int global=0;
tCANMsgObject sCANMessage;
uint8_t pui8MsgData[8];
tCANMsgObject sCANMessage_TX;
uint32_t ui32MsgData_TX;
 uint8_t *pui8MsgData_TX;
volatile bool g_bRXFlag=0;
volatile bool g_bErrFlag=0;
volatile uint32_t g_ui32MsgCount=0;
volatile bool  UARTGetFlag=0;


void Task2( void *pvParameters )  /* Description: Task of Token     */
{
while(1)
{ 
		 if(UARTGetFlag)  
{

	vTaskSuspend(NULL);
}
else{

state();	
}
vTaskDelay(100);
		  
	}
}
void  Task_UART( void *pvParameters )  /* Description: Task where sensor sent data   */
{
while(1)
{  
		 
	   if(UARTGetFlag)                     
{
		                   
ui32MsgData_TX=global;
		                         
CANMessageSet(CAN0_BASE, 1, &sCANMessage_TX, MSG_OBJ_TYPE_TX);
SysCtlDelay(160000 / 3);

if(g_bErrFlag)
{

}
else
{
}
CANMessageSet(CAN0_BASE, 1, &sCANMessage, MSG_OBJ_TYPE_RX);
UARTGetFlag=0;										
global=0;
vTaskResume(mytask_handle);																																																																	
 }														
vTaskDelay(100);
	}

}
