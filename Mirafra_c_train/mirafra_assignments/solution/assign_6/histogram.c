#include<stdio.h>
int length=20;
int arr1[20];
int arr2[20];
void print_histogram(int arr[20], int length){
        int unique_count=0;
        for(int i=0; i<length; i++){
                int is_unique=1;
                for(int j=0; j<unique_count; j++){
                        if(arr[i]==arr1[j]){
                                is_unique=0;
                                break;
                        }
                }
                if(is_unique){
                        arr1[unique_count] = arr[i];
                        unique_count++;
                }
        }
        for(int i = 0; i<unique_count; i++){
                int count=0;
                for(int j=0; j<length; j++){
                        if(arr1[i] == arr[j]){
                                count++;
                        }
                }
                arr2[i]=count;
        }
 
        for(int i=0; i<unique_count; i++){
                printf("%d ",arr1[i]);
                for (int k=0; k<arr2[i]; k++){
                        printf( "*");
                }
                printf("\n");
        }
}
int main(){
        int arr[20];
        printf("Enter the value\n");
        for(int i=0;i<length;i++){
                scanf("%d", &arr[i]);
        }
        print_histogram(arr,length);
        return 0;
}
