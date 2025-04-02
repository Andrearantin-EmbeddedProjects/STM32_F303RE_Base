#ifndef GLOBAL_DEFS_H
#define GLOBAL_DEFS_H

#include "gpio_defs.h"
#include "rcc_defs.h"
#include "uart_defs.h"

typedef struct {
    RCCStatusCode rccStatusCode;
    UARTStatusCode uartStatusCode;
}CheckError;

#endif