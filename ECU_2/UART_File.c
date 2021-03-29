#include "UART_File.h"

#define GPIO_PA0_U0RX           0x00000001
#define GPIO_PA1_U0TX           0x00000401
#define INT_UART0 21

char ID_Input[100];
char Distance_List[4]={'1','2','3','4'};

void
InitConsole(void)
{

    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    GPIOPinConfigure(GPIO_PA0_U0RX);
    GPIOPinConfigure(GPIO_PA1_U0TX);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    UARTClockSourceSet(UART0_BASE, UART_CLOCK_PIOSC);
    GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);
    UARTStdioConfig(0, 115200, 16000000);
	  IntMasterEnable(); 
   IntEnable(INT_UART0); 
   UARTIntEnable(UART0_BASE, UART_INT_RX | UART_INT_RT);
}

void Writer(void)  /* Description:  for writing from PC      */
{
int x=0;
	
do{
      UARTgets(ID_Input,100);

        if(!strcmp(ID_Input,"1")||!strcmp(ID_Input,"2")||!strcmp(ID_Input,"3")||!strcmp(ID_Input,"4")||!strcmp(ID_Input,"5")||!strcmp(ID_Input,"6")||!strcmp(ID_Input,"7")||!strcmp(ID_Input,"8")||!strcmp(ID_Input,"9")||!strcmp(ID_Input,"10"))
         {
                     x=1;
					
         }
				 if(!strcmp(ID_Input,"11")||!strcmp(ID_Input,"12")||!strcmp(ID_Input,"13")||!strcmp(ID_Input,"14")||!strcmp(ID_Input,"15")||!strcmp(ID_Input,"16")||!strcmp(ID_Input,"17")||!strcmp(ID_Input,"18")||!strcmp(ID_Input,"19")||!strcmp(ID_Input,"20"))
         {
                     x=1;
				
         }
				 if(!strcmp(ID_Input,"21")||!strcmp(ID_Input,"22")||!strcmp(ID_Input,"23")||!strcmp(ID_Input,"24")||!strcmp(ID_Input,"25")||!strcmp(ID_Input,"26")||!strcmp(ID_Input,"27")||!strcmp(ID_Input,"28")||!strcmp(ID_Input,"29")||!strcmp(ID_Input,"30"))
         {
                     x=1;
					
         }
				 else if(!strcmp(ID_Input,"31")||!strcmp(ID_Input,"32")||!strcmp(ID_Input,"33")||!strcmp(ID_Input,"34")||!strcmp(ID_Input,"35")||!strcmp(ID_Input,"36")||!strcmp(ID_Input,"37")||!strcmp(ID_Input,"38")||!strcmp(ID_Input,"39")||!strcmp(ID_Input,"40"))
                   {
                 
										  x=1;
                   }

               else if(!strcmp(ID_Input,"41")||!strcmp(ID_Input,"42")||!strcmp(ID_Input,"43")||!strcmp(ID_Input,"44")||!strcmp(ID_Input,"45")||!strcmp(ID_Input,"46")||!strcmp(ID_Input,"47")||!strcmp(ID_Input,"48")||!strcmp(ID_Input,"49")||!strcmp(ID_Input,"50"))
							 {
                
										   x=1;
									 }
							 else if(!strcmp(ID_Input,"51")||!strcmp(ID_Input,"52")||!strcmp(ID_Input,"53")||!strcmp(ID_Input,"54")||!strcmp(ID_Input,"55")||!strcmp(ID_Input,"56")||!strcmp(ID_Input,"57")||!strcmp(ID_Input,"58")||!strcmp(ID_Input,"59")||!strcmp(ID_Input,"60"))
							 {
                
										  x=1;
									 }
							 else if(!strcmp(ID_Input,"61")||!strcmp(ID_Input,"62")||!strcmp(ID_Input,"63")||!strcmp(ID_Input,"64")||!strcmp(ID_Input,"65")||!strcmp(ID_Input,"66")||!strcmp(ID_Input,"67")||!strcmp(ID_Input,"68")||!strcmp(ID_Input,"69")||!strcmp(ID_Input,"70"))
							 {
                
										   x=1;
									 }
							  else if(!strcmp(ID_Input,"71")||!strcmp(ID_Input,"72")||!strcmp(ID_Input,"73")||!strcmp(ID_Input,"74")||!strcmp(ID_Input,"75")||!strcmp(ID_Input,"76")||!strcmp(ID_Input,"77")||!strcmp(ID_Input,"78")||!strcmp(ID_Input,"79")||!strcmp(ID_Input,"80"))
							 {
                
										  x=1;
									 }
							  else if(!strcmp(ID_Input,"81")||!strcmp(ID_Input,"82")||!strcmp(ID_Input,"83")||!strcmp(ID_Input,"84")||!strcmp(ID_Input,"85")||!strcmp(ID_Input,"86")||!strcmp(ID_Input,"87")||!strcmp(ID_Input,"88")||!strcmp(ID_Input,"89")||!strcmp(ID_Input,"90"))
							 {
                
										   x=1;
									 }
							  else if(!strcmp(ID_Input,"91")||!strcmp(ID_Input,"92")||!strcmp(ID_Input,"93")||!strcmp(ID_Input,"94")||!strcmp(ID_Input,"95")||!strcmp(ID_Input,"96")||!strcmp(ID_Input,"97")||!strcmp(ID_Input,"98")||!strcmp(ID_Input,"99")||!strcmp(ID_Input,"100"))
							 {
                
										   x=1;
									 }
          
            
       
 

	 }

while(x==0);
 
     if(!strcmp(ID_Input,"1")||!strcmp(ID_Input,"2")||!strcmp(ID_Input,"3")||!strcmp(ID_Input,"4")||!strcmp(ID_Input,"5")||!strcmp(ID_Input,"6")||!strcmp(ID_Input,"7")||!strcmp(ID_Input,"8")||!strcmp(ID_Input,"9")||!strcmp(ID_Input,"10"))
                   {
										 global=65;
                   }

               else if(!strcmp(ID_Input,"11")||!strcmp(ID_Input,"12")||!strcmp(ID_Input,"13")||!strcmp(ID_Input,"14")||!strcmp(ID_Input,"15")||!strcmp(ID_Input,"16")||!strcmp(ID_Input,"17")||!strcmp(ID_Input,"18")||!strcmp(ID_Input,"19")||!strcmp(ID_Input,"20"))
                   {
                  
										 global=66;
                   }

               else if(!strcmp(ID_Input,"21")||!strcmp(ID_Input,"22")||!strcmp(ID_Input,"23")||!strcmp(ID_Input,"24")||!strcmp(ID_Input,"25")||!strcmp(ID_Input,"26")||!strcmp(ID_Input,"27")||!strcmp(ID_Input,"28")||!strcmp(ID_Input,"29")||!strcmp(ID_Input,"30"))
                   {
                 
										 global=67;
                   }
							else if(!strcmp(ID_Input,"31")||!strcmp(ID_Input,"32")||!strcmp(ID_Input,"33")||!strcmp(ID_Input,"34")||!strcmp(ID_Input,"35")||!strcmp(ID_Input,"36")||!strcmp(ID_Input,"37")||!strcmp(ID_Input,"38")||!strcmp(ID_Input,"39")||!strcmp(ID_Input,"40"))
                   {
                 
										 global=67;
                   }

               else if(!strcmp(ID_Input,"41")||!strcmp(ID_Input,"42")||!strcmp(ID_Input,"43")||!strcmp(ID_Input,"44")||!strcmp(ID_Input,"45")||!strcmp(ID_Input,"46")||!strcmp(ID_Input,"47")||!strcmp(ID_Input,"48")||!strcmp(ID_Input,"49")||!strcmp(ID_Input,"50"))
							 {
                
										  global=68;
									 }
							 else if(!strcmp(ID_Input,"51")||!strcmp(ID_Input,"52")||!strcmp(ID_Input,"53")||!strcmp(ID_Input,"54")||!strcmp(ID_Input,"55")||!strcmp(ID_Input,"56")||!strcmp(ID_Input,"57")||!strcmp(ID_Input,"58")||!strcmp(ID_Input,"59")||!strcmp(ID_Input,"60"))
							 {
                
										  global=68;
									 }
							 else if(!strcmp(ID_Input,"61")||!strcmp(ID_Input,"62")||!strcmp(ID_Input,"63")||!strcmp(ID_Input,"64")||!strcmp(ID_Input,"65")||!strcmp(ID_Input,"66")||!strcmp(ID_Input,"67")||!strcmp(ID_Input,"68")||!strcmp(ID_Input,"69")||!strcmp(ID_Input,"70"))
							 {
                
										  global=69;
									 }
							  else if(!strcmp(ID_Input,"71")||!strcmp(ID_Input,"72")||!strcmp(ID_Input,"73")||!strcmp(ID_Input,"74")||!strcmp(ID_Input,"75")||!strcmp(ID_Input,"76")||!strcmp(ID_Input,"77")||!strcmp(ID_Input,"78")||!strcmp(ID_Input,"79")||!strcmp(ID_Input,"80"))
							 {
                
										  global=69;
									 }
							  else if(!strcmp(ID_Input,"81")||!strcmp(ID_Input,"82")||!strcmp(ID_Input,"83")||!strcmp(ID_Input,"84")||!strcmp(ID_Input,"85")||!strcmp(ID_Input,"86")||!strcmp(ID_Input,"87")||!strcmp(ID_Input,"88")||!strcmp(ID_Input,"89")||!strcmp(ID_Input,"90"))
							 {
                
										  global=69;
									 }
							  else if(!strcmp(ID_Input,"91")||!strcmp(ID_Input,"92")||!strcmp(ID_Input,"93")||!strcmp(ID_Input,"94")||!strcmp(ID_Input,"95")||!strcmp(ID_Input,"96")||!strcmp(ID_Input,"97")||!strcmp(ID_Input,"98")||!strcmp(ID_Input,"99")||!strcmp(ID_Input,"100"))
							 {
                
										  global=69;
									 }
								else
								{	
                 global=65;
								}							
									
								 }


void UART0_Handler (void)
 {
     uint32_t ui32Status;
     ui32Status = UARTIntStatus(UART0_BASE, true);                          
     UARTIntClear(UART0_BASE, ui32Status); 
     UARTGetFlag=1;	
    Writer();   
}


 
