#include <stdio.h>

void make_change(int number) {
    int rem=0;
    rem=number%50;
    int countof50p=0;
    int countof10p=0;
    if(rem<50)
    {
      if(rem>21)
      {
        countof50p++;
      }
      printf("%d 50 paisa coins\n",countof50p);
      rem=rem%10;
      if(rem<10)
        {
          countof10p=countof10p+2;
          printf("%d 10 paisa coins\n",countof10p);
          printf("%d 1 paisa coins\n",rem);
        }
      }
}


int main() {
    make_change(77);
    make_change(21);
}

