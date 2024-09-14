#include <stdio.h>

int count_ones(int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The number of ones in the binary representation of %d is %d\n", n, count_ones(n));
    return 0;
}
