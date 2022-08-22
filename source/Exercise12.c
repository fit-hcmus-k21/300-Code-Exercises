<<<<<<< HEAD
/*      Viết chương trình giải hệ phương trình 2 ẩn :
        a1x+b1y=c1
        a2x+b2y=c2     
Nhap a1, b1, c1: 1 2 3 
Nhap a2, b2, c2: 4 5 6 
x = -1
y = 2                   */

#include <stdio.h>

int main()
{
    float a1,b1,c1;
    float a2,b2,c2;
    printf("Nhap a1, b1, c1 : ");
    scanf("%f %f %f",&a1,&b1,&c1);
    printf("Nhap a2, b2, c2 : ");
    scanf("%f %f %f",&a2,&b2,&c2);
    float d=a1*b2-a2*b1;
    float dx=c1*b2-c2*b1;
    float dy=a1*c2-a2*c1;
    if (a1/a2==b1/b2 && a1/a2==c1/c2)
        printf("Vo so nghiem ");
    else 
        if (a1/a2==b1/b2 && a1/a2!=c1/c2)
            printf("Vo nghiem");
        else 
            printf("x = %f\ny = %f",dx/d,dy/d);
    return 225;

=======
/*      Viết chương trình giải hệ phương trình 2 ẩn :
        a1x+b1y=c1
        a2x+b2y=c2     
Nhap a1, b1, c1: 1 2 3 
Nhap a2, b2, c2: 4 5 6 
x = -1
y = 2                   */

#include <stdio.h>

int main()
{
    float a1,b1,c1;
    float a2,b2,c2;
    printf("Nhap a1, b1, c1 : ");
    scanf("%f %f %f",&a1,&b1,&c1);
    printf("Nhap a2, b2, c2 : ");
    scanf("%f %f %f",&a2,&b2,&c2);
    float d=a1*b2-a2*b1;
    float dx=c1*b2-c2*b1;
    float dy=a1*c2-a2*c1;
    if (a1/a2==b1/b2 && a1/a2==c1/c2)
        printf("Vo so nghiem ");
    else 
        if (a1/a2==b1/b2 && a1/a2!=c1/c2)
            printf("Vo nghiem");
        else 
            printf("x = %f\ny = %f",dx/d,dy/d);
    return 225;

>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}