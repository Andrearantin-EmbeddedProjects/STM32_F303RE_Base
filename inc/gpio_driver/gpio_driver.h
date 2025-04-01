#ifndef GPIO_DRIVER_H
#define GPIO_DRIVER_H

#include "common/gpio_defs.h"

typedef struct GPIO GPIO;

/**
 * @brief GPIOA structure to access GPIOA registers.
 * 
 */
extern const GPIO* GPIOA;

/**
 * @brief Sets a GPIO pin to the specified mode
 * 
 * @param GPIO_Port Port of the GPIO pin
 * @param pinNumber Integer representation of the pin number. This is a @ref GPIOPinNumber enum that goes from
 * 1 to 15
 * @param mode Mode of the GPIO pin to be set. This is a @ref GPIOMode enum that can either be GPIO_MODE_INPUT or
 * GPIO_MODE_OUTPUT
 */
void GPIO_Set_Mode(GPIO* GPIO_Port, GPIOPinNumber pinNumber, GPIOMode mode);

/**
 * @brief Sets a GPIO pin to the specified Pull up or Pull Down mode
 * 
 * @param GPIO_Port Port of the GPIO pin
 * @param pinNumber Integer representation of the pin number. This is a @ref GPIOPinNumber enum that goes from
 * 1 to 15
 * @param pullMode Mode of the GPIO pin to be set. This is a @ref GPIOPupPdown enum that can either be GPIO_PULL_DOWN,
 * GPIO_PULL_UP or GPIO_NO_PULL_UP_PULL_DOWN
 */
void GPIO_Set_PullUp_PullDown(GPIO* GPIO_Port, GPIOPinNumber pinNumber, GPIOPupPdown);

/**
 * @brief Toggles a GPIO pin
 * 
 * @param GPIO_Port Port of the GPIO pin
 * @param pin Bitmask of the pin to be toggled. This is a @ref GPIOPin enum
 */
void GPIO_Toggle_Pin(GPIO* GPIO_Port, GpioPin pin);

/**
 * @brief Reads a GPIO pin
 * 
 * @param GPIO_Port Port of the GPIO pin
 * @param pin Bitmask of the pin to be read. This is a @ref GPIOPin enum
 * @return The state of the pin(0 or 1) 
 */
uint8_t GPIO_Read_Pin(GPIO* GPIO_Port, GpioPin pin);

/**
 * @brief Writes a GPIO pin
 * 
 * @param GPIO_Port Port of the GPIO pin
 * @param pin Bitmask of the pin to be written. This is a @ref GPIOPin enum
 * @param state State to be written to the pin. This can either be GPIO_SET or GPIO_RESET
 */
void GPIO_Write_Pin(GPIO* GPIO_Port, GpioPin pin, GPIOState state);

#endif