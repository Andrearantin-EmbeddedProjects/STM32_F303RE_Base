#include "gpio_driver/gpio_driver.h"
#include "gpio_driver/gpio_internal.h"

void GPIO_Set_Mode(GPIO* GPIO_Port, GPIO_Pin_Number pinNumber, GPIOMode mode) {

    /*
    Calculates how much i should shift to access the correct pin(each pin has 2 bits)
    */
    uint8_t pinNumberBits = (2 * pinNumber);

    //Clears the register preemptively
    GPIO_Port->MODER &= ~(3U << pinNumberBits);

    if(mode == GPIO_MODE_OUTPUT) {
        GPIO_Port->MODER |= (1U << pinNumberBits);
    }
}