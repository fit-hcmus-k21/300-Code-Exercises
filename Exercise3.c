#include <stdio.h>
#include <math.h>

int main()
{
    float xc,yc;
    float r;
    float xm,ym;
    printf("Nhap vao toa do tam (xc,yc) :");
    scanf("%f %f",&xc,&yc);
    printf("Nhap vao ban kinh:");
    scanf("%f",&r);
    printf("Nhap vao toa do diem M(xm,ym) :");
    scanf("%f %f",&xm,&ym);
    float distance=sqrt(pow(xm-xc,2)+pow(ym-yc,2));
    if (distance==r) 
        printf("Nam tren duong tron !");
    else 
        if (distance<r)
            printf("Nam trong duong tron !");
        else 
            printf("Nam ngoai duong tron !");
    return 0;
}