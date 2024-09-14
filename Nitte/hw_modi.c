#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("enter the month ");
	scanf("%d",&n);
	switch(n){
		case 2:
			printf("the no of days in feb is 28/29");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("the no of days is 30");
			break;
		default:
				printf("the no of days is 31");
			break;
							
}
							
}
