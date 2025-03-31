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
 * @brief GPIO registers structures. For more info see the reference manual page 240
 * 
 */
typedef struct {
    volatile uint32_t MODER; //GPIO MODE REGISTER
    volatile uint32_t OTYPER; //GPIO OUTPUT TYPE REGISTER
    volatile uint32_t OSPEEDR; //GPIO OUTPUT SPEED REGISTER
    volatile uint32_t PUPDR; //GPIO PULL-UP/PULL-DOWN REGISTER
    volatile uint32_t IDR; //GPIO INPUT DATA REGISTER
    volatile uint32_t ODR; //GPIO OUTPUT DATA REGISTER
    volatile uint32_t BSRR; //GPIO BIT SET/RESET REGISTER
    volatile uint32_t LCKR; //GPIO PORT CONFIGURATION LOCK REGISTER
    volatile uint32_t AFR[2]; //GPIO ALTERNATE FUNCION REGISTER(HIGH-LOW)
}GPIO;

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

/**
 * @brief Offset of the GPIOA peripheral port from the AHB2 base address.
 * For more info see the reference manual at page 57
 * 
 */
#define GPIOA_OFFSET        (0x00000000UL)

/**
 * @brief Address of the GPIOA peripheral port. This is used with @ref GPIO structure
 * to access GPIOA registers
 * 
 */
#define GPIO_BASE_ADDRESS   (AHB2_PERIPHERAL_BASE_ADDRESS + GPIOA_OFFSET)

/**
 * @brief GPIOA structure to access GPIOA registers.
 * 
 */
#define GPIOA               ((GPIO*)GPIO_BASE_ADDRESS)

/**
 * @brief Bitmask for pin 5 of any GPIO port
 * 
 */
#define PIN5                (1U<<5)


#endif
