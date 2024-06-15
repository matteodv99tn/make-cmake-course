#include "my_math/double.h"
#include "my_math/constants.h"

double sum_reals(const double x, const double y) {
    return x + y;
}

double subtract_reals(const double x, const double y) {
    return x - y;
}

double multiply_reals(const double x, const double y) {
    return x * y;
}

double default_reals_multiply(const double x) {
    return x * MY_INT_MULTIPLIER;
}
