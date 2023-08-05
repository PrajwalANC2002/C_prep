#include<stdio.h>
#include<stdlib.h>
int bubble(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for( j=0;j<n;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++){
	printf(" %d",arr[i]);
   }
}
int main(){
	int i,n;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter the array");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
   }
   printf("the sorted array is\n");
   bubble(a,n);
   return 0;
	
}
