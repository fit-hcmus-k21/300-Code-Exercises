#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a[100]={-66,64,0,-50,58,51,0,45,1,82};
    int n;
    printf("Nhap n [1,99]: ");
    scanf("%d",&n);
    /*
    srand(time(NULL));
    for (int i=0;i<n;i++)
    {
        a[i]=rand()%201 -100;
    }
    */

    //  Xuất mảng
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    //  Chuyển các phần tử có trị lẻ về đầu mảng, chẵn về cuối mảng, 0 ở giữa
    int le=0;
    int chan=n-1;
    for (int i=0;i<n;i++)
    {
        if (a[i]%2)
        {
            swap(a+i,a+le);
            le++;
        }
    }
    for(int j=n-1;j>=le;j--)
    {
        if (a[j]!=0)
        {
            swap(a+j,a+chan);
            chan--;
        }
    }

    //  Xuất mảng sau khi sắp xếp
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("Hoan thanh...\n");
    return 225;

}