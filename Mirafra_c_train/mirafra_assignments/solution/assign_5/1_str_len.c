#include<stdio.h>
int str_len(char str[100])
{
  int len=0,i;
while(str[i]!='\0')
{
    len++;
i++;
}
  return len;
}
int main()
{
char str[100];
printf("enter the string");
scanf("%s",str);
int length = str_len(str);
printf("the length is %d",length);
}
