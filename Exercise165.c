#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int UCLN(int a,int b)
{
    int UCLN;
    a=abs(a);
    b=abs(b);
    for (int i=a;i>0;i--) 
        if (a%i==0 && b%i==0) 
        {
            UCLN=i;
            break;
        }
        return UCLN;
}

int BCNN(int a,int b)
{
    int BCNN=a*b/UCLN(a,b);
    return BCNN;
}
typedef struct 
{
    int t;
    int m;
} PHANSO;

PHANSO input()
{
    PHANSO phanso;
    printf("Nhap tu so va mau so :");
    scanf("%d%d",&phanso.t,&phanso.m);
    return phanso;
}
void output(PHANSO a)

{
    printf("%d/%d\n",a.t,a.m);
}
PHANSO toigian(PHANSO a)
{
    if (a.t <0 && a.m<0) 
    {
        a.t=abs(a.t);
        a.m=abs(a.m);
    }
    if (a.t>0 && a.m<0)
    {
        a.t=-a.t;
        a.m=abs(a.m);
    }
    return a;
}

PHANSO _add(PHANSO x,PHANSO y)
{
    PHANSO key;
    key.t=x.t*y.m+x.m*y.t;
    key.m=x.m*y.m;
    int uc=UCLN(key.t,key.m);
    key.t=key.t/uc;
    key.m=key.m/uc;
    return toigian(key);
}
PHANSO _sub(PHANSO x,PHANSO y)
{
    PHANSO key;
    key.t=x.t*y.m-x.m*y.t;
    key.m=x.m*y.m;
    int uc=UCLN(key.t,key.m);
    key.t=key.t/uc;
    key.m=key.m/uc;
    return toigian(key);
}
PHANSO _mul(PHANSO x,PHANSO y)
{
    PHANSO key;
    key.t=x.t*y.t;
    key.m=x.m*y.m;
    int uc=UCLN(key.t,key.m);
    key.t=key.t/uc;
    key.m=key.m/uc;
    return toigian(key);
}
PHANSO _div(PHANSO x,PHANSO y)
{
    PHANSO key;
    key.t=x.t*y.m;
    key.m=x.m*y.t;
    int uc=UCLN(key.t,key.m);
    key.t=key.t/uc;
    key.m=key.m/uc;
    return toigian(key);
}
int main()
{
    PHANSO ps1,ps2;
    ps1=input();
    ps2=input();
    printf("a + b = "); output(_add(ps1,ps2));
    printf("a - b = "); output(_sub(ps1,ps2));
    printf("a * b = "); output(_mul(ps1,ps2));
    printf("a / b = "); output(_div(ps1,ps2));
    return 225;
}