<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

float d(float a,float b,float c,float d)
{
    float distance;
    distance=sqrt(pow(a-b,2)+pow(c-d,2));
    return distance;
}

float S(float x,float y,float z)
{
    float p=(x+y+z)/2;
    float S=sqrt(p*(p-x)*(p-y)*(p-z));
    return S;
}

int main()
{
    float xa,xb,xc,xm;
    float ya,yb,yc,ym;
    printf("Nhap vao toa do A(xA,yA) :");
    scanf("%f %f",&xa,&ya);
    printf("Nhap vao toa do B(xB,yB) :");
    scanf("%f %f",&xb,&yb);
    printf("Nhap vao toa do C(xC,yC) :");
    scanf("%f %f",&xc,&yc);
    printf("Nhap vao toa do M(xM,yM) :");
    scanf("%f %f",&xm,&ym);
    float AB=d(xa,xb,ya,yb);
    float BC=d(xb,xc,yb,yc);
    float AC=d(xa,xc,ya,yc);
    float AM=d(xa,xm,ya,ym);
    float BM=d(xb,xm,yb,ym);
    float CM=d(xc,xm,yc,ym);
    float ABC=S(AB,BC,AC);
    float ABM=S(AB,AM,BM);
    float ACM=S(AC,AM,CM);
    float BCM=S(BC,BM,CM);
    if (ABM+ACM+BCM-ABC>0)
        printf("M nam ngoai tam giac !");
    else
        if ((ABM==0) || (ACM==0) || (BCM==0))
            printf("M nam tren tam giac !");
        else 
            printf("M nam trong tam giac !");
    
    printf("ABC= %f ABM= %f ACM=%f BCM=%f",ABC,ABM,ACM,BCM);
    return 0;
=======
#include <stdio.h>
#include <math.h>

float d(float a,float b,float c,float d)
{
    float distance;
    distance=sqrt(pow(a-b,2)+pow(c-d,2));
    return distance;
}

float S(float x,float y,float z)
{
    float p=(x+y+z)/2;
    float S=sqrt(p*(p-x)*(p-y)*(p-z));
    return S;
}

int main()
{
    float xa,xb,xc,xm;
    float ya,yb,yc,ym;
    printf("Nhap vao toa do A(xA,yA) :");
    scanf("%f %f",&xa,&ya);
    printf("Nhap vao toa do B(xB,yB) :");
    scanf("%f %f",&xb,&yb);
    printf("Nhap vao toa do C(xC,yC) :");
    scanf("%f %f",&xc,&yc);
    printf("Nhap vao toa do M(xM,yM) :");
    scanf("%f %f",&xm,&ym);
    float AB=d(xa,xb,ya,yb);
    float BC=d(xb,xc,yb,yc);
    float AC=d(xa,xc,ya,yc);
    float AM=d(xa,xm,ya,ym);
    float BM=d(xb,xm,yb,ym);
    float CM=d(xc,xm,yc,ym);
    float ABC=S(AB,BC,AC);
    float ABM=S(AB,AM,BM);
    float ACM=S(AC,AM,CM);
    float BCM=S(BC,BM,CM);
    if (ABM+ACM+BCM-ABC>0)
        printf("M nam ngoai tam giac !");
    else
        if ((ABM==0) || (ACM==0) || (BCM==0))
            printf("M nam tren tam giac !");
        else 
            printf("M nam trong tam giac !");
    
    printf("ABC= %f ABM= %f ACM=%f BCM=%f",ABC,ABM,ACM,BCM);
    return 0;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}