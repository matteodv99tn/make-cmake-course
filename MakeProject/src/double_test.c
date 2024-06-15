#include "my_math/double.h"
#include <stdio.h>

int main() {

    double a = 1.87;
    double b = 2.34;
    
    double sum_ab = sum_reals(a, b);
    printf("%6.4lf + %6.4lf = %6.4lf\n", a, b, sum_ab);

    return 0;
}
