#ifndef UART_DEFS_H
#define UART_DEFS_H

/**
 * @brief Status code of UART operations
 * 
 */
typedef enum {
    UART_OK,
    UART_ERROR_INIT_TX,
    UART_ERROR_INIT_CLOCK,
}UARTStatusCode;

#endif