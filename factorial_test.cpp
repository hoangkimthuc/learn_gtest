#include "factorial.h"
#include <gtest/gtest.h>

// Test factorial of 0.
TEST(FactorialTest, Zero) {
    EXPECT_EQ(1, factorial(0));
}

// Test factorial of positive numbers.
TEST(FactorialTest, Positive) {
    EXPECT_EQ(1, factorial(1));
    EXPECT_EQ(2, factorial(2));
    EXPECT_EQ(6, factorial(3));
    EXPECT_EQ(40320, factorial(8));
}