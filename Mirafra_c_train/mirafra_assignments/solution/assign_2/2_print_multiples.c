#include <stdio.h>

void print_multiples(int factor, int limit) {
    for (int i = 1; i < limit; i++) {
        if (i % factor == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    print_multiples(3, 20);
    print_multiples(5, 20);
    print_multiples(7, 20);
    return 0;
}
