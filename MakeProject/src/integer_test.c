#include "my_math/int.h"

#include <stdio.h>

int main() {

    int a = 1;
    int b = 2;
    
    int sum_ab = sum_integers(a, b);
    printf("%d + %d = %d\n", a, b, sum_ab);

    return 0;
}
