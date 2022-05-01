#include <stdio.h>

int main()
{
    float x;
    printf("Nhap x:");
    scanf("%f",&x);
    float s=x;
    for (int i=256;i>=1;i/=2)
        s=x+i/s;
    printf("F = %f",s);
    return 225;
}