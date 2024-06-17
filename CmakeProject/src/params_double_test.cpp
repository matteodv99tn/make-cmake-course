#include "my_math/double.hpp"
#include "parameters.hpp"
#include <stdio.h>

int main() {

    double a = DOUBLE_VAR_A;
    double b = DOUBLE_VAR_B;
    
    double sum_ab = sum_reals(a, b);
    printf("%6.4lf + %6.4lf = %6.4lf\n", a, b, sum_ab);

    return 0;
}
