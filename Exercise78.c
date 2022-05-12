#include <stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a[100]={-94,63,-78,2,7,-26,-82,8,-18,39};
    int n=10;
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                swap(a+i,a+j);
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int x;
    printf("\nNhap x: ");
    scanf("%d",&x);
    int i;
    for (i=0;i<n && a[i]<x;i++);
    n++;
    int d=n;
    for (int j=n-1;j>=i;j--)
    {
        a[d]=a[j];
        d--;
    }
    a[i]=x;

    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nHoan thanh...\n");
    return 225;
}