#include "gpio_driver/gpio_driver.h"
#include "gpio_driver/gpio_internal.h"

void GPIO_Set_Mode(GPIO* GPIO_Port, GPIO_Pin_Number pinNumber, GPIOMode mode) {

    /*
    Calculates how much i should shift to access the correct pin(each pin has 2 bits)
    */
    uint8_t pinNumberBits = (2 * pinNumber);

    /*
     Clears the register preemptively. If the selected mode
     was INPUT then it will stay cleared.
    */
    GPIO_Port->MODER &= ~(3U << pinNumberBits);

    if(mode == GPIO_MODE_OUTPUT) {
        GPIO_Port->MODER |= (1U << pinNumberBits);
    }
}

void GPIO_Set_PullUp_PullDown(GPIO* GPIO_Port, GPIO_Pin_Number pinNumber, GPIOPupPdown pullMode) {

    /*
    Calculates how much i should shift to access the correct pin(each pin has 2 bits)
    */
    uint8_t pinNumberBits = (2 * pinNumber);

    //Clears the register preemptively
    GPIO_Port->PUPDR &= ~(3U << pinNumberBits);

    switch(pullMode) {
        case GPIO_PULL_DOWN:
            GPIO_Port->PUPDR |= (2U << (pinNumberBits));
            break;
        case GPIO_PULL_UP:
            GPIO_Port->PUPDR |= (1U << pinNumberBits);
            break;
        case GPIO_NO_PULL_UP_PULL_DOWN:
            break;
        default:
            break;
    }
}