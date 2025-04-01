#ifndef RCC_INTERNAL_H
#define RCC_INTERNAL_H

#include "common/peripheral.h"
#include <stdint.h>

/**
 * @brief Offset of the RCC peripheral from the AHB1 base address.
 * For more info see the reference manual page 54
 * 
 */
#define RCC_OFFSET          (0x00001000UL)

/**
 * @brief Address of the RCC peripheral. This is used with @ref RCC structure to access
 * RCC registers.
 * 
 */
#define RCC_BASE_ADDRESS    (AHB1_PERIPHERAL_BASE_ADDRESS + RCC_OFFSET)

/**
 * @brief RCC registers structure. For more info see the reference manual page 139
 * 
 */
typedef struct {
	volatile uint32_t CR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
	volatile uint32_t AHBRSTR;
	volatile uint32_t CFGR2;
	volatile uint32_t CFGR3;
}RCC;

/**
 * @brief RCC structure to access RCC registers
 * 
 */
#define RCC ((RCC*)RCC_BASE_ADDRESS)



#endif