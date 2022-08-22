//  Tạo ma trận vuông bậc 5 với các phần tử 1...25 sắp xếp giảm theo hình zigzag từ trái sang phải, từ trên xuống dưới

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 50

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    srand(time(NULL));
    int a[MAX][MAX];
    int n;
    printf("Nhap bac ma tran: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            a[i][j]=rand()%90+1;
        }
    }
    printf("Ma tran:\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //  Sắp xếp ma trận từ bé đến lớn 
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            int q=j+1;
            for (int p=i;p<n;p++)
            {
                for (;q<n;q++)
                {
                    if (a[i][j]>a[p][q])
                    {
                        swap(&a[i][j],&a[p][q]);
                    }
                }
                q=0;
            }
        }
    }

    //  Sắp xếp ma trận theo hình zigzag
    for (int i=0;i<n;i++)
    {
        if (i%2)
        {
            for (int j=0;j<n-1;j++)
            {
                for (int k=j+1;k<n;k++)
                {
                    if (a[i][j]<a[i][k])
                    {
                        swap(&a[i][j],&a[i][k]);
                    }
                }
            }
        }
    }

    //  Xuất ma trận sau sắp xếp
    printf("\n-----------------------\n");
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Hoan thanh...\n");
    return 225;
}