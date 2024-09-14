#include<stdio.h>
#include<string.h>
void histogram(char *str)
{
  int count[26]={0};
  for(int i=0;i<strlen(str);i++)
  {
    if(str[i] >= 'a' && str[i] <= 'z')
    {
      count[str[i-'a']]++;
    }
  }
  for(int i='a';i<='z';i++)
  {
    printf("%c =",i);
    for(int j=0;j<count[i];j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
int main()
{
  char *str[3]={"hello","world","hello"};
  histogram(str);
  return 0;
}


