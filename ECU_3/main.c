
#include "My_Task.h"



TaskHandle_t mytask_handle=NULL;
TaskHandle_t mytask_handle_4=NULL;



int main(void);
int main(void)
  {
    portF_init();
    Dio_init( PortF,Pin1,output);
    Dio_init( PortF,Pin2,input);
    Dio_init( PortF,Pin3,input);
    InitConsole();
    CAN_Int();
    can_ID(TX,1);
		can_ID(RX,3);

		
xTaskCreate( Task3, "Task1",240, NULL,2,&mytask_handle);
xTaskCreate( Read_UART, "Reading_sensor",240, NULL,3,&mytask_handle_4);
vTaskStartScheduler();
	
    for(;;)
    {

     
 
    }


}
