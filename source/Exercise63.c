#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100

void output(int A[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d  ",A[i]);
    }
}

int main()
{
    srand(time(NULL));
    int A[MAX]={};
    int n;
    printf("Nhap n :");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        A[i]=rand()%201 -100;
    }
    output(A,n);
    int count=0;
    for (int i=0;i<n;i++)
    {
        if (A[i]%4==0 && A[i]%10==6)
        {
            count=count+1;
        }
    }
    printf("\nCo %d phan tu chia het cho 4 va co chu so tan cung la 6\n",count);
    for (int j=0;j<n;j++)
    {
        if (A[j]%2)
        {
            A[j]=A[j]*2;
        }
    }
    printf("Nhan doi phan tu le :\n");
    output(A,n);
    return 225;


}