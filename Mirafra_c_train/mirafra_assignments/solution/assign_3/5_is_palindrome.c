#include <stdio.h>
#include <string.h>

void to_binary(int n, char* s) {
    int i = 0;
    for (int m = n; m > 0; m /= 2) {
        s[i++] = m % 2 + '0';
    }
    s[i] = '\0';
}

void reverse(char* s, char* reversed) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    int j = 0;
    while (i > 0) {
        reversed[j++] = s[--i];
    }
    reversed[j] = '\0';
}

int is_palindrome(int n) {
    char s[32];
    char reversed[32];
    to_binary(n, s);
    reverse(s, reversed);
    printf("s: %s, reversed: %s\n", s, reversed);
    if (strcmp(s, reversed) == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (is_palindrome(n)) {
        printf("%d is a palindrome\n", n);
    } else {
        printf("%d is not a palindrome\n", n);
    }
    return 0;
}
