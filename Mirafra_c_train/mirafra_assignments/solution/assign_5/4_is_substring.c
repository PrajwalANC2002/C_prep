#include<stdio.h>
#include<string.h>
int substr(char sub[30],char str[30]) {
        int len1=strlen(sub);
        int len2=strlen(str);
        int count=0;
        for(int i=0;i<len2;i++) {
                for (int j=0;j<len1;j++) {
                        if(str[i+j]=sub[j])count++;
                        else {
                                count=0;
                                break;
                        }

        if(count == len2) return 1;
                }
        }
        return 0;
}
int main() {
        char sub[30];
        char str[30];
        printf("enter the first string\n");
        scanf("%s",sub);
        printf("enter the second string\n");
        scanf("%s",str);
        if(substr(sub,str)) printf("the first string is the substring of second\n");
        else printf("the first string is  not the substring of second\n");
        return 0;
}
