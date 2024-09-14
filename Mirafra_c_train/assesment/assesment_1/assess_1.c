#include <stdio.h>

int hamming_distance(unsigned int n1, unsigned int n2) {
    int count=n1^n2;
    int i=0;
    int rem=0;
    int flag=0;
    while(count>0)
    {
      rem=count%2;
      count=count/2;
      if(rem)
      {
        flag++;
      }
      i++;
    }
    return flag;
}

int main() {
    printf("hamming_distance(7, 9) = %d\n", hamming_distance(7, 9));
    printf("hamming_distance(2, 1) = %d\n", hamming_distance(2, 1));
    printf("hamming_distance(2, 0) = %d\n", hamming_distance(2, 0));
    printf("hamming_distance(15, 0) = %d\n", hamming_distance(15, 0));
}
