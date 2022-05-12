#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100]={55,98,87,93,-37,-50,77,-48,93,52};
    int n=10;
    int x;
    printf("Nhap x: ");
    scanf("%d",&x);
    int kc,kcmin,value;
    kcmin=abs(x);
    for (int i=0;i<n;i++)
    {
        kc=abs(x-a[i]);
    
        if (kc<kcmin)
        {
            kcmin=kc;
            value=a[i];
        }
    }
    printf("So gan x nhat : %d\n",value);

    //  Chèn 1 vào bên phải các phần tử có giá trị âm

    for (int i=0;i<n;i++)
    {
        if (a[i]<0)
        {
            n++;
            int d=n;
            for (int j=n-1;j>i;j--)
            {
                a[d]=a[j];
                d--;
            }
            a[i+1]=1;
        }
    }

    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nHoan thanh...\n");
    return 225;
}