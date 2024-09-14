#include<stdio.h>
#include<stdlib.h>
void small(char s[],int n){
	int i;
	for(i=0;i<n;i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]=s[i]+32;
		}
	}
	printf("%s",s);
}
int main(){
		int n;
	printf("enter the string length");
	scanf("%d",&n);
	char s[n];
	printf("enter the string");
	scanf("%s",s);
	small(s,n);
	return 0;
}
