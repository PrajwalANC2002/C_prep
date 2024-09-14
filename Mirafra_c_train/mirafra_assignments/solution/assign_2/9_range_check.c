#include <stdio.h>

int in_range(int x, int min, int max) {
    return x >= min && x <= max;
}

int main() {
    int x, min, max;
    printf("Enter x, min, max: ");
    scanf("%d %d %d", &x, &min, &max);
    if (in_range(x, min, max)) {
        printf("%d is in range [%d, %d]\n", x, min, max);
    } else {
        printf("%d is not in range [%d, %d]\n", x, min, max);
    }
    return 0;
}
