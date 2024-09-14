#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) return 0;
    }
    return 1;
}

int sum_primes(int *numbers, int n) {
   int sum = 0;
   for (int i=0; i<n; i++) {
       if (is_prime(numbers[i])) {
           sum += numbers[i];
       }
   }
   return sum;
}

int main() {
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = sum_primes(x, 10);
    printf("sum of primes: %d \n", s);
}


