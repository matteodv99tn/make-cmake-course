#include "my_math/int.hpp"
#include "parameters.hpp"
#include <stdio.h>

int main() {

    int a = INT_VAR_A;
    int b = INT_VAR_B;
    
    int sum_ab = sum_integers(a, b);
    printf("%d + %d = %d\n", a, b, sum_ab);

    return 0;
}
