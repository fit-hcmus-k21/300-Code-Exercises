#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    printf("Nhap a,b,c :");
    scanf("%f %f %f",&a,&b,&c);
    float delta;
    delta=b*b-4*a*c;
    if (delta>0)
    {
        printf(" Co hai nghiem phan biet :\n");
        printf("x1 = %f\n",(-b-sqrt(delta))/(2*a));
        printf("x2 = %f",(-b+sqrt(delta))/(2*a));
    }
    else
        if (delta==0) printf("Co nghiem kep :\n x = %f ",-b/(2*a));
        else
            printf("Phuong trinh vo nghiem !");
    return 0;
}