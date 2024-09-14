#include <stdio.h>

int sum_even_numbers(int n) {
    int sum = 0;
    int count = 0;
    int i = 2;
    while (count < n) {
        sum += i;
        i += 2;
        count++;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of even numbers to sum: ");
    scanf("%d", &n);
    printf("The sum of the first %d even numbers is %d\n", n, sum_even_numbers(n));
    return 0;
}
