#include<stdio.h>
#include<stdlib.h>
int is_prime(int n)
{
  if(n <=1)
  {
    return 0;
  }
  for(int i=2;i<=n/2;i++)
  {
    if(n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}
int sum_primes(int *x)
{
  int sum =2;
  for(int i=2;i<8;i++)
  {
    if(is_prime(x[i]))
    {
      sum=sum+x[i];
    }
  }
  return sum;
}

int main()
{
  int x[10]={1,2,3,4,5,6,7,8,9,10};
  printf("%d\n",sum_primes(x));
  return 0;
}

