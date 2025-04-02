#ifndef UART_INTERFACE_H
#define UART_INTERFACE_H

#include "uart_defs.h"

/**
 * @brief Function to set the TX GPIO of the USART 2.
 * It's a weak function with a default implementation in @ref uart_driver.c
 * The default implementation returns an error. It's responsibility of the gpio_driver to make a strong
 * implementation of this function to set the GPIO pin(PA2) to its alternate function
 * 
 * @return UARTStatusCode UART_ERROR_INIT_TX if not overriden, OK otherwise(see the implementation in gpio_driver)
 */
UARTStatusCode USART2_Init_TX_GPIO(void);

/**
 * @brief Function to init the clock of the USART 2.
 * It's a weak function with a default implementation in @ref uart_driver.c
 * The default implementation returns an error. It's responsibility of the rcc_driver to make a strong
 * implementation of this function to init the USART2 clock from the APB1 bus
 * 
 * @return UARTStatusCode UART_ERROR_INIT_CLOCK if not overriden, OK otherwise(see the implementation in rcc_driver)
 */
UARTStatusCode USART2_Init_Clock(void);

#endif