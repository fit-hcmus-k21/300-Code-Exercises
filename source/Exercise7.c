<<<<<<< HEAD
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
=======
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
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}