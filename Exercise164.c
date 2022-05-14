<<<<<<< HEAD
#include <stdio.h>
typedef struct SoPhuc SoPhuc;

struct SoPhuc
{
    float x;
    float y;
};
SoPhuc add(SoPhuc a,SoPhuc b)
{
    SoPhuc add;
    add.x=a.x+b.x;
    add.y=a.y+b.y;
    return add;
}
SoPhuc sub(SoPhuc a,SoPhuc b)
{
    SoPhuc sub;
    sub.x=a.x-b.x;
    sub.y=a.y-b.y;
    return sub;
}
SoPhuc mul(SoPhuc a,SoPhuc b)
{
    SoPhuc mul;
    mul.x=a.x*b.x-a.y*b.y;
    mul.y=a.x*b.y+a.y*b.x;
    return mul;
}
SoPhuc div(SoPhuc a,SoPhuc b)
{
    SoPhuc div;
    div.x=(a.x*b.x+a.y*b.y)/(b.x*b.x+b.y*b.y);
    div.y=(a.y*b.x-a.x*b.y)/(b.x*b.x+b.y*b.y);
    return div;
}
void output(SoPhuc a)
{
    printf("%.1f +%.1fi \n",a.x,a.y);
}
SoPhuc input()
{
    SoPhuc c;
    printf("Nhap mot so  phuc :\n");
    printf("Phan thuc:");
    scanf("%f",&c.x);
    printf("Phan ao :");
    scanf("%f",&c.y);
    return c;
}
int main()
{
    SoPhuc sp1,sp2;
    sp1=input();
    sp2=input();
    printf("Tong a + b = ");
    output(add(sp1,sp2));
    printf("Hieu a - b =");
    output(sub(sp1,sp2));
    printf("Tich a * b =");
    output(mul(sp1,sp2));
    printf("Thuong a / b =");
    output(div(sp1,sp2));
    return 0;
=======
#include <stdio.h>
typedef struct SoPhuc SoPhuc;

struct SoPhuc
{
    float x;
    float y;
};
SoPhuc add(SoPhuc a,SoPhuc b)
{
    SoPhuc add;
    add.x=a.x+b.x;
    add.y=a.y+b.y;
    return add;
}
SoPhuc sub(SoPhuc a,SoPhuc b)
{
    SoPhuc sub;
    sub.x=a.x-b.x;
    sub.y=a.y-b.y;
    return sub;
}
SoPhuc mul(SoPhuc a,SoPhuc b)
{
    SoPhuc mul;
    mul.x=a.x*b.x-a.y*b.y;
    mul.y=a.x*b.y+a.y*b.x;
    return mul;
}
SoPhuc div(SoPhuc a,SoPhuc b)
{
    SoPhuc div;
    div.x=(a.x*b.x+a.y*b.y)/(b.x*b.x+b.y*b.y);
    div.y=(a.y*b.x-a.x*b.y)/(b.x*b.x+b.y*b.y);
    return div;
}
void output(SoPhuc a)
{
    printf("%.1f +%.1fi \n",a.x,a.y);
}
SoPhuc input()
{
    SoPhuc c;
    printf("Nhap mot so  phuc :\n");
    printf("Phan thuc:");
    scanf("%f",&c.x);
    printf("Phan ao :");
    scanf("%f",&c.y);
    return c;
}
int main()
{
    SoPhuc sp1,sp2;
    sp1=input();
    sp2=input();
    printf("Tong a + b = ");
    output(add(sp1,sp2));
    printf("Hieu a - b =");
    output(sub(sp1,sp2));
    printf("Tich a * b =");
    output(mul(sp1,sp2));
    printf("Thuong a / b =");
    output(div(sp1,sp2));
    return 0;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}