#include "factorial.h"
#include <stdexcept> // Include for std::invalid_argument
#include <iostream>

int factorial(int n) {
    if (n < 0)
        throw std::invalid_argument("n must be non-negative");
    else
        return n <= 1 ? 1 : n * factorial(n - 1);
}
