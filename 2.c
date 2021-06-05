#include<stdio.h>
int main(){
    int a , b , c;
    printf("Nhap cac so A, B, C :");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b && a >c) printf("A la so lon nhat");
    else if (b > a && b > c) printf("B la so lon nhat");
    else printf("C la so lon nhat");
    return 0;
}