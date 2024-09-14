#include <stdio.h>
#include <string.h>

void get_binary(unsigned int n, char *bin_str) {
    int i = 0;
    while (n > 0) {
        bin_str[i] = n & 1 ? '1' : '0';
        n >>= 1;
        i++;
    }
    bin_str[i] = '\0';
}

void reverse(char *str, char *rev_str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev_str[i] = str[len - i - 1];
    }
    rev_str[len] = '\0';
}

int is_palindrome(unsigned int n) {
    char bin_str[33];
    char rev_str[33];
    get_binary(n, bin_str);
    printf("Number: %d Binary: %s\n", n, bin_str);
    reverse(bin_str, rev_str);
    printf("Reversed: %s\n", rev_str);
    return strcmp(bin_str, rev_str) == 0;
}

int main() {
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);
    printf("%u is %s\n", n, is_palindrome(n) ? "palindrome" : "not palindrome");
    return 0;
}
