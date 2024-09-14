#include <stdio.h>

int count_ones(int n) {
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

int fill_crc(int n) {
    int crc = get_crc(n);
    n |= (crc << 31);
    return n;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The number %x after crc fill is %x\n", n, fill_crc(n));
    return 0;
}


