#include <stdio.h>

void print_case(char c) {
    if (c >= 'A' && c <= 'Z') {
        printf("%c is an upper case letter\n", c);
    } else if (c >= 'a' && c <= 'z') {
        printf("%c is a lower case letter\n", c);
    } else {
        printf("%c is not a letter\n", c);
    }
}

int main() {
    print_case('A');
    print_case('a');
    print_case('1');
    print_case('Z');
    return 0;
}
