#include <stdio.h>
#include <string.h>

void reverse(char *str, char *rev_str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev_str[i] = str[len - i - 1];
    }
    rev_str[len] = '\0';
}

int is_palindrome_str(char *str) {
    char rev_str[33];
    reverse(str, rev_str);
    printf("Reversed: %s\n", rev_str);
    return strcmp(str, rev_str) == 0;
}

int main() {
    char str[33];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("%s is %s\n", str, is_palindrome_str(str) ? "palindrome" : "not palindrome");
    return 0;
}
