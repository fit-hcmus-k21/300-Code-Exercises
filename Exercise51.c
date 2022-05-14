<<<<<<< HEAD
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
=======
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
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}