#ifndef __PORTF_H__
#define __PORTF_H__

#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_can.h"
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "driverlib/can.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"
#include "utils/uartstdio.h"
#include "can_rx.h"
#define GPIO_PORTF_LOCK_R       (*((volatile uint32_t *)0x40025520))
#define GPIO_PORTF_CR_R         (*((volatile uint32_t *)0x40025524))
/*Define variables for Red LED, blue LED and switch 1*/

#define SW1       GPIO_PIN_4
#define SW0       GPIO_PIN_0

/*Declaration of flag to indicate switch 1 has been pressed*/
extern volatile bool button_Flag;
extern volatile bool button_Flag_2;

/*Function Declaration*/
void portF_init(void);
void portF_handler(void);

#endif // __PORTF_H__
