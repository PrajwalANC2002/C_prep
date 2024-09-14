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
void histogram(char upstr[33]) {
    int len=strlen(upstr);
    int count=0;
    int freq[26]={0};
    for(int i=0;i<len;i++) {
            int num=upstr[i]-'A';
            freq[num]=freq[num]+1;

    }
    for(int i=0;i<26;i++) {
            printf("%c ",i+'a');
            for(int j=0;j<freq[i];j++) {
                printf("*");
            }
            printf("\n");

    }
}

int main() {
    char str[30];
    char upstr[30];
    printf("enter the value\n");
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++) {
                upstr[i]=to_upper(str[i]);
        }
    histogram(upstr);
    return 0;
}
