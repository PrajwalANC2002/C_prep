#include<stdio.h>
#include<stdlib.h>
int main(){
	char n[10];
	printf("enter the month in caps ");
	scanf("%s",n);
	if(strcmp(n,"JANUARY")==0||strcmp(n,"MARCH")==0||strcmp(n,"MAY")==0||strcmp(n,"JULY")==0||strcmp(n,"AUGUST")==0||strcmp(n,"OCTOBER")==0||){
	printf("the no of days is 31");
}
	else if(strcmp(n,"FEBRAUARY")==0){
	
	printf(" the no of days is 28 or 29");
}
	else if(strcmp(n,"APRIL")==0||strcmp(n,"JUNE")==0||strcmp(n,"SEPTEMBER")==0||strcmp(n,"NOVEMBER")==0){
	printf("the no of days is 30");
}
else{
	printf("Please enter a valid month in caps");
}
return 0;
}
