#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count_words(char *s)
{
  int count=0;
  int len=strlen(s);
  if(len>0)
  {
  for(int i=0;i<=len;i++)
  {
    if(s[i]==' ')
    {
      count++;
    }
  }
  return count+1;
  }
  else
  {
    return 0;
  }

}
int main()
{
  //int s = count_words("hello world, how are you?");
  int s = count_words("");
  printf("%d\n",s);
  return 0;
}
