<<<<<<< HEAD
#include <stdio.h>

void Bin(int n)
{
    if (n>=2)
         Bin(n/2);
    printf("%d",n%2);
}

void Hex(int n)
{
    int c=n%16;
    if (n>=16) 
         Hex(n/16);
    if (0<c && c<10)
        printf("%d",c);
    else
    {
        printf("%c",'A'+c%10);
    }
}

int main()
{
    double x;
    printf("Nhap x :");
    scanf("%lf",&x);
    printf("Bin : ");
    Bin(x);
    printf("\nHex :");
    Hex(x);
    return 225;
=======
#include <stdio.h>

void Bin(int n)
{
    if (n>=2)
         Bin(n/2);
    printf("%d",n%2);
}

void Hex(int n)
{
    int c=n%16;
    if (n>=16) 
         Hex(n/16);
    if (0<c && c<10)
        printf("%d",c);
    else
    {
        printf("%c",'A'+c%10);
    }
}

int main()
{
    double x;
    printf("Nhap x :");
    scanf("%lf",&x);
    printf("Bin : ");
    Bin(x);
    printf("\nHex :");
    Hex(x);
    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}