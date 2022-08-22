#include <stdio.h>
#define MAX 100

int main()
{
    int a[MAX]={3,2,2,3,4,3,2,5,5,3};
    int n=10;
    int head,max,min;
    head=0;
    min=n;
    max=0;
    int luumax,luumin;
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
                    luumax=a[i];
                }
                if (d<min)
                {
                    min=d;
                    luumin=a[i];
                }
            }
        }
        head=i+1;
    } while (head<n);
    printf("Phan tu xuat hien nhieu nhat: %d [%d]\n",luumax,max);
    printf("Phan tu xuat hien it nhat: %d [%d]\n",luumin,min);
    printf("Hoan thanh...\n");
    return 225;
}