#include <stdio.h>

int main()
{
    int a,b,c;
    float tb=0;
    printf("Nhap A, B, C :");
    scanf("%d%d%d",&a ,&b ,&c);
    tb=(a + b +c)/(double)3;
    printf("TBC cua 3 so la %.2f",tb);

    return 0;
}
