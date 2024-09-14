#include <stdio.h>

// This assumes that there is one space between words and no space at the end of the sentence.
// An empty sentence is compeletely empty.
int count_words(char *s) {
    if (s[0] == '\0') return 0;
    int nwords = 1;
    for (int i=0; s[i] != '\0'; i++) {
        if (s[i] == ' ') nwords++;
    }
    return nwords;
}

int main() {
    char* s = "hello world, how are you?";
    printf("nwords(%s) : %d \n", s, count_words(s));
    char* t = "I am fine, how about you?";
    printf("nwords(%s) : %d \n", t, count_words(t));
    char* empty = "";
    printf("nwords(%s) : %d \n", empty, count_words(empty));
}
