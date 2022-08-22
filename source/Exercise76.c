#include <stdio.h>
#define MAX 100

int main()
{
    int a[MAX]={1,2,2,3,4,4,2,5,5,4};
    int n=10;
    int head,max;
    head=max=0;
    do 
    {
        int i,j,d;
        for (i=head;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                if (a[j]==a[i])
                {
                    break;
                }
            }
            if (i==j)
            {
                d=0;
                for (int k=0;k<n;k++)
                {
                    if (a[i]==a[k])
                    {
                        d++;
                    }
                }
                if (d>max)
                {
                    max=d;
                }
                
            }
        }
        head=i+1;
    } while (head<n);

    head=0;
    do 
    {
        int l,j,d;
        for (l=head;l<n;l++)
        {
            for (j=0;j<n;j++)
            {
                if (a[j]==a[l])
                {
                    break;
                }
            }
            if (l==j)
            {
                d=0;
                for (int k=0;k<n;k++)
                {
                    if (a[l]==a[k])
                    {
                        d++;
                    }
                }
                if (d==max)
                {
                    printf("%d[%d]  ",a[l],max);
                }
                
            }
        }
        head=l+1;
    } while (head<n);

   
    printf("Hoan thanh...\n");
    return 225;
}