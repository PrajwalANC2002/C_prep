#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void print_n_primes(int n) {
    int i = 2;
    while (n > 0) {
        if (is_prime(i)) {
            printf("%d\n", i);
            n--;
        }
        i++;
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    print_n_primes(n);
    return 0;
}
