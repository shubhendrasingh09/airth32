/**
 * @file arith32.h
 * @author Shubhendra Pratap Singh
 * @date 2025-07-02
 * @version 1.0
 * @brief Basic arithmetic operations for 32-bit integers.
 * This header file declares functions for addition, subtraction,
 * multiplication, and division of 32-bit integers.
 */

#ifndef ARITH32_H
#define ARITH32_H

#include <stdint.h>

/**
 * @brief Add two 32-bit integers.
 * @param a First operand.
 * @param b Second operand.
 * @return Sum of a and b.
 */
int32_t arith32_add(int32_t a, int32_t b);

/**
 * @brief Subtract one 32-bit integer from another.
 * @param a Minuend.
 * @param b Subtrahend.
 * @return Difference (a - b).
 */
int32_t arith32_subtract(int32_t a, int32_t b);

/**
 * @brief Multiply two 32-bit integers.
 * @param a First operand.
 * @param b Second operand.
 * @return Product of a and b.
 */
int32_t arith32_multiply(int32_t a, int32_t b);

/**
 * @brief Divide one 32-bit integer by another.
 * @param a Dividend.
 * @param b Divisor.
 * @return Quotient (a / b). Returns 0 if b == 0.
 */
int32_t arith32_divide(int32_t a, int32_t b);

#endif // ARITH32_H
