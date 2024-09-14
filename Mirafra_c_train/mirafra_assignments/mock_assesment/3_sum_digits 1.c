#include <stdio.h>

int sum_digits(unsigned int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n = n/10;
    }
    return sum;
}

int main() {
    printf("sum_digits(1278): %d\n", sum_digits(1278));
}


