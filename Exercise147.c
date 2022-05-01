#include <stdio.h>

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
    SelectSort(a,n);
    printf("\nXuat mang: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nHoan thanh...\n");
    return 225;
}