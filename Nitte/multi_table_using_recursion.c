#include<stdio.h>
#include<stdlib.h>
int numchange(int n,int e){
	n++;
	printf("%d",numchange(n,e));
}

int main(){
	int h,q;
	printf("enter the table for multiplication\n");
	scanf("%d",&h);
	printf("enter the limit for multiplication\n");
	scanf("%d",&q);
	numchange(h,q);
	return 0;
	}
