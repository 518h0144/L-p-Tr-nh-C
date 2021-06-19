/*
    cau 2
*/
#include<stdio.h>
#define N 100

void input(int *arr, int *n);
void output(int *arr,int n);
void doubleAnArray(int *arr,int n);

int main(){
    int n;
    printf("Enter N of Array:");
    scanf("%d",&n);
    int arr[N];
    input(arr,&n);
    doubleAnArray(arr,n);
    printf("\nDoubel first 3 Element in array : \n");
    output(arr,n);
    return 0;
}
void input(int *arr, int *n){
    while((*n)<=0){
        printf("Enter N (N > 0) : ");
        scanf("%d",n);
    }
    int i;
    for(i=0;i<(*n);i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
void doubleAnArray(int *arr,int n){
    for(int i=0;i<3;i++){
        arr[i] = arr[i] * 2;
    } 
}
void output(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%-10d",arr[i]);
    }
}
