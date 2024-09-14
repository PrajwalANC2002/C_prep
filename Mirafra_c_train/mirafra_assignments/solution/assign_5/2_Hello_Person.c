#include<stdio.h>
#include<string.h>
int to_upper(char c) {
        if (c >= 'a' && c <= 'z')
        {
                char to_up = c - 32;
                return to_up;
        }
        else
                return  c;
}
int main() {
        char str[30];
        char upstr[30];
        printf("enter the name\n");
        scanf("%s",str);
        for(int i=0;str[i]!='\0';i++) {
                upstr[i]=to_upper(str[i]);
        }
        printf("Hello %s\n",upstr);
}
