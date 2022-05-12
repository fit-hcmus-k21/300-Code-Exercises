#include <stdio.h>

int main()
{
    int a[100]={-1,-39,62,-48,-12,-32,-39,87,75,-53};
    int n=10;
    double sum=0;
    for (int i=0;i<n;i++)
    {
        if (a[i])
        {
            sum=sum+1.0/a[i];
        }
    }
    printf("Tong nghich dao : %lf\n",sum);
    int temp;
    for (int i=0;i<n;i++)
    {
        if (a[i]%2)
        {
            temp=i+1;
            for (int j=i+2;j<n;j++)
            {
                a[temp]=a[j];
                temp++;
            }
            n--;
            i++;
        }
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("Hoan thanh\n");
    return 225;
}