#include "tm4c123gh6pm.h"
#include <stdbool.h>
#include <stdint.h>
#include "Dio_IntPin.h"
#define E_ok 0
#define E_Nok 1

 void  Dio_init(int32_t Port,int32_t pin,int32_t dir)//int pin,int dir,int mode
 {
if (Port==5)
{
 SYSCTL_RCGCGPIO_R=0x20 ;
 GPIO_PORTF_LOCK_R = 0x4C4F434B;

 if (pin==4)
 {
      if (dir ==0|dir ==1)
      {
        GPIO_PORTF_CR_R |= 0x10;
        GPIO_PORTF_AMSEL_R |= 0x00;
        GPIO_PORTF_PCTL_R |= 0x00000000;
        GPIO_PORTF_DIR_R |= 0x00;
        GPIO_PORTF_AFSEL_R |= 0x00;
        GPIO_PORTF_PUR_R |= 0x10;
        GPIO_PORTF_DEN_R |= 0x10;
      }

 }
 if(pin==3)
  { if (dir ==0|dir ==1)
  {
    GPIO_PORTF_CR_R |= 0x08;
    GPIO_PORTF_AMSEL_R |= 0x00;
    GPIO_PORTF_PCTL_R |= 0x00000000;
    GPIO_PORTF_DIR_R |= 0x08;
    GPIO_PORTF_AFSEL_R |= 0x00;
    GPIO_PORTF_PUR_R |= 0x00;
    GPIO_PORTF_DEN_R |= 0x08;
  }

  }
 if(pin==2)
  {
    GPIO_PORTF_CR_R |= 0x04;
    GPIO_PORTF_AMSEL_R |= 0x00;
    GPIO_PORTF_PCTL_R |= 0x00000000;
    GPIO_PORTF_DIR_R |= 0x04;
    GPIO_PORTF_AFSEL_R |= 0x00;
    GPIO_PORTF_PUR_R |= 0x00;
    GPIO_PORTF_DEN_R |= 0x04;
  }
 if(pin==1)
   {
     if (dir ==0|dir ==1)
     {
     GPIO_PORTF_CR_R |= 0x02;
     GPIO_PORTF_AMSEL_R |= 0x00;
     GPIO_PORTF_PCTL_R |= 0x00000000;
     GPIO_PORTF_DIR_R |= 0x02;
     GPIO_PORTF_AFSEL_R |= 0x00;
     GPIO_PORTF_PUR_R |= 0x00;
     GPIO_PORTF_DEN_R |= 0x02;
     }

   }
 if(pin==0)
   {
     if (dir ==0|dir ==1)
     {
     GPIO_PORTF_CR_R |= 0x01;
     GPIO_PORTF_AMSEL_R |= 0x00;
     GPIO_PORTF_PCTL_R |= 0x00000000;
     GPIO_PORTF_DIR_R |= 0x00;
     GPIO_PORTF_AFSEL_R |= 0x00;
     GPIO_PORTF_PUR_R |= 0x01;
     GPIO_PORTF_DEN_R |= 0x01;
   }

   }

}
else if (Port==4)
{
 SYSCTL_RCGCGPIO_R=0x20 ;
   GPIO_PORTE_LOCK_R = 0x4C4F434B;
   if(pin==0)
      {
        if (dir ==0)
        {
        GPIO_PORTE_CR_R |= 0x01;
        GPIO_PORTE_AMSEL_R |= 0x00;
        GPIO_PORTE_PCTL_R |= 0x00000000;
        GPIO_PORTE_DIR_R |= 0x00;
        GPIO_PORTE_AFSEL_R |= 0x00;
        GPIO_PORTE_PUR_R |= 0x01;
        GPIO_PORTE_DEN_R |= 0x01;
      }
        else if (dir ==1)
        {
            GPIO_PORTE_CR_R |= 0x01;
             GPIO_PORTE_AMSEL_R |= 0x00;
             GPIO_PORTE_PCTL_R |= 0x00000000;
             GPIO_PORTE_DIR_R |= 0x01;
             GPIO_PORTE_AFSEL_R |= 0x00;
             GPIO_PORTE_PUR_R |= 0x00;
             GPIO_PORTE_DEN_R |= 0x01;
        }

      }

      if(pin==1)
              {
                if (dir ==0)
                {
                    GPIO_PORTE_CR_R |= 0x02;
                    GPIO_PORTE_AMSEL_R |= 0x00;
                    GPIO_PORTE_PCTL_R |= 0x00000000;
                    GPIO_PORTE_DIR_R |= 0x00;
                    GPIO_PORTE_AFSEL_R |= 0x00;
                    GPIO_PORTE_PUR_R |= 0x02;
                    GPIO_PORTE_DEN_R |= 0x02;
              }
                else if (dir ==1)
                {
                    GPIO_PORTE_CR_R |= 0x02;
                    GPIO_PORTE_AMSEL_R |= 0x00;
                    GPIO_PORTE_PCTL_R |= 0x00000000;
                    GPIO_PORTE_DIR_R |= 0x02;
                    GPIO_PORTE_AFSEL_R |= 0x00;
                    GPIO_PORTE_PUR_R |= 0x00;
                    GPIO_PORTE_DEN_R |= 0x02;
                }

              }
if(pin==2)
{
   if (dir ==0)
   {
   GPIO_PORTE_CR_R |= 0x04;
   GPIO_PORTE_AMSEL_R |= 0x00;
   GPIO_PORTE_PCTL_R |= 0x00000000;
   GPIO_PORTE_DIR_R |= 0x00;
   GPIO_PORTE_AFSEL_R |= 0x00;
   GPIO_PORTE_PUR_R |= 0x04;
   GPIO_PORTE_DEN_R |= 0x04;
   }
 else if (dir ==1)
 {
GPIO_PORTE_CR_R |= 0x04;
GPIO_PORTE_AMSEL_R |= 0x00;
GPIO_PORTE_PCTL_R |= 0x00000000;
GPIO_PORTE_DIR_R |= 0x04;
GPIO_PORTE_AFSEL_R |= 0x00;
GPIO_PORTE_PUR_R |= 0x00;
GPIO_PORTE_DEN_R |= 0x04;
 }

}
   if(pin==3)
   {
      if (dir ==0)
      {
      GPIO_PORTE_CR_R |= 0x08;
      GPIO_PORTE_AMSEL_R |= 0x00;
      GPIO_PORTE_PCTL_R |= 0x00000000;
      GPIO_PORTE_DIR_R |= 0x00;
      GPIO_PORTE_AFSEL_R |= 0x00;
      GPIO_PORTE_PUR_R |= 0x08;
      GPIO_PORTE_DEN_R |= 0x08;
      }
    else if (dir ==1)
    {
   GPIO_PORTE_CR_R |= 0x08;
   GPIO_PORTE_AMSEL_R |= 0x00;
   GPIO_PORTE_PCTL_R |= 0x00000000;
   GPIO_PORTE_DIR_R |= 0x08;
   GPIO_PORTE_AFSEL_R |= 0x00;
   GPIO_PORTE_PUR_R |= 0x00;
   GPIO_PORTE_DEN_R |= 0x08;
    }

   }
      if(pin==4)
      {
         if (dir ==0)
         {
         GPIO_PORTE_CR_R |= 0x10;
         GPIO_PORTE_AMSEL_R |= 0x00;
         GPIO_PORTE_PCTL_R |= 0x00000000;
         GPIO_PORTE_DIR_R |= 0x00;
         GPIO_PORTE_AFSEL_R |= 0x00;
         GPIO_PORTE_PUR_R |= 0x10;
         GPIO_PORTE_DEN_R |= 0x10;
         }
       else if (dir ==1)
       {
      GPIO_PORTE_CR_R |= 0x10;
      GPIO_PORTE_AMSEL_R |= 0x00;
      GPIO_PORTE_PCTL_R |= 0x00000000;
      GPIO_PORTE_DIR_R |= 0x10;
      GPIO_PORTE_AFSEL_R |= 0x00;
      GPIO_PORTE_PUR_R |= 0x00;
      GPIO_PORTE_DEN_R |= 0x10;
       }

      }
         if(pin==5)
               {
                  if (dir ==0)
                  {
                  GPIO_PORTE_CR_R |= 0x20;
                  GPIO_PORTE_AMSEL_R |= 0x00;
                  GPIO_PORTE_PCTL_R |= 0x00000000;
                  GPIO_PORTE_DIR_R |= 0x00;
                  GPIO_PORTE_AFSEL_R |= 0x00;
                  GPIO_PORTE_PUR_R |= 0x20;
                  GPIO_PORTE_DEN_R |= 0x20;
                  }
                else if (dir ==1)
                {
               GPIO_PORTE_CR_R |= 0x20;
               GPIO_PORTE_AMSEL_R |= 0x00;
               GPIO_PORTE_PCTL_R |= 0x00000000;
               GPIO_PORTE_DIR_R |= 0x20;
               GPIO_PORTE_AFSEL_R |= 0x00;
               GPIO_PORTE_PUR_R |= 0x00;
               GPIO_PORTE_DEN_R |= 0x20;
                }

               }
                  if(pin==6)
                        {
                           if (dir ==0)
                           {
                           GPIO_PORTE_CR_R |= 0x40;
                           GPIO_PORTE_AMSEL_R |= 0x00;
                           GPIO_PORTE_PCTL_R |= 0x00000000;
                           GPIO_PORTE_DIR_R |= 0x00;
                           GPIO_PORTE_AFSEL_R |= 0x00;
                           GPIO_PORTE_PUR_R |= 0x40;
                           GPIO_PORTE_DEN_R |= 0x40;
                           }
                         else if (dir ==1)
                         {
                        GPIO_PORTE_CR_R |= 0x40;
                        GPIO_PORTE_AMSEL_R |= 0x00;
                        GPIO_PORTE_PCTL_R |= 0x00000000;
                        GPIO_PORTE_DIR_R |= 0x40;
                        GPIO_PORTE_AFSEL_R |= 0x00;
                        GPIO_PORTE_PUR_R |= 0x00;
                        GPIO_PORTE_DEN_R |= 0x40;
                         }

                        }
                           if(pin==7)
                                 {
                                    if (dir ==0)
                                    {
                                    GPIO_PORTE_CR_R |= 0x80;
                                    GPIO_PORTE_AMSEL_R |= 0x00;
                                    GPIO_PORTE_PCTL_R |= 0x00000000;
                                    GPIO_PORTE_DIR_R |= 0x00;
                                    GPIO_PORTE_AFSEL_R |= 0x00;
                                    GPIO_PORTE_PUR_R |= 0x80;
                                    GPIO_PORTE_DEN_R |= 0x80;
                                    }
                                  else if (dir ==1)
                                  {
                                 GPIO_PORTE_CR_R |= 0x80;
                                 GPIO_PORTE_AMSEL_R |= 0x00;
                                 GPIO_PORTE_PCTL_R |= 0x00000000;
                                 GPIO_PORTE_DIR_R |= 0x80;
                                 GPIO_PORTE_AFSEL_R |= 0x00;
                                 GPIO_PORTE_PUR_R |= 0x00;
                                 GPIO_PORTE_DEN_R |= 0x80;
                                  }

                                 }
}
   if (Port==3)
   {
    SYSCTL_RCGCGPIO_R=0x20 ;
    GPIO_PORTF_LOCK_R = 0x4C4F434B;
    if(pin==0)
          {
            if (dir ==0)
            {
            GPIO_PORTD_CR_R |= 0x01;
            GPIO_PORTD_AMSEL_R |= 0x00;
            GPIO_PORTD_PCTL_R |= 0x00000000;
            GPIO_PORTD_DIR_R |= 0x00;
            GPIO_PORTD_AFSEL_R |= 0x00;
            GPIO_PORTD_PUR_R |= 0x01;
            GPIO_PORTD_DEN_R |= 0x01;
          }
            else if (dir ==1)
            {
                GPIO_PORTD_CR_R |= 0x01;
                 GPIO_PORTD_AMSEL_R |= 0x00;
                 GPIO_PORTD_PCTL_R |= 0x00000000;
                 GPIO_PORTD_DIR_R |= 0x01;
                 GPIO_PORTD_AFSEL_R |= 0x00;
                 GPIO_PORTD_PUR_R |= 0x00;
                 GPIO_PORTD_DEN_R |= 0x01;
            }

          }

          if(pin==1)
                  {
                    if (dir ==0)
                    {
                        GPIO_PORTD_CR_R |= 0x02;
                        GPIO_PORTD_AMSEL_R |= 0x00;
                        GPIO_PORTD_PCTL_R |= 0x00000000;
                        GPIO_PORTD_DIR_R |= 0x00;
                        GPIO_PORTD_AFSEL_R |= 0x00;
                        GPIO_PORTD_PUR_R |= 0x02;
                        GPIO_PORTD_DEN_R |= 0x02;
                  }
                    else if (dir ==1)
                    {
                        GPIO_PORTD_CR_R |= 0x02;
                        GPIO_PORTD_AMSEL_R |= 0x00;
                        GPIO_PORTD_PCTL_R |= 0x00000000;
                        GPIO_PORTD_DIR_R |= 0x02;
                        GPIO_PORTD_AFSEL_R |= 0x00;
                        GPIO_PORTD_PUR_R |= 0x00;
                        GPIO_PORTD_DEN_R |= 0x02;
                    }

                  }
    if(pin==2)
    {
       if (dir ==0)
       {
       GPIO_PORTD_CR_R |= 0x04;
       GPIO_PORTD_AMSEL_R |= 0x00;
       GPIO_PORTD_PCTL_R |= 0x00000000;
       GPIO_PORTD_DIR_R |= 0x00;
       GPIO_PORTD_AFSEL_R |= 0x00;
       GPIO_PORTD_PUR_R |= 0x04;
       GPIO_PORTD_DEN_R |= 0x04;
       }
     else if (dir ==1)
     {
    GPIO_PORTD_CR_R |= 0x04;
    GPIO_PORTD_AMSEL_R |= 0x00;
    GPIO_PORTD_PCTL_R |= 0x00000000;
    GPIO_PORTD_DIR_R |= 0x04;
    GPIO_PORTD_AFSEL_R |= 0x00;
    GPIO_PORTD_PUR_R |= 0x00;
    GPIO_PORTD_DEN_R |= 0x04;
     }

    }
       if(pin==3)
       {
          if (dir ==0)
          {
          GPIO_PORTD_CR_R |= 0x08;
          GPIO_PORTD_AMSEL_R |= 0x00;
          GPIO_PORTD_PCTL_R |= 0x00000000;
          GPIO_PORTD_DIR_R |= 0x00;
          GPIO_PORTD_AFSEL_R |= 0x00;
          GPIO_PORTD_PUR_R |= 0x08;
          GPIO_PORTD_DEN_R |= 0x08;
          }
        else if (dir ==1)
        {
       GPIO_PORTD_CR_R |= 0x08;
       GPIO_PORTD_AMSEL_R |= 0x00;
       GPIO_PORTD_PCTL_R |= 0x00000000;
       GPIO_PORTD_DIR_R |= 0x08;
       GPIO_PORTD_AFSEL_R |= 0x00;
       GPIO_PORTD_PUR_R |= 0x00;
       GPIO_PORTD_DEN_R |= 0x08;
        }

       }
          if(pin==4)
          {
             if (dir ==0)
             {
             GPIO_PORTD_CR_R |= 0x10;
             GPIO_PORTD_AMSEL_R |= 0x00;
             GPIO_PORTD_PCTL_R |= 0x00000000;
             GPIO_PORTD_DIR_R |= 0x00;
             GPIO_PORTD_AFSEL_R |= 0x00;
             GPIO_PORTD_PUR_R |= 0x10;
             GPIO_PORTD_DEN_R |= 0x10;
             }
           else if (dir ==1)
           {
          GPIO_PORTD_CR_R |= 0x10;
          GPIO_PORTD_AMSEL_R |= 0x00;
          GPIO_PORTD_PCTL_R |= 0x00000000;
          GPIO_PORTD_DIR_R |= 0x10;
          GPIO_PORTD_AFSEL_R |= 0x00;
          GPIO_PORTD_PUR_R |= 0x00;
          GPIO_PORTD_DEN_R |= 0x10;
           }

          }
             if(pin==5)
                   {
                      if (dir ==0)
                      {
                      GPIO_PORTD_CR_R |= 0x20;
                      GPIO_PORTD_AMSEL_R |= 0x00;
                      GPIO_PORTD_PCTL_R |= 0x00000000;
                      GPIO_PORTD_DIR_R |= 0x00;
                      GPIO_PORTD_AFSEL_R |= 0x00;
                      GPIO_PORTD_PUR_R |= 0x20;
                      GPIO_PORTD_DEN_R |= 0x20;
                      }
                    else if (dir ==1)
                    {
                   GPIO_PORTD_CR_R |= 0x20;
                   GPIO_PORTD_AMSEL_R |= 0x00;
                   GPIO_PORTD_PCTL_R |= 0x00000000;
                   GPIO_PORTD_DIR_R |= 0x20;
                   GPIO_PORTD_AFSEL_R |= 0x00;
                   GPIO_PORTD_PUR_R |= 0x00;
                   GPIO_PORTD_DEN_R |= 0x20;
                    }

                   }
                      if(pin==6)
                            {
                               if (dir ==0)
                               {
                               GPIO_PORTD_CR_R |= 0x40;
                               GPIO_PORTD_AMSEL_R |= 0x00;
                               GPIO_PORTD_PCTL_R |= 0x00000000;
                               GPIO_PORTD_DIR_R |= 0x00;
                               GPIO_PORTD_AFSEL_R |= 0x00;
                               GPIO_PORTD_PUR_R |= 0x40;
                               GPIO_PORTD_DEN_R |= 0x40;
                               }
                             else if (dir ==1)
                             {
                            GPIO_PORTD_CR_R |= 0x40;
                            GPIO_PORTD_AMSEL_R |= 0x00;
                            GPIO_PORTD_PCTL_R |= 0x00000000;
                            GPIO_PORTD_DIR_R |= 0x40;
                            GPIO_PORTD_AFSEL_R |= 0x00;
                            GPIO_PORTD_PUR_R |= 0x00;
                            GPIO_PORTD_DEN_R |= 0x40;
                             }

                            }
                               if(pin==7)
                                     {
                                        if (dir ==0)
                                        {
                                        GPIO_PORTD_CR_R |= 0x80;
                                        GPIO_PORTD_AMSEL_R |= 0x00;
                                        GPIO_PORTD_PCTL_R |= 0x00000000;
                                        GPIO_PORTD_DIR_R |= 0x00;
                                        GPIO_PORTD_AFSEL_R |= 0x00;
                                        GPIO_PORTD_PUR_R |= 0x80;
                                        GPIO_PORTD_DEN_R |= 0x80;
                                        }
                                      else if (dir ==1)
                                      {
                                     GPIO_PORTD_CR_R |= 0x80;
                                     GPIO_PORTD_AMSEL_R |= 0x00;
                                     GPIO_PORTD_PCTL_R |= 0x00000000;
                                     GPIO_PORTD_DIR_R |= 0x80;
                                     GPIO_PORTD_AFSEL_R |= 0x00;
                                     GPIO_PORTD_PUR_R |= 0x00;
                                     GPIO_PORTD_DEN_R |= 0x80;
                                      }

                                     }
   }
      if (Port==2)
      {
       SYSCTL_RCGCGPIO_R=0x20 ;
       GPIO_PORTC_LOCK_R = 0x4C4F434B;
       if(pin==0)
                 {
                   if (dir ==0)
                   {
                   GPIO_PORTC_CR_R |= 0x01;
                   GPIO_PORTC_AMSEL_R |= 0x00;
                   GPIO_PORTC_PCTL_R |= 0x00000000;
                   GPIO_PORTC_DIR_R |= 0x00;
                   GPIO_PORTC_AFSEL_R |= 0x00;
                   GPIO_PORTC_PUR_R |= 0x01;
                   GPIO_PORTC_DEN_R |= 0x01;
                 }
                   else if (dir ==1)
                   {
                       GPIO_PORTC_CR_R |= 0x01;
                        GPIO_PORTC_AMSEL_R |= 0x00;
                        GPIO_PORTC_PCTL_R |= 0x00000000;
                        GPIO_PORTC_DIR_R |= 0x01;
                        GPIO_PORTC_AFSEL_R |= 0x00;
                        GPIO_PORTC_PUR_R |= 0x00;
                        GPIO_PORTC_DEN_R |= 0x01;
                   }

                 }

                 if(pin==1)
                         {
                           if (dir ==0)
                           {
                               GPIO_PORTC_CR_R |= 0x02;
                               GPIO_PORTC_AMSEL_R |= 0x00;
                               GPIO_PORTC_PCTL_R |= 0x00000000;
                               GPIO_PORTC_DIR_R |= 0x00;
                               GPIO_PORTC_AFSEL_R |= 0x00;
                               GPIO_PORTC_PUR_R |= 0x02;
                               GPIO_PORTC_DEN_R |= 0x02;
                         }
                           else if (dir ==1)
                           {
                               GPIO_PORTC_CR_R |= 0x02;
                               GPIO_PORTC_AMSEL_R |= 0x00;
                               GPIO_PORTC_PCTL_R |= 0x00000000;
                               GPIO_PORTC_DIR_R |= 0x02;
                               GPIO_PORTC_AFSEL_R |= 0x00;
                               GPIO_PORTC_PUR_R |= 0x00;
                               GPIO_PORTC_DEN_R |= 0x02;
                           }

                         }
           if(pin==2)
           {
              if (dir ==0)
              {
              GPIO_PORTC_CR_R |= 0x04;
              GPIO_PORTC_AMSEL_R |= 0x00;
              GPIO_PORTC_PCTL_R |= 0x00000000;
              GPIO_PORTC_DIR_R |= 0x00;
              GPIO_PORTC_AFSEL_R |= 0x00;
              GPIO_PORTC_PUR_R |= 0x04;
              GPIO_PORTC_DEN_R |= 0x04;
              }
            else if (dir ==1)
            {
           GPIO_PORTC_CR_R |= 0x04;
           GPIO_PORTC_AMSEL_R |= 0x00;
           GPIO_PORTC_PCTL_R |= 0x00000000;
           GPIO_PORTC_DIR_R |= 0x04;
           GPIO_PORTC_AFSEL_R |= 0x00;
           GPIO_PORTC_PUR_R |= 0x00;
           GPIO_PORTC_DEN_R |= 0x04;
            }

           }
              if(pin==3)
              {
                 if (dir ==0)
                 {
                 GPIO_PORTC_CR_R |= 0x08;
                 GPIO_PORTC_AMSEL_R |= 0x00;
                 GPIO_PORTC_PCTL_R |= 0x00000000;
                 GPIO_PORTC_DIR_R |= 0x00;
                 GPIO_PORTC_AFSEL_R |= 0x00;
                 GPIO_PORTC_PUR_R |= 0x08;
                 GPIO_PORTC_DEN_R |= 0x08;
                 }
               else if (dir ==1)
               {
              GPIO_PORTC_CR_R |= 0x08;
              GPIO_PORTC_AMSEL_R |= 0x00;
              GPIO_PORTC_PCTL_R |= 0x00000000;
              GPIO_PORTC_DIR_R |= 0x08;
              GPIO_PORTC_AFSEL_R |= 0x00;
              GPIO_PORTC_PUR_R |= 0x00;
              GPIO_PORTC_DEN_R |= 0x08;
               }

              }
                 if(pin==4)
                 {
                    if (dir ==0)
                    {
                    GPIO_PORTC_CR_R |= 0x10;
                    GPIO_PORTC_AMSEL_R |= 0x00;
                    GPIO_PORTC_PCTL_R |= 0x00000000;
                    GPIO_PORTC_DIR_R |= 0x00;
                    GPIO_PORTC_AFSEL_R |= 0x00;
                    GPIO_PORTC_PUR_R |= 0x10;
                    GPIO_PORTC_DEN_R |= 0x10;
                    }
                  else if (dir ==1)
                  {
                 GPIO_PORTC_CR_R |= 0x10;
                 GPIO_PORTC_AMSEL_R |= 0x00;
                 GPIO_PORTC_PCTL_R |= 0x00000000;
                 GPIO_PORTC_DIR_R |= 0x10;
                 GPIO_PORTC_AFSEL_R |= 0x00;
                 GPIO_PORTC_PUR_R |= 0x00;
                 GPIO_PORTC_DEN_R |= 0x10;
                  }

                 }
                    if(pin==5)
                          {
                             if (dir ==0)
                             {
                             GPIO_PORTC_CR_R |= 0x20;
                             GPIO_PORTC_AMSEL_R |= 0x00;
                             GPIO_PORTC_PCTL_R |= 0x00000000;
                             GPIO_PORTC_DIR_R |= 0x00;
                             GPIO_PORTC_AFSEL_R |= 0x00;
                             GPIO_PORTC_PUR_R |= 0x20;
                             GPIO_PORTC_DEN_R |= 0x20;
                             }
                           else if (dir ==1)
                           {
                          GPIO_PORTC_CR_R |= 0x20;
                          GPIO_PORTC_AMSEL_R |= 0x00;
                          GPIO_PORTC_PCTL_R |= 0x00000000;
                          GPIO_PORTC_DIR_R |= 0x20;
                          GPIO_PORTC_AFSEL_R |= 0x00;
                          GPIO_PORTC_PUR_R |= 0x00;
                          GPIO_PORTC_DEN_R |= 0x20;
                           }

                          }
                             if(pin==6)
                                   {
                                      if (dir ==0)
                                      {
                                      GPIO_PORTC_CR_R |= 0x40;
                                      GPIO_PORTC_AMSEL_R |= 0x00;
                                      GPIO_PORTC_PCTL_R |= 0x00000000;
                                      GPIO_PORTC_DIR_R |= 0x00;
                                      GPIO_PORTC_AFSEL_R |= 0x00;
                                      GPIO_PORTC_PUR_R |= 0x40;
                                      GPIO_PORTC_DEN_R |= 0x40;
                                      }
                                    else if (dir ==1)
                                    {
                                   GPIO_PORTC_CR_R |= 0x40;
                                   GPIO_PORTC_AMSEL_R |= 0x00;
                                   GPIO_PORTC_PCTL_R |= 0x00000000;
                                   GPIO_PORTC_DIR_R |= 0x40;
                                   GPIO_PORTC_AFSEL_R |= 0x00;
                                   GPIO_PORTC_PUR_R |= 0x00;
                                   GPIO_PORTC_DEN_R |= 0x40;
                                    }

                                   }
                                      if(pin==7)
                                            {
                                               if (dir ==0)
                                               {
                                               GPIO_PORTC_CR_R |= 0x80;
                                               GPIO_PORTC_AMSEL_R |= 0x00;
                                               GPIO_PORTC_PCTL_R |= 0x00000000;
                                               GPIO_PORTC_DIR_R |= 0x00;
                                               GPIO_PORTC_AFSEL_R |= 0x00;
                                               GPIO_PORTC_PUR_R |= 0x80;
                                               GPIO_PORTC_DEN_R |= 0x80;
                                               }
                                             else if (dir ==1)
                                             {
                                            GPIO_PORTC_CR_R |= 0x80;
                                            GPIO_PORTC_AMSEL_R |= 0x00;
                                            GPIO_PORTC_PCTL_R |= 0x00000000;
                                            GPIO_PORTC_DIR_R |= 0x80;
                                            GPIO_PORTC_AFSEL_R |= 0x00;
                                            GPIO_PORTC_PUR_R |= 0x00;
                                            GPIO_PORTC_DEN_R |= 0x80;
                                             }

                                            }
      }
         if (Port==1)
         {
          SYSCTL_RCGCGPIO_R=0x20 ;
          GPIO_PORTB_LOCK_R = 0x4C4F434B;
          if(pin==0)
                           {
                             if (dir ==0)
                             {
                             GPIO_PORTB_CR_R |= 0x01;
                             GPIO_PORTB_AMSEL_R |= 0x00;
                             GPIO_PORTB_PCTL_R |= 0x00000000;
                             GPIO_PORTB_DIR_R |= 0x00;
                             GPIO_PORTB_AFSEL_R |= 0x00;
                             GPIO_PORTB_PUR_R |= 0x01;
                             GPIO_PORTB_DEN_R |= 0x01;
                           }
                             else if (dir ==1)
                             {
                                 GPIO_PORTB_CR_R |= 0x01;
                                  GPIO_PORTB_AMSEL_R |= 0x00;
                                  GPIO_PORTB_PCTL_R |= 0x00000000;
                                  GPIO_PORTB_DIR_R |= 0x01;
                                  GPIO_PORTB_AFSEL_R |= 0x00;
                                  GPIO_PORTB_PUR_R |= 0x00;
                                  GPIO_PORTB_DEN_R |= 0x01;
                             }

                           }

                           if(pin==1)
                                   {
                                     if (dir ==0)
                                     {
                                         GPIO_PORTB_CR_R |= 0x02;
                                         GPIO_PORTB_AMSEL_R |= 0x00;
                                         GPIO_PORTB_PCTL_R |= 0x00000000;
                                         GPIO_PORTB_DIR_R |= 0x00;
                                         GPIO_PORTB_AFSEL_R |= 0x00;
                                         GPIO_PORTB_PUR_R |= 0x02;
                                         GPIO_PORTB_DEN_R |= 0x02;
                                   }
                                     else if (dir ==1)
                                     {
                                         GPIO_PORTB_CR_R |= 0x02;
                                         GPIO_PORTB_AMSEL_R |= 0x00;
                                         GPIO_PORTB_PCTL_R |= 0x00000000;
                                         GPIO_PORTB_DIR_R |= 0x02;
                                         GPIO_PORTB_AFSEL_R |= 0x00;
                                         GPIO_PORTB_PUR_R |= 0x00;
                                         GPIO_PORTB_DEN_R |= 0x02;
                                     }

                                   }
                     if(pin==2)
                     {
                        if (dir ==0)
                        {
                        GPIO_PORTB_CR_R |= 0x04;
                        GPIO_PORTB_AMSEL_R |= 0x00;
                        GPIO_PORTB_PCTL_R |= 0x00000000;
                        GPIO_PORTB_DIR_R |= 0x00;
                        GPIO_PORTB_AFSEL_R |= 0x00;
                        GPIO_PORTB_PUR_R |= 0x04;
                        GPIO_PORTB_DEN_R |= 0x04;
                        }
                      else if (dir ==1)
                      {
                     GPIO_PORTB_CR_R |= 0x04;
                     GPIO_PORTB_AMSEL_R |= 0x00;
                     GPIO_PORTB_PCTL_R |= 0x00000000;
                     GPIO_PORTB_DIR_R |= 0x04;
                     GPIO_PORTB_AFSEL_R |= 0x00;
                     GPIO_PORTB_PUR_R |= 0x00;
                     GPIO_PORTB_DEN_R |= 0x04;
                      }

                     }
                        if(pin==3)
                        {
                           if (dir ==0)
                           {
                           GPIO_PORTB_CR_R |= 0x08;
                           GPIO_PORTB_AMSEL_R |= 0x00;
                           GPIO_PORTB_PCTL_R |= 0x00000000;
                           GPIO_PORTB_DIR_R |= 0x00;
                           GPIO_PORTB_AFSEL_R |= 0x00;
                           GPIO_PORTB_PUR_R |= 0x08;
                           GPIO_PORTB_DEN_R |= 0x08;
                           }
                         else if (dir ==1)
                         {
                        GPIO_PORTB_CR_R |= 0x08;
                        GPIO_PORTB_AMSEL_R |= 0x00;
                        GPIO_PORTB_PCTL_R |= 0x00000000;
                        GPIO_PORTB_DIR_R |= 0x08;
                        GPIO_PORTB_AFSEL_R |= 0x00;
                        GPIO_PORTB_PUR_R |= 0x00;
                        GPIO_PORTB_DEN_R |= 0x08;
                         }

                        }
                           if(pin==4)
                           {
                              if (dir ==0)
                              {
                              GPIO_PORTB_CR_R |= 0x10;
                              GPIO_PORTB_AMSEL_R |= 0x00;
                              GPIO_PORTB_PCTL_R |= 0x00000000;
                              GPIO_PORTB_DIR_R |= 0x00;
                              GPIO_PORTB_AFSEL_R |= 0x00;
                              GPIO_PORTB_PUR_R |= 0x10;
                              GPIO_PORTB_DEN_R |= 0x10;
                              }
                            else if (dir ==1)
                            {
                           GPIO_PORTB_CR_R |= 0x10;
                           GPIO_PORTB_AMSEL_R |= 0x00;
                           GPIO_PORTB_PCTL_R |= 0x00000000;
                           GPIO_PORTB_DIR_R |= 0x10;
                           GPIO_PORTB_AFSEL_R |= 0x00;
                           GPIO_PORTB_PUR_R |= 0x00;
                           GPIO_PORTB_DEN_R |= 0x10;
                            }

                           }
                              if(pin==5)
                                    {
                                       if (dir ==0)
                                       {
                                       GPIO_PORTB_CR_R |= 0x20;
                                       GPIO_PORTB_AMSEL_R |= 0x00;
                                       GPIO_PORTB_PCTL_R |= 0x00000000;
                                       GPIO_PORTB_DIR_R |= 0x00;
                                       GPIO_PORTB_AFSEL_R |= 0x00;
                                       GPIO_PORTB_PUR_R |= 0x20;
                                       GPIO_PORTB_DEN_R |= 0x20;
                                       }
                                     else if (dir ==1)
                                     {
                                    GPIO_PORTB_CR_R |= 0x20;
                                    GPIO_PORTB_AMSEL_R |= 0x00;
                                    GPIO_PORTB_PCTL_R |= 0x00000000;
                                    GPIO_PORTB_DIR_R |= 0x20;
                                    GPIO_PORTB_AFSEL_R |= 0x00;
                                    GPIO_PORTB_PUR_R |= 0x00;
                                    GPIO_PORTB_DEN_R |= 0x20;
                                     }

                                    }
                                       if(pin==6)
                                             {
                                                if (dir ==0)
                                                {
                                                GPIO_PORTB_CR_R |= 0x40;
                                                GPIO_PORTB_AMSEL_R |= 0x00;
                                                GPIO_PORTB_PCTL_R |= 0x00000000;
                                                GPIO_PORTB_DIR_R |= 0x00;
                                                GPIO_PORTB_AFSEL_R |= 0x00;
                                                GPIO_PORTB_PUR_R |= 0x40;
                                                GPIO_PORTB_DEN_R |= 0x40;
                                                }
                                              else if (dir ==1)
                                              {
                                             GPIO_PORTB_CR_R |= 0x40;
                                             GPIO_PORTB_AMSEL_R |= 0x00;
                                             GPIO_PORTB_PCTL_R |= 0x00000000;
                                             GPIO_PORTB_DIR_R |= 0x40;
                                             GPIO_PORTB_AFSEL_R |= 0x00;
                                             GPIO_PORTB_PUR_R |= 0x00;
                                             GPIO_PORTB_DEN_R |= 0x40;
                                              }

                                             }
                                                if(pin==7)
                                                      {
                                                         if (dir ==0)
                                                         {
                                                         GPIO_PORTB_CR_R |= 0x80;
                                                         GPIO_PORTB_AMSEL_R |= 0x00;
                                                         GPIO_PORTB_PCTL_R |= 0x00000000;
                                                         GPIO_PORTB_DIR_R |= 0x00;
                                                         GPIO_PORTB_AFSEL_R |= 0x00;
                                                         GPIO_PORTB_PUR_R |= 0x80;
                                                         GPIO_PORTB_DEN_R |= 0x80;
                                                         }
                                                       else if (dir ==1)
                                                       {
                                                      GPIO_PORTB_CR_R |= 0x80;
                                                      GPIO_PORTB_AMSEL_R |= 0x00;
                                                      GPIO_PORTB_PCTL_R |= 0x00000000;
                                                      GPIO_PORTB_DIR_R |= 0x80;
                                                      GPIO_PORTB_AFSEL_R |= 0x00;
                                                      GPIO_PORTB_PUR_R |= 0x00;
                                                      GPIO_PORTB_DEN_R |= 0x80;
                                                       }

                                                      }

         }
            if (Port==0)
            {
                if(pin==0)
                                           {
                                             if (dir ==0)
                                             {
                                             GPIO_PORTA_CR_R |= 0x01;
                                             GPIO_PORTA_AMSEL_R |= 0x00;
                                             GPIO_PORTA_PCTL_R |= 0x00000000;
                                             GPIO_PORTA_DIR_R |= 0x00;
                                             GPIO_PORTA_AFSEL_R |= 0x00;
                                             GPIO_PORTA_PUR_R |= 0x01;
                                             GPIO_PORTA_DEN_R |= 0x01;
                                           }
                                             else if (dir ==1)
                                             {
                                                 GPIO_PORTA_CR_R |= 0x01;
                                                  GPIO_PORTA_AMSEL_R |= 0x00;
                                                  GPIO_PORTA_PCTL_R |= 0x00000000;
                                                  GPIO_PORTA_DIR_R |= 0x01;
                                                  GPIO_PORTA_AFSEL_R |= 0x00;
                                                  GPIO_PORTA_PUR_R |= 0x00;
                                                  GPIO_PORTA_DEN_R |= 0x01;
                                             }

                                           }

                                           if(pin==1)
                                                   {
                                                     if (dir ==0)
                                                     {
                                                         GPIO_PORTA_CR_R |= 0x02;
                                                         GPIO_PORTA_AMSEL_R |= 0x00;
                                                         GPIO_PORTA_PCTL_R |= 0x00000000;
                                                         GPIO_PORTA_DIR_R |= 0x00;
                                                         GPIO_PORTA_AFSEL_R |= 0x00;
                                                         GPIO_PORTA_PUR_R |= 0x02;
                                                         GPIO_PORTA_DEN_R |= 0x02;
                                                   }
                                                     else if (dir ==1)
                                                     {
                                                         GPIO_PORTA_CR_R |= 0x02;
                                                         GPIO_PORTA_AMSEL_R |= 0x00;
                                                         GPIO_PORTA_PCTL_R |= 0x00000000;
                                                         GPIO_PORTA_DIR_R |= 0x02;
                                                         GPIO_PORTA_AFSEL_R |= 0x00;
                                                         GPIO_PORTA_PUR_R |= 0x00;
                                                         GPIO_PORTA_DEN_R |= 0x02;
                                                     }

                                                   }
                                     if(pin==2)
                                     {
                                        if (dir ==0)
                                        {
                                        GPIO_PORTA_CR_R |= 0x04;
                                        GPIO_PORTA_AMSEL_R |= 0x00;
                                        GPIO_PORTA_PCTL_R |= 0x00000000;
                                        GPIO_PORTA_DIR_R |= 0x00;
                                        GPIO_PORTA_AFSEL_R |= 0x00;
                                        GPIO_PORTA_PUR_R |= 0x04;
                                        GPIO_PORTA_DEN_R |= 0x04;
                                        }
                                      else if (dir ==1)
                                      {
                                     GPIO_PORTA_CR_R |= 0x04;
                                     GPIO_PORTA_AMSEL_R |= 0x00;
                                     GPIO_PORTA_PCTL_R |= 0x00000000;
                                     GPIO_PORTA_DIR_R |= 0x04;
                                     GPIO_PORTA_AFSEL_R |= 0x00;
                                     GPIO_PORTA_PUR_R |= 0x00;
                                     GPIO_PORTA_DEN_R |= 0x04;
                                      }

                                     }
                                        if(pin==3)
                                        {
                                           if (dir ==0)
                                           {
                                           GPIO_PORTA_CR_R |= 0x08;
                                           GPIO_PORTA_AMSEL_R |= 0x00;
                                           GPIO_PORTA_PCTL_R |= 0x00000000;
                                           GPIO_PORTA_DIR_R |= 0x00;
                                           GPIO_PORTA_AFSEL_R |= 0x00;
                                           GPIO_PORTA_PUR_R |= 0x08;
                                           GPIO_PORTA_DEN_R |= 0x08;
                                           }
                                         else if (dir ==1)
                                         {
                                        GPIO_PORTA_CR_R |= 0x08;
                                        GPIO_PORTA_AMSEL_R |= 0x00;
                                        GPIO_PORTA_PCTL_R |= 0x00000000;
                                        GPIO_PORTA_DIR_R |= 0x08;
                                        GPIO_PORTA_AFSEL_R |= 0x00;
                                        GPIO_PORTA_PUR_R |= 0x00;
                                        GPIO_PORTA_DEN_R |= 0x08;
                                         }

                                        }
                                           if(pin==4)
                                           {
                                              if (dir ==0)
                                              {
                                              GPIO_PORTA_CR_R |= 0x10;
                                              GPIO_PORTA_AMSEL_R |= 0x00;
                                              GPIO_PORTA_PCTL_R |= 0x00000000;
                                              GPIO_PORTA_DIR_R |= 0x00;
                                              GPIO_PORTA_AFSEL_R |= 0x00;
                                              GPIO_PORTA_PUR_R |= 0x10;
                                              GPIO_PORTA_DEN_R |= 0x10;
                                              }
                                            else if (dir ==1)
                                            {
                                           GPIO_PORTA_CR_R |= 0x10;
                                           GPIO_PORTA_AMSEL_R |= 0x00;
                                           GPIO_PORTA_PCTL_R |= 0x00000000;
                                           GPIO_PORTA_DIR_R |= 0x10;
                                           GPIO_PORTA_AFSEL_R |= 0x00;
                                           GPIO_PORTA_PUR_R |= 0x00;
                                           GPIO_PORTA_DEN_R |= 0x10;
                                            }

                                           }
                                              if(pin==5)
                                                    {
                                                       if (dir ==0)
                                                       {
                                                       GPIO_PORTA_CR_R |= 0x20;
                                                       GPIO_PORTA_AMSEL_R |= 0x00;
                                                       GPIO_PORTA_PCTL_R |= 0x00000000;
                                                       GPIO_PORTA_DIR_R |= 0x00;
                                                       GPIO_PORTA_AFSEL_R |= 0x00;
                                                       GPIO_PORTA_PUR_R |= 0x20;
                                                       GPIO_PORTA_DEN_R |= 0x20;
                                                       }
                                                     else if (dir ==1)
                                                     {
                                                    GPIO_PORTA_CR_R |= 0x20;
                                                    GPIO_PORTA_AMSEL_R |= 0x00;
                                                    GPIO_PORTA_PCTL_R |= 0x00000000;
                                                    GPIO_PORTA_DIR_R |= 0x20;
                                                    GPIO_PORTA_AFSEL_R |= 0x00;
                                                    GPIO_PORTA_PUR_R |= 0x00;
                                                    GPIO_PORTA_DEN_R |= 0x20;
                                                     }

                                                    }
                                                       if(pin==6)
                                                             {
                                                                if (dir ==0)
                                                                {
                                                                GPIO_PORTA_CR_R |= 0x40;
                                                                GPIO_PORTA_AMSEL_R |= 0x00;
                                                                GPIO_PORTA_PCTL_R |= 0x00000000;
                                                                GPIO_PORTA_DIR_R |= 0x00;
                                                                GPIO_PORTA_AFSEL_R |= 0x00;
                                                                GPIO_PORTA_PUR_R |= 0x40;
                                                                GPIO_PORTA_DEN_R |= 0x40;
                                                                }
                                                              else if (dir ==1)
                                                              {
                                                             GPIO_PORTA_CR_R |= 0x40;
                                                             GPIO_PORTA_AMSEL_R |= 0x00;
                                                             GPIO_PORTA_PCTL_R |= 0x00000000;
                                                             GPIO_PORTA_DIR_R |= 0x40;
                                                             GPIO_PORTA_AFSEL_R |= 0x00;
                                                             GPIO_PORTA_PUR_R |= 0x00;
                                                             GPIO_PORTA_DEN_R |= 0x40;
                                                              }

                                                             }
                                                                if(pin==7)
                                                                      {
                                                                         if (dir ==0)
                                                                         {
                                                                         GPIO_PORTA_CR_R |= 0x80;
                                                                         GPIO_PORTA_AMSEL_R |= 0x00;
                                                                         GPIO_PORTA_PCTL_R |= 0x00000000;
                                                                         GPIO_PORTA_DIR_R |= 0x00;
                                                                         GPIO_PORTA_AFSEL_R |= 0x00;
                                                                         GPIO_PORTA_PUR_R |= 0x80;
                                                                         GPIO_PORTA_DEN_R |= 0x80;
                                                                         }
                                                                       else if (dir ==1)
                                                                       {
                                                                      GPIO_PORTA_CR_R |= 0x80;
                                                                      GPIO_PORTA_AMSEL_R |= 0x00;
                                                                      GPIO_PORTA_PCTL_R |= 0x00000000;
                                                                      GPIO_PORTA_DIR_R |= 0x80;
                                                                      GPIO_PORTA_AFSEL_R |= 0x00;
                                                                      GPIO_PORTA_PUR_R |= 0x00;
                                                                      GPIO_PORTA_DEN_R |= 0x80;
                                                                       }

                                                                      }
                   }

         }
