#include "unity.h"

#include "printSrc.h"


void setUp(void) {}
void tearDown(void) {}

/**
 * Test cases for print name
 **/


// Test cases for division
void test_name(void) {
    const char *name = "Shubhendra Pratap Singh";
    TEST_ASSERT_EQUAL_INT32(0, namePrint((const char *)name));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_name);
    return UNITY_END();
}
