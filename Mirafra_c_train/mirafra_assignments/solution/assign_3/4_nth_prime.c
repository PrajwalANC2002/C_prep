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

int nth_prime(int n) {
    int i = 2;
    while (n > 0) {
        if (is_prime(i)) {
            n--;
            if (n == 0) {
                return i;
            }
        }
        i++;
    }
    return -1;   // Just to make the compiler happy
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %dth prime is %d\n", n, nth_prime(n));
    return 0;
}

