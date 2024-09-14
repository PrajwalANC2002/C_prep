#include <stdio.h>

int abs(int x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("The absolute value of %d is %d\n", x, abs(x));
    return 0;
}
