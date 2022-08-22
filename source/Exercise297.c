<<<<<<< HEAD
//  Bài tìm 4 số có tích lớn nhất theo 4 hướng (ngang, dọc, chéo trái,chéo phải)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main()
{
    int matran[MAX][MAX];
    srand(time(NULL));
    int n;
    printf("Nhap so phan tu ma tran : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            matran[i][j]=rand() %90+10;
        }
    }
    printf("Ma tran:\n");

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",matran[i][j]);
        }
        printf("\n");
    }

    int max=matran[0][0]*matran[0][1]*matran[0][2]*matran[0][3];
    printf("[1] %d\n",max);
    int s=1;
    // Tìm tích 4 số lớn nhất hàng ngang
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-3;j++)
        {
            for (int k=j;k<j+4;k++)
            {
                s=s*matran[i][k];
            }
            if (s>max)
            {
                max=s;
                printf("[2] %d  (%d,%d) \n",max,i,j);
            }
            s=1;
        }
    }
    // Tìm tích 4 số lớn nhất hàng dọc
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-3;j++)
        {
            for (int k=j;k<j+4;k++)
            {
                s=s*matran[k][i];
            }
            if (s>max)
            {
                max=s;
                printf("[3] %d  (%d,%d) \n",max,j,i);
            }
            s=1;
        }
    }
    // Tìm tích 4 số lớn nhất hướng chéo phải 
    for (int i=0;i<n-3;i++)
    {
        for (int j=0;j<n-3;j++)
        {
            for (int d=i,c=j,dem=0;dem<4;d++,c++,dem++)
            {
                s=s*matran[d][c];
            }
            if (s>max)
            {
                max=s;
                printf("[4] %d  (%d,%d) \n",max,i,j);
            }
            s=1;
        }
    }
    // Tìm tích 4 số lớn nhất hướng chéo trái 
    for (int i=n-4;i>=0;i--)
    {
        for (int j=n-1;j>=3;j--)
        {
            for (int d=i,c=j,dem=0;dem<4;d++,c--,dem++)
            {
                s=s*matran[d][c];
            }
            if (s>max)
            {
                max=s;
                printf("[5] %d  (%d,%d) \n",max,i,j);
            }
            s=1;
        }
    }
    //  Xuất 
    printf("Tich lon nhat cua 4 so trong ma tran: %d\n",max);
    printf("Hoan thanh ...\n");
    return 225;
=======
//  Bài tìm 4 số có tích lớn nhất theo 4 hướng (ngang, dọc, chéo trái,chéo phải)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main()
{
    int matran[MAX][MAX];
    srand(time(NULL));
    int n;
    printf("Nhap so phan tu ma tran : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            matran[i][j]=rand() %90+10;
        }
    }
    printf("Ma tran:\n");

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",matran[i][j]);
        }
        printf("\n");
    }

    int max=matran[0][0]*matran[0][1]*matran[0][2]*matran[0][3];
    printf("[1] %d\n",max);
    int s=1;
    // Tìm tích 4 số lớn nhất hàng ngang
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-3;j++)
        {
            for (int k=j;k<j+4;k++)
            {
                s=s*matran[i][k];
            }
            if (s>max)
            {
                max=s;
                printf("[2] %d  (%d,%d) \n",max,i,j);
            }
            s=1;
        }
    }
    // Tìm tích 4 số lớn nhất hàng dọc
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-3;j++)
        {
            for (int k=j;k<j+4;k++)
            {
                s=s*matran[k][i];
            }
            if (s>max)
            {
                max=s;
                printf("[3] %d  (%d,%d) \n",max,j,i);
            }
            s=1;
        }
    }
    // Tìm tích 4 số lớn nhất hướng chéo phải 
    for (int i=0;i<n-3;i++)
    {
        for (int j=0;j<n-3;j++)
        {
            for (int d=i,c=j,dem=0;dem<4;d++,c++,dem++)
            {
                s=s*matran[d][c];
            }
            if (s>max)
            {
                max=s;
                printf("[4] %d  (%d,%d) \n",max,i,j);
            }
            s=1;
        }
    }
    // Tìm tích 4 số lớn nhất hướng chéo trái 
    for (int i=n-4;i>=0;i--)
    {
        for (int j=n-1;j>=3;j--)
        {
            for (int d=i,c=j,dem=0;dem<4;d++,c--,dem++)
            {
                s=s*matran[d][c];
            }
            if (s>max)
            {
                max=s;
                printf("[5] %d  (%d,%d) \n",max,i,j);
            }
            s=1;
        }
    }
    //  Xuất 
    printf("Tich lon nhat cua 4 so trong ma tran: %d\n",max);
    printf("Hoan thanh ...\n");
    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}