#include <stdio.h>

int find_in_array(char c, char unique_chars[], int length) {
    for (int i=0; i < length; i++) {
        if (unique_chars[i] == c) return i;
    }
    return -1;
}

void draw_histogram(char* strings[], int nstrings) {
    char unique_chars[100];   // 100 is large enough to store all printable characters
    int n_unique_chars = 0;
    int frequencies[100];
    for (int i=0; i < nstrings; i++) {
        char* string = strings[i];
        for (int j=0; string[j] != '\0'; j++) {
            char c = string[j];
            int index = find_in_array(c, unique_chars, n_unique_chars);
            if (index != -1) {
                frequencies[index] += 1;
            } else {
                unique_chars[n_unique_chars] = c;
                frequencies[n_unique_chars] = 1;
                n_unique_chars ++;
            }
        }
    }
    for (int i=0; i < n_unique_chars; i++) {
        printf("%c ", unique_chars[i]);
        for (int j=0; j < frequencies[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    char *x[3] = {"hello", "world", "hello"};
    draw_histogram(x, 3);
    char *y[4] = {"Bye", "bye", "World", "!"};
    draw_histogram(y, 4);
}


