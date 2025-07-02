/**
 * @file arith32.c
 * @author Shubhendra Pratap Singh
 * @date 2025-07-02
 * @version 1.0
 * @brief Basic arithmetic operations for 32-bit integers.
 * This file implements functions for addition, subtraction,
 * multiplication, and division of 32-bit integers.
 */

#include "arith32.h"

int32_t arith32_add(int32_t a, int32_t b) {
    return a + b;
}

int32_t arith32_subtract(int32_t a, int32_t b) {
    return a - b;
}

int32_t arith32_multiply(int32_t a, int32_t b) {
    return a * b;
}

int32_t arith32_divide(int32_t a, int32_t b) {
    if (b == 0) {
        return 0; // Or handle error
    }
    return a / b;
}
