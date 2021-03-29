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
#include "Dio_IntPin.h"
#include "lamp.h"
#define input 0
#define output 1
#define PortF 5
#define PortE 4
#define PortD 3
#define PortC 2
#define PortB 1
#define PortA 0
#define Pin0 0
#define Pin1 1
#define Pin2 2
#define Pin3 3
#define Pin4 4
#define open 0
#define Red 0
#define Green 1
#define Blue 2
#define ON 0
#define OFF 1
#include "lighting.h"

void lighting_red(void)
{
    LAMP(ON,Red);

}
void lighting_blue(void)
{
    LAMP(ON,Blue);

}
void lighting_Green(void)
{
    LAMP(ON,Green);

}
void lighting_white(void)
{
    LAMP(ON,3);

}
void lighting_off(void)
{
    LAMP(OFF,0);

}
