#include "My_Tasks.h"

 TaskHandle_t mytask_handle=NULL;
 TaskHandle_t mytask_handle_2=NULL;


int main(void);
int main(void)
  {
    portF_init();
    Dio_init( PortF,Pin1,output);  /*initialization of DIO & UART & CAN */
    Dio_init( PortF,Pin2,input);
    Dio_init( PortF,Pin3,input);
    InitConsole();
    CAN_Int();
    can_ID(TX,2);  /*enter matter(RX or TX) then enter ID*/
		can_ID(RX,1);
			
xTaskCreate( starting_Task, "starting_Task",240, NULL,3,&mytask_handle);
xTaskCreate(Task, "Task",240, NULL, 2,&mytask_handle_2);
vTaskStartScheduler();
    for(;;)
    {

      
    }
}

