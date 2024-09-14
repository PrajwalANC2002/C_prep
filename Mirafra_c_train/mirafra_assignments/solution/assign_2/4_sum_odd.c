#include <stdio.h>

int sum_odd_numbers(int n) {
    int sum = 0;
    int count = 0;
    int i = 1;
    while (count < n) {
        sum += i;
        i += 2;
        count++;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of odd numbers to sum: ");
    scanf("%d", &n);
    printf("The sum of the first %d odd numbers is %d\n", n, sum_odd_numbers(n));
    return 0;
}
