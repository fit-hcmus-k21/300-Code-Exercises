#include <stdio.h>
#define MAX 100

void xuat(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void hoanvi(int a[],int n,int cs)
{
    if (cs==n)
    {
        xuat(a,n);
    }
    else
    {
        int i;
        for (i=cs;i<n;i++)
        {
            swap(&a[i],&a[cs]);
            hoanvi(a,n,i+1);
            swap(&a[i],&a[cs]);
        }
    }
}

int main()
{
    int a[MAX];
    int n;
    printf("Nhap so nguyen duong n : ");
    scanf("%d",&n);
    //  Tạo mảng chứa các số từ 1 đến n
    for (int i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    printf("Cac hoan vi :\n");
    hoanvi(a,n,0);
    printf("Hoan thanh...\n");
    return 225;
}