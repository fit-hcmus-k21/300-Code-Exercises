<<<<<<< HEAD
#include <stdio.h>
 

int main()
{
    int a,b,c;
    printf(" Nhap vao 3 so nguyen :");
    scanf("%d %d %d",&a,&b,&c);
    int min=a;
    if (min>b) min=b;
    if (min>c) min=c;
    printf("%d ",min);
    if (min ==a) 
        if (b<c) printf("%d %d ",b,c);
        else    printf("%d %d ",c,b);
    if (min ==b) 
        if (a<c) printf("%d %d ",a,c);
        else    printf("%d %d ",c,a);
    if (min ==c) 
        if (b<a) printf("%d %d ",b,a);
        else    printf("%d %d ",a,b);
    return 0;
=======
#include <stdio.h>
 

int main()
{
    int a,b,c;
    printf(" Nhap vao 3 so nguyen :");
    scanf("%d %d %d",&a,&b,&c);
    int min=a;
    if (min>b) min=b;
    if (min>c) min=c;
    printf("%d ",min);
    if (min ==a) 
        if (b<c) printf("%d %d ",b,c);
        else    printf("%d %d ",c,b);
    if (min ==b) 
        if (a<c) printf("%d %d ",a,c);
        else    printf("%d %d ",c,a);
    if (min ==c) 
        if (b<a) printf("%d %d ",b,a);
        else    printf("%d %d ",a,b);
    return 0;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}