#include <stdio.h>

int sum_of_factors(unsigned int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) sum += i;
    }
    return sum;
}

int main() {
    printf("sum_of_factors(20): %d\n", sum_of_factors(20));
}
