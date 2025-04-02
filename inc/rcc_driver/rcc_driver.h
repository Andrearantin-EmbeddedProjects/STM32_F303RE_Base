#ifndef RCC_DRIVER_H
#define RCC_DRIVER_H

#include "common/rcc_defs.h"

/**
 * @brief Enables a peripheral clock on AHB bus
 * 
 * @param peripheral Peripheral to whom the clock needs to be enabled. 
 * This is a value of @ref RCCAHBEnable
 */
void RCC_AHB_Enable(RCCAHBEnable peripheral);


 /** @brief Enables a peripheral clock on APB1 bus
 * 
 * @param peripheral Peripheral to whom the clock needs to be enabled. 
 * This is a value of @ref RCCAPB1Enable
 */
void RCC_APB1_Enable(RCCAPB1Enable peripheral);

/**
 * @brief Initializes system clock by setting clock source as PLL from HSI to 72MhZ
 * 
 * @return @ref RCCStatusCode RCC_OK if successful or an error if there was an error setting up the clock 
 */
RCCStatusCode System_Clock_Init();

#endif