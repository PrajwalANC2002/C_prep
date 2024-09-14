#include<stdio.h>
#include<stdlib.h>
int sum_of_digits(int n)
{
  int rem=0;
  int sum=0;
  int i=0;
  while(i<4)
  {
    rem=n%10;
    sum=sum+rem;
    n=n/10;
    i++;
  }
  return sum;
}
int main()
{
  int s=sum_of_digits(1278);
  printf("%d\n",s);
  return 0;
}
