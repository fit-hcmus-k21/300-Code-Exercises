<<<<<<< HEAD
#include <stdio.h>
#define MAX 100

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int maxpos(int a[],int n)
{
    int maxpos=0;
    for (int i=1;i<n;i++)
    {
        if (a[i]>a[maxpos])
        {
            maxpos=i;
        }
    }
    return maxpos;
}
void SelectSort(int a[],int n)
{
    if (n==1)
    {
        return;
    }
    swap(a+n-1,a+maxpos(a,n));
    SelectSort(a,n-1);
}

int Search(int a[],int x,int l,int r)
{
    if (l>r)
    {
        return -1;
    }
    int m=(l+r)/2;
    if (a[m]==x)
    {
        return m;
    }
    if (a[m]>x)
    {
        Search(a,x,l,m-1);
    }
    else
    {
        Search(a,x,m+1,r);
    }
}

int main()
{
    int a[MAX];
    printf("Nhap so phan tu mang: ");
    int n;
    scanf("%d",&n);
    printf("Nhap mang: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    SelectSort(a,n);
    printf("\nXuat mang: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nNhap so can tim: ");
    int x;
    scanf("%d",&x);

    int cs=Search(a,x,0,n-1);
    if (cs==-1)
    {
        printf("Khong co trong mang...\n");
    }
    else 
    {
        printf("\na[%d]\n",cs);
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

int maxpos(int a[],int n)
{
    int maxpos=0;
    for (int i=1;i<n;i++)
    {
        if (a[i]>a[maxpos])
        {
            maxpos=i;
        }
    }
    return maxpos;
}
void SelectSort(int a[],int n)
{
    if (n==1)
    {
        return;
    }
    swap(a+n-1,a+maxpos(a,n));
    SelectSort(a,n-1);
}

int Search(int a[],int x,int l,int r)
{
    if (l>r)
    {
        return -1;
    }
    int m=(l+r)/2;
    if (a[m]==x)
    {
        return m;
    }
    if (a[m]>x)
    {
        Search(a,x,l,m-1);
    }
    else
    {
        Search(a,x,m+1,r);
    }
}

int main()
{
    int a[MAX];
    printf("Nhap so phan tu mang: ");
    int n;
    scanf("%d",&n);
    printf("Nhap mang: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    SelectSort(a,n);
    printf("\nXuat mang: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nNhap so can tim: ");
    int x;
    scanf("%d",&x);

    int cs=Search(a,x,0,n-1);
    if (cs==-1)
    {
        printf("Khong co trong mang...\n");
    }
    else 
    {
        printf("\na[%d]\n",cs);
    }

    printf("\nHoan thanh...\n");
    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}