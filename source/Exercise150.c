#include <stdio.h>

int Oddsum(int a[],int n)
{
    if (n==0)
    {
        return 0;
    }
    if (a[n-1]%2)
    {
        return a[n-1]+Oddsum(a,n-1);
    }
    else
    {
        return Oddsum(a,n-1);
    }
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
    printf("\nTong cac phan tu co tri le trong mang: %d\n",Oddsum(a,n));
    printf("\nHoan thanh...\n");
    return 225;
}