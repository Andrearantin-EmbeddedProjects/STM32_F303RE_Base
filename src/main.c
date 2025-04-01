#include "gpio_driver/gpio_driver.h"
#include "rcc_driver/rcc_driver.h"

int main(void) {

   RCCStatusCode checkError =  System_Clock_Init();
    if(checkError != RCC_OK) {
        int a = 0;
        a++;
    }

    RCC_AHB_Enable(RCC_ENABLE_GPIOA);

    GPIO_Init(GPIO_PORT_A);
    
    GPIO_Set_Mode(GPIOA,PIN_N_5,GPIO_MODE_OUTPUT);

    while(1)  {
        GPIO_Toggle_Pin(GPIOA,PIN_5);
        for(uint32_t i = 0; i < 100000; i++) {};
    }
    
    return 0;
}