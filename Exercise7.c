#include <stdio.h>

int main()
{
    float a,b;
    printf("Nhap a va b:");
    scanf("%f %f",&a,&b);
    if (a==0)
    {
        if (b==0) printf("Vo so nghiem !");
        else       printf("Vo nghiem !");
    }
    else
        printf("Nghiem la : x = %f",-b/a);
    return 0;
}