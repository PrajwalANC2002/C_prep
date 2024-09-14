#include <stdio.h>

int sum_multiples(int n, int factor) {
    int sum = 0;
    int count = 0;
    int i = factor;
    while (count < n) {
        sum += i;
        i += factor;
        count++;
    }
    return sum;
}

int main() {
    int n;
    int factor;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter factor: ");
    scanf("%d", &factor);
    printf("Sum of first %d multiples of %d is %d\n", n, factor, sum_multiples(n, factor));
}
