#include "My_Task.h"
volatile bool g_bRXFlag=0;
volatile bool g_bErrFlag=0;
volatile uint32_t g_ui32MsgCount=0;
tCANMsgObject sCANMessage;
uint8_t pui8MsgData[8];
tCANMsgObject sCANMessage_TX;
uint32_t ui32MsgData_TX;
 uint8_t *pui8MsgData_TX;
extern  TaskHandle_t mytask_handle;
extern TaskHandle_t mytask_handle_4;
void Task3( void *pvParameters ) /* Description:  Token     */
{

while(1)
{

 
state();

	
vTaskDelay(100);
}

}
void Read_UART( void *pvParameters )   /* Description:  read value of sensor from message data     */

{
	
while(1)
{

		
		sensor_UART();

	

vTaskDelay(100);
 
}
}
