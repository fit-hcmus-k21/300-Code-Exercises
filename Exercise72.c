#include <stdio.h>
#include <stdbool.h>
#define MAX 100

bool odd(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        if (a[i]%2)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int a[MAX]={4,-33,36,-4,12,72,-9,-87,76,-40};
    int n=10;
    int max;
    int d=0;
    int luu;
    if (odd(a,n))
    {
        for (int i=0;i<n;i++)
        {
            if (a[i]%2)
            {
                d++;
                if (d==1)
                {
                    max=a[i];
                    luu=i;
                }
                else
                {
                    if (a[i]>max)
                    {
                        max=a[i];
                        luu=i;
                    }
                }
            }
        }
    }
    printf("Phan tu le lon nhat : a[%d] = %d\n",luu,max);
    int k;
    printf("Nhap so lan can dich: ");
    scanf("%d",&k);
    for (int i=0;i<k;i++)
    {
        int temp=a[n-1];
        int d=n-1;
        for (int j=n-2;j>=0;j--)
        {
            a[d]=a[j];
            d--;
        }
        
        a[0]=temp;
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nHoan thanh...\n");
    return 225;
}