#include <stdlib.h>
#include<stdio.h>
#include<math.h>
// Function to generate a random number between -1 and 1
float my_rand() {
    return -1.0 + 2 * (float)rand() / (float)RAND_MAX;
}
int inside(float x1,float y1,float x,float y,float r){
         float dist = ((x1-x)*(x1-x))+((y1-y)*(y1-y));
         if (dist <= r*r)
         {
                 return 1;
         }
         else {
                 return 0;
         }

}

int main() {
        float x=0;
        float y=0;
        float trail;
        float r,pi;
        int count=0;
        printf("enter the trial\n");
        scanf("%f",&trail);
        printf("enter the radius\n");
        scanf("%f",&r);
        for(int i=1;i<=trail;i++) {
                float x1=my_rand();
                float y1=my_rand();
                if(inside(x1,y1,x,y,r)){
                        count++;
                }

                 if (i % 10 == 0)
                {
                pi = 4.0 * (float)count / (float)i;
                float error = fabs((pi - 3.14159265) / 3.14159265) * 100;
                printf("Trials %d-%d: ", i - 9, i);
                  int num = (int)(error + 0.5); // Round to the nearest integer
                 for (int i = 0; i < num; i++)
                        {
                                printf("*");
                        }
                printf("\n");
                }
    }
}
