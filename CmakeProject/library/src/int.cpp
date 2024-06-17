#include "my_math/int.hpp"
#include "my_math/constants.hpp"

int sum_integers(const int x, const int y) {
    return x + y;
}

int subtract_integers(const int x, const int y) {
    return x - y;
}

int multiply_integers(const int x, const int y) {
    return x * y;
}

int default_int_multiply(const int x) {
    return x * MY_INT_MULTIPLIER;
}
