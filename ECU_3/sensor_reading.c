#include "sensor_reading.h"
volatile int Global=0;
void sensor_UART(void)  /* Description:  read value of sensor from message data     */
{


             switch( Global)
                          {

                                          case 65:
																						
                                          UARTprintf("Car stop \n");
                                          
                                          break;
																					case 66:
                                         
                                          
																					 UARTprintf("Car turn \n");
																					
                                          break;
                                          case 67:
                                          
                                          
																					UARTprintf("Move FWD and Reduce the speed \n");
																					
                                          break;	
                                          case 68:
                                          
                                          
																					UARTprintf("Move FWD \n");
																					 
                                          break;
                                          case 69:
                                          
                                          
																					UARTprintf("Move FWD and increase speed \n");
																					break;	
																					case 0:
                                          
                                          
																					UARTprintf("Car stop \n");
																					 
                                          break;																																										
}
}

