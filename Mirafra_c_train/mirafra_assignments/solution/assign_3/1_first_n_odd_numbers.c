#include <stdio.h>

void print_first_n_odd_numbers(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", 2 * i + 1);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    print_first_n_odd_numbers(n);
    return 0;
}
