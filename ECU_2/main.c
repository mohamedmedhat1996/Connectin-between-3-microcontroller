
#include "My_Tasks.h"

 TaskHandle_t mytask_handle=NULL;
 TaskHandle_t mytask_handle_3=NULL;
 TaskHandle_t mytask_handle_Reset=NULL;




int main(void);
int main(void)
  {
    
    portF_init();
    Dio_init( PortF,Pin1,output);
    Dio_init( PortF,Pin2,input);
    Dio_init( PortF,Pin3,input);
    InitConsole();
    CAN_Int();
		can_ID(TX,3);
		can_ID(RX,2);

xTaskCreate( Task2, "Task2",240, NULL,3,&mytask_handle);
xTaskCreate(  Task_UART, "UART_sending",240, NULL,4,&mytask_handle_3);
vTaskStartScheduler();
    for(;;)
    {

  
    }


}
	
