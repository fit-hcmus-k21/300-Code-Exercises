<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#define MAX 100

int sodao(int n)
{
    int sodao=0;
    int cs;
    while (n!=0)
    {
        cs=n%10;
        sodao=sodao*10+cs;
        n=n/10;
    }
    return sodao;
}

void itos_hi (int n,char s[])
{
    int d=0;
    char cs;
    int n1=sodao(n);
    while (n1!=0)
    {
        cs=n1%10;
        s[d++]=cs+'0';
        n1=n1/10;
    }
    s[d]='\0';
}

int stoi_hi(char s[])
{
    char cs;
    int n=0;
    for (int i=0;s[i];i++)
    {
        cs=s[i]-48;
        n=n*10+cs;
    }
    return n;
}

int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d",&n);
    char s[MAX];
    itos_hi(n,s);
    printf("itos()   ->   %s\n",s);

    printf("\nNhap chuoi so nguyen duong: ");
    scanf("%s",s);
    printf("stoi()  ->  %d\n",stoi_hi(s));


    return 225;
=======
#include <stdio.h>
#include <string.h>
#define MAX 100

int sodao(int n)
{
    int sodao=0;
    int cs;
    while (n!=0)
    {
        cs=n%10;
        sodao=sodao*10+cs;
        n=n/10;
    }
    return sodao;
}

void itos_hi (int n,char s[])
{
    int d=0;
    char cs;
    int n1=sodao(n);
    while (n1!=0)
    {
        cs=n1%10;
        s[d++]=cs+'0';
        n1=n1/10;
    }
    s[d]='\0';
}

int stoi_hi(char s[])
{
    char cs;
    int n=0;
    for (int i=0;s[i];i++)
    {
        cs=s[i]-48;
        n=n*10+cs;
    }
    return n;
}

int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d",&n);
    char s[MAX];
    itos_hi(n,s);
    printf("itos()   ->   %s\n",s);

    printf("\nNhap chuoi so nguyen duong: ");
    scanf("%s",s);
    printf("stoi()  ->  %d\n",stoi_hi(s));


    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}