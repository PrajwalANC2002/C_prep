#include<stdio.h>
#include<stdlib.h>
int small(char s[],int n){
int i;
int count=0;
	for(i=0;i<n;i++){
		
		if(s[i]>='a' && s[i]<='z'){
			count++;
		}
		
	}
	printf(" count of smaller case %d",count);
	
}
int main(){
	int n;
	printf("enter the string length");
	scanf("%d",&n);
	char s[n];
	printf("enter the string");
	scanf("%s",s);
	small(s,n);
	
}
