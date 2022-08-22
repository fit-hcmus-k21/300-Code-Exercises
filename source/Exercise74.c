#include <stdio.h>
#define MAX 100

int main()
{
    int a[MAX]={1,2,2,3,4,3,2,5,5,3};
    int n=10;
    for (int i=0;i<n;i++)
    {
        int j;
        for (j=0;j<i;j++)
        {
            if (a[i]==a[j])
            {
                break;
            }
        }
        if (i==j)
        {
            int d=0;
            for (int k=0;k<n;k++)
            {
                if (a[k]==a[i])
                {
                    d++;
                }
            }
            printf("%d [%d]  ",a[i],d);
        }
    }
    printf("\nHoan thanh...\n");
    return 225;
}