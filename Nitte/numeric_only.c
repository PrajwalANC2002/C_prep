#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
void vowel(char str1[100])
{
    int k=0,sum=0;
    char num[]={'1','2','3','4','5','6','7','8','9','0'};
    for(int i=0;i<strlen(str1);i++)
    {
       int k=0;
       int temparr[10];
        for(int j=0;j<10;j++){
        if(str1[i]==num[j])
        {
            while(str1[i] >= '0' && str1[i] <= '9')
            {
                temparr[k]=str1[i]-'0';
                i++;
                k++;
            }


         for(int i=0;i<k;i++){
          sum+=temparr[i]*pow(10,(k-1-i));
    }
        }
        else
            continue;
    }
}

    printf("%d",sum);
}
int main(){

  char str1[100];
  printf("enter the string");
  scanf("%s",str1);
  vowel(str1);
  return 0;

}
