#include <stdio.h>

char to_upper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int main() {
    printf("%c\n", to_upper('a'));
    printf("%c\n", to_upper('A'));
    printf("%c\n", to_upper('z'));
    printf("%c\n", to_upper('Z'));
    return 0;
}
