<<<<<<< HEAD
#include <stdio.h>
#define MAX 100

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int minpos(int a[],int n)
{
    int minpos=0;
    for (int i=1;i<n;i++)
    {
        if (a[i]<a[minpos])
        {
            minpos=i;
        }
    }
    return minpos;
}

void BubbleSort(int a[],int n)
{
    if (n==1)
    {
        return;
    }
    swap(a+n-1,a+minpos(a,n));
    BubbleSort(a,n-1);
}

int main()
{
    int a[100];
    printf("Nhap so phan tu mang: ");
    int n;
    scanf("%d",&n);
    printf("Nhap mang: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    BubbleSort(a,n);
    printf("\nXuat mang: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nHoan thanh...\n");
    return 225;
=======
#include <stdio.h>
#define MAX 100

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int minpos(int a[],int n)
{
    int minpos=0;
    for (int i=1;i<n;i++)
    {
        if (a[i]<a[minpos])
        {
            minpos=i;
        }
    }
    return minpos;
}

void BubbleSort(int a[],int n)
{
    if (n==1)
    {
        return;
    }
    swap(a+n-1,a+minpos(a,n));
    BubbleSort(a,n-1);
}

int main()
{
    int a[100];
    printf("Nhap so phan tu mang: ");
    int n;
    scanf("%d",&n);
    printf("Nhap mang: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    BubbleSort(a,n);
    printf("\nXuat mang: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nHoan thanh...\n");
    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}