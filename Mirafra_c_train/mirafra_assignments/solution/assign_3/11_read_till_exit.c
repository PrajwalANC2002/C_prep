#include <stdio.h>
#include <string.h>


int main() {
    char input[100];
    do {
        printf("Input please \n");
        scanf("%s", input);
        printf("You entered: %s\n", input);
    } while (strcmp(input, "exit") != 0);
}

