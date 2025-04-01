#ifndef PERIPHERAL_H
#define PERIPHERAL_H

/**
 * @brief Peripheral registers start address.
 * For more info see the reference manual at page 64 
 * 
 */
#define PERIPHERAL_BASE_ADDRESS         (0x40000000UL)

/**
 * @brief Offset of the AHB1 peripheral bus from @ref PERIPHERAL_BASE_ADDRESS 
 * For more info see the reference manual at page 64
 * 
 */
#define AHB1_PERIPHERAL_OFFSET          (0x00020000UL)

/**
 * @brief AHB1 peripheral bus base address. It's obtained by adding @ref AHB1_PERIPHERAL_OFFSET to
 * @ref PERIPHERAL_BASE_ADDRESS
 * For more info see the reference manual at page 64
 * 
 */
#define AHB1_PERIPHERAL_BASE_ADDRESS    (PERIPHERAL_BASE_ADDRESS + AHB1_PERIPHERAL_OFFSET)

/**
 * @brief Offset of the AHB2 peripheral bus from @ref PERIPHERAL_BASE_ADDRESS 
 * For more info see the reference manual at page 64
 * 
 */
#define AHB2_PERIPHERAL_OFFSET         (0x08000000UL)

/**
 * @brief AHB2 peripheral bus base address. It's obtained by adding @ref AHB2_PERIPHERAL_OFFSET to
 * @ref PERIPHERAL_BASE_ADDRESS
 * For more info see the reference manual at page 64
 * 
 */
#define AHB2_PERIPHERAL_BASE_ADDRESS   (PERIPHERAL_BASE_ADDRESS + AHB2_PERIPHERAL_OFFSET)

#endif
