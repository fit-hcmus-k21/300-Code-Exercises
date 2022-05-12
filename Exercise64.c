#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 100
#define ispow2(x) (!(x &(x-1)) && (x))

int main()
{
    int n;
    int a[MAX];
    printf("Nhap so phan tu n : ");
    scanf("%d",&n);
    printf("Nhap mang : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d=0;

    //  Đếm số phần tử có trị là lũy thừa của 2
    //  Cách 1:
    /*bool lt=false;
    for (int i=0;i<n;i++)
    {
        lt=false;
        for (int j=1;j<=a[i];j=j*2)
        {
            if (a[i]==j)
            {
                lt=true;
            }
        }
        if (lt)
        {
            d++;
        }
    }*/
    //  Cách 2:
    for (int i=0;i<n;i++)
    {
        if (ispow2(a[i]))
        {
            d++;
        }
    }


    printf("So phan tu co tri la luy thua cua 2 : %d\n",d);
    int x;
    printf("Nhap so nguyen x : ");
    scanf("%d",&x);
    //  Xóa các phần tử trong mảng có trị trùng với x:
    //  Cách 1:
    int c=0;
    /*for (int i=0;i<n;i++)
    {
        if (a[i]!=x)
        {
            a[c++]=a[i];
        }
    }
    n=c;*/
    //  Cách 2:
    for (int i=0;i<n;i++)
    {
        if (a[i]==x)
        {
            memmove(a+i,a+i+1,(n-i-1)*sizeof(a[0]));
            n--;
            i--;
        }
    }
    //  In mảng
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nHoan thanh...\n");
    return 225;
}