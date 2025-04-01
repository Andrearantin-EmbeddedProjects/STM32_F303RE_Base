#ifndef GPIO_DEFS_H
#define GPIO_DEFS_H

/**
 * @file gpio_defs.h
 * @author Andrea Rantin (andrea.rantin.01.23@gmail.com)
 * @brief Definitions of addresses and structures used by the GPIO drivers
 * @version 1.0
 * @date 2025-03-31
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdint.h>
#include "peripheral.h"

/**
 * @brief Mode that a GPIO pin can have
 * 
 */
typedef enum {
	GPIO_MODE_INPUT,
	GPIO_MODE_OUTPUT,
}GPIOMode;

/**
 * @brief PULL UP/PULL DOWN enum for GPIO pins
 * 
 */
typedef enum {
	GPIO_NO_PULL_UP_PULL_DOWN,
	GPIO_PULL_DOWN,
	GPIO_PULL_UP,
}GPIOPupPdown;

/**
 * @brief States that can be assigned to a GPIO pin
 * 
 */
typedef enum {
	GPIO_RESET,
	GPIO_SET,
}GPIOState;

/**
 * @brief Integer representation of a GPIO pin(for example the pin number of PA5 would be 5, the pin number
 * of PC3 would be 3 and so on)
 * 
 */
typedef enum {
    PIN_N_0 = 0,
    PIN_N_1,
    PIN_N_2,
    PIN_N_3,
    PIN_N_4,
    PIN_N_5,
    PIN_N_6,
    PIN_N_7,
    PIN_N_8,
    PIN_N_9,
    PIN_N_10,
    PIN_N_11,
    PIN_N_12,
    PIN_N_13,
    PIN_N_14,
    PIN_N_15,
}GPIO_Pin_Number;


#endif
