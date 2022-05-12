#include <stdio.h>
#define MAX 100

int main()
{
    int a[MAX]={1,2,2,3,4,3,1,5,5,4};
    int n=10;
    /*  Cách 1:
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("%d ",a[0]);
    for (int i=1;i<n;i++)
    {
        if (a[i]!=a[i-1])
        {
            printf("%d ",a[i]);
        }
    }
    putchar('\n');
    */

    /*  Cách 2:
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        int d=i+1;
        for (int j=i+1;j<n;j++)
        {
            if (a[j]!=a[i])
            {
                a[d]=a[j];
                d++;
            }
        }
        n=d;
    }
    */
    for (int i=0;i<n;i++)
    {
        int j;
        for ( j=0;j<i;j++)
        {
            if (a[j]==a[i])
            {
                break;
            }
        }
        if (j==i)
        {
            printf("%d ",a[i]);
        }
    }

    printf("Hoan thanh...\n");
    return 225;
}