#include<stdio.h>
int sum_of_factors(unsigned int n)
{
  int sum=0;
  int i=0;
  while(i<n)
  {
    if(n%i==0)
    {
      sum=sum+i;
    }
    i++;
  }
  return sum;
}
int main()
{
  printf("%d\n",sum_of_factors(10));
  return 0;
}

