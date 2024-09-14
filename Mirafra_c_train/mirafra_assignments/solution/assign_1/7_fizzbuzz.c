#include <stdio.h>

void fizzbuzz(int n) {
    for (int i = 0; i <= n; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else {
            printf("%d\n", i);
        }
    }
}

int main() {
    fizzbuzz(100);
    return 0;
}
