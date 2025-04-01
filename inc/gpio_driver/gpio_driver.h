#ifndef GPIO_DRIVER_H
#define GPIO_DRIVER_H

#include "common/gpio_defs.h"

typedef struct GPIO GPIO;

void GPIO_Set_Mode(GPIO* GPIO_Port, GPIO_Pin_Number pinNumber, GPIOMode mode);
void GPIO_Set_PullUp_PullDown(GPIO* GPIO_Port, GPIO_Pin_Number pinNumber, GPIOPupPdown);

#endif