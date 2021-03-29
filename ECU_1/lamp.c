#include "tm4c123gh6pm.h"
#include <stdbool.h>
#include <stdint.h>
#include "lamp.h"
#define E_ok 0
#define E_Nok 1

void LAMP(int32_t maner,int32_t colour)
{
    if (maner==0)
    {
       if(colour==0)
       {
           GPIO_PORTF_DATA_R=0x02;

       }
       else   if(colour==1)
       {
           GPIO_PORTF_DATA_R=0x08;
       }
       else   if(colour==2)
              {
                  GPIO_PORTF_DATA_R=0x04;
              }
       else
                     {
                         GPIO_PORTF_DATA_R=0x0F;
                     }

    }
       else
       {
           GPIO_PORTF_DATA_R=0x00;
       }




}
