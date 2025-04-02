#ifndef UART_DRIVER_H
#define UART_DRIVER_H

#include "common/uart_defs.h"

/**
 * @brief Initializes USART2 transmitter
 * 
 * @returns OK if the transmitter was initialized successfully error otherwise
 */
UARTStatusCode UART2_Init_TX(void);

#endif