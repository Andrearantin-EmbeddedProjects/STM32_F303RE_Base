#include "uart_driver/uart_driver.h"
#include "common/uart_interface.h"

/**
 * @brief Default implementation of USART2_Init_TX_GPIO
 * 
 * @return UARTStatusCode error because function has not been overridden
 */
static UARTStatusCode USART2_TX_Error_Handler(void) {
    return UART_ERROR_INIT_TX;
}

/**
 * @brief Default implementation of USART2_Init_Clock
 * 
 * @return UARTStatusCode error because function has not been overridden
 */
static UARTStatusCode USART2_Clock_Error_Handler(void) {
    return UART_ERROR_INIT_CLOCK;
}

UARTStatusCode USART2_Init_TX_GPIO(void)__attribute__((weak, alias("USART2_TX_Error_Handler")));
UARTStatusCode USART2_Init_Clock(void)__attribute__((weak, alias("USART2_Clock_Error_Handler")));


UARTStatusCode UART2_Init_TX(void) {
    //SET PA2 MODE TO ALTERNATE FUNCTION
    UARTStatusCode checkError =  USART2_Init_TX_GPIO();
    if(checkError != UART_OK) return checkError;
    
    //ENABLE CLOCK TO UART2 FROM RCC
    checkError = USART2_Init_Clock();
    if(checkError != UART_OK) return checkError;

    return UART_OK;
}