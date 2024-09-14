#include <stdio.h>

int count_ones(unsigned int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int get_crc(int n) {
    int n_ones = count_ones(n);
    if (n_ones % 2 == 1) {
        return 1;
    } 
    return 0;
}

int check_crc(int n) {
    int lower_31_bits = n & 0x7fffffff;
    int crc = (n & 0x80000000) > 0;
    return get_crc(lower_31_bits) == crc;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%x", &n);
    if (check_crc(n)) {
        printf("The number %x has a valid crc\n", n);
    } else {
        printf("The number %x has an invalid crc\n", n);
    }
    return 0;
}

