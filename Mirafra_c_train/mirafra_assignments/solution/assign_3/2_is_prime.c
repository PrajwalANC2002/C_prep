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

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (is_prime(n)) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }
    return 0;
}
