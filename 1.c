/*
    cau 1
*/

#include<stdio.h>

void doubleANum(int *n);

int main(){
    int n ;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("N =%d",n);
    doubleANum(&n);
    printf("\nDouble a N =%d",n);
}

void doubleANum(int *n){
    *n = (*n) * 2;
}
