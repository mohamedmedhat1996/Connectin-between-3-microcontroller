#include "Dio_IntPin.h"
#include "lamp.h"
#include "switches.h"
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


void switch_4(void)
{
 Dio_init( PortF,Pin4,input);
}
void switch_0(void)
{
 Dio_init( PortF,Pin0,input);
}
