#include <stdio.h>

void print_isosceles_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    print_isosceles_triangle(n);
    return 0;
}
