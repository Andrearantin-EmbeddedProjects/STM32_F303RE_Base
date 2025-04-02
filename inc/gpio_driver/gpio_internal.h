#ifndef GPIO_INTERNAL_H
#define GPIO_INTERNAL_H

#include "common/peripheral.h"
#include <stdint.h>

/**
 * @brief GPIO registers structures. For more info see the reference manual page 240
 * 
 */
struct GPIO{
    volatile uint32_t MODER; //GPIO MODE REGISTER
    volatile uint32_t OTYPER; //GPIO OUTPUT TYPE REGISTER
    volatile uint32_t OSPEEDR; //GPIO OUTPUT SPEED REGISTER
    volatile uint32_t PUPDR; //GPIO PULL-UP/PULL-DOWN REGISTER
    volatile uint32_t IDR; //GPIO INPUT DATA REGISTER
    volatile uint32_t ODR; //GPIO OUTPUT DATA REGISTER
    volatile uint32_t BSRR; //GPIO BIT SET/RESET REGISTER
    volatile uint32_t LCKR; //GPIO PORT CONFIGURATION LOCK REGISTER
    volatile uint32_t AFR[2]; //GPIO ALTERNATE FUNCION REGISTER(HIGH-LOW)
};

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
 * @brief The MODER register of each GPIO port has 32 bits(2 bits per pin). This value
 * represents that
 * 
 */
#define MAX_PIN_BITS_VAL  31

/**
 * @brief The MODER register of each GPIO port has 15 pins. This value represents that
 * 
 */
#define MAX_PIN_NUMER	  15

#endif