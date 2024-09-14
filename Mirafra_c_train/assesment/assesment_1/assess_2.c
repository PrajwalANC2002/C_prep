#include <stdio.h>
#include<string.h>

char to_upper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c + ('A' - 'a');
    }
    return c;
}
void change_first_letters_to_upper(char *s) {
  int len=strlen(s);
  for(int i=0;i<=len;i++)
  {
    if(s[i]==' ')
    {
      s[i+1]=to_upper(s[i+1]);
    }
    else if(i==0)
    {
      s[i]=to_upper(s[i]);
    }
  }
}
int main(){
    char s[] = "hello world";
    printf("change_first_letters_to_upper of %s: \n" , s);
    change_first_letters_to_upper(s);
    printf("%s \n", s);
    char t[] = "Bye bye world, see you";
    printf("change_first_letters_to_upper of %s: \n", t);
    change_first_letters_to_upper(t);
    printf("%s \n", t);
    return 0;
}
