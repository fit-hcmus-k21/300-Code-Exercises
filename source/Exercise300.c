#include <stdio.h>
#include <string.h>
#define MAX 100
void hoandoi(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sapxep(int a[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[j]>a[i])
            {
                hoandoi(&a[i],&a[j]);
            }
        }
    }
}

void in(int a[],int n)
{
    printf(" %d ",a[0]);
    for (int i=1;i<n;i++)
    {
        if (a[i]!=a[i-1])
        {
            printf("  %d  ",a[i]);
        }
    }
}

void xuat(int a[],int n)
{
    printf("\nSAP XEP : ");
    for (int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}

int main()
{
    int a[MAX];
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("Nhap mang:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sapxep(a,n);
    xuat(a,n);
    printf("\n");
    in(a,n);
    printf("\n");

    return 225;
}