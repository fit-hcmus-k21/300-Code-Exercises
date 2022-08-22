//  Tạo ma trận vuông bậc n <20 với các phần tử có giá trị từ 1 đến n^2 sắp xếp tăng theo hình xoắn ốc từ trái sang phải ngoài vào trong

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
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }

    //  Đẩy ma trận vào mảng 1c và sắp xếp theo chiều tăng dần
    int b[MAX*MAX];
    int d1=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            b[d1++]=a[i][j];
        }
    }
    for (int i=0;i<d1-1;i++)
    {
        for (int j=i+1;j<d1;j++)
        {
            if (b[i]>b[j])
            {
                swap(&b[i],&b[j]);
            }
        }
    }

    //  Xử lí

    int t1=0,t2=n-1,t3=n-1,t4=0;

    //         t1------- t2
    //          |       |
    //          |       |
    //          |       |
    //         t4------- t3

    int d=0;
    int k=1;
    while (d<d1)
    {
        if (k%4==1)
        {
            //  Sắp xếp hàng t1: tăng dần từ trái qua phải bắt đầu từ cột t4(+1)
            for (int j=t4;j<=t2;j++)
            {
                a[t1][j]=b[d++];
            }
            t1++;

        }
        if (k%4==2)
        {
            //  Sắp xếp cột t2: tăng dần từ trên xuống dưới bắt đầu từ hàng t1(+1)
            for (int i=t1;i<=t3;i++)
            {
                a[i][t2]=b[d++];
            }
            t2--;
        }
        if (k%4==3)
        {
            //  Sắp xếp hàng t3: tăng dần từ phải sang trái bắt đầu từ cột t2(-1)
            for (int j=t2;j>=t4;j--)
            {
                a[t3][j]=b[d++];
            }
            t3--;
        }
        if (k%4==0)
        {
            //  Sắp xếp cột t4: tăng dần từ dưới lên trên bắt đầu từ dòng t3(-1)
            for (int i=t3;i>=t1;i--)
            {
                a[i][t4]=b[d++];
            }
            t4++;
        }
        k++;
    }


    //  Xuất ma trận sau sắp xếp
    printf("\n-----------------------\n");
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Hoan thanh...\n");
    return 225;
}