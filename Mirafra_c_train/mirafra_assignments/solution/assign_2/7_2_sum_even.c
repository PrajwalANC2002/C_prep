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

int sum_n_evens(int n) {
    return sum_multiples(n, 2);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum of first %d even numbers is %d\n", n, sum_n_evens(n));
    return 0;
}


