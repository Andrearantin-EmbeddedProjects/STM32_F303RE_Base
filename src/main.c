#include "gpio_driver/gpio_driver.h"
#include "rcc_driver/rcc_driver.h"
#include "uart_driver/uart_driver.h"
#include "common/global_defs.h"

int main(void) {

    CheckError checkError = {0};

    checkError.rccStatusCode =  System_Clock_Init();
    if(checkError.rccStatusCode != RCC_OK) {
        while(1);
    }

    RCC_AHB_Enable(RCC_ENABLE_GPIOA);

    GPIO_Init(GPIO_PORT_A);
    
    GPIO_Set_Mode(GPIOA,PIN_N_5,GPIO_MODE_OUTPUT);

    //USART 2 INITIALIZATION
    checkError.uartStatusCode = UART2_Init_TX();
    if(checkError.uartStatusCode != UART_OK) {
        while(1);
    }

    while(1)  {
        GPIO_Toggle_Pin(GPIOA,PIN_5);
        for(uint32_t i = 0; i < 100000; i++) {};
    }
    
    return 0;
}