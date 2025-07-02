/**
 * @file test_arith32.c
 * @author Shubhendra Pratap Singh
 * @date 2025-07-02
 * @version 1.0
 * @brief Unit tests for basic arithmetic operations on 32-bit integers.
 * This file contains unit tests for addition, subtraction,
 * multiplication, and division functions defined in arith32.h.
 */

#include "unity.h"
#include "arith32.h"

void setUp(void) {}
void tearDown(void) {}

/**
 * Test cases for arithmetic operations
 **/

// Test cases for addition
void test_add(void) {
    TEST_ASSERT_EQUAL_INT32(8, arith32_add(5, 3));
    TEST_ASSERT_EQUAL_INT32(-2, arith32_add(-5, 3));
}

// Test cases for subtraction
void test_subtract(void) {
    TEST_ASSERT_EQUAL_INT32(2, arith32_subtract(5, 3));
    TEST_ASSERT_EQUAL_INT32(-8, arith32_subtract(-5, 3));
}

// Test cases for multiplication
void test_multiply(void) {
    TEST_ASSERT_EQUAL_INT32(15, arith32_multiply(5, 3));
    TEST_ASSERT_EQUAL_INT32(-15, arith32_multiply(-5, 3));
}

// Test cases for division
void test_divide(void) {
    TEST_ASSERT_EQUAL_INT32(2, arith32_divide(6, 3));
    TEST_ASSERT_EQUAL_INT32(0, arith32_divide(5, 0)); // Division by zero
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_subtract);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide);
    return UNITY_END();
}
// Compile with: gcc -o test_arith32 test/test_arith32.c src/arith32.c -Iinc -lunity
// Run with: ./test_arith32