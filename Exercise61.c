#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void output(int A[],int n)
{
    for (int i=0;i<n;i++)
        printf("%d ",A[i]);
}

int main()
{
    int A[100];
    int n;
    printf("Nhap n :");
    scanf("%d",&n);
    srand (time(NULL));
    for (int i=0;i<n;i++)
        A[i]=rand() % 201 -100;
    output(A,n);
    int s=0;
    for (int i=0;i<n;i++)
        if (A[i]>0) s=s+A[i];
    printf("\nTong cac so nguyen duong = %d",s);
    int p;
    printf("\nNhap p [0;%d] :",n-1);
    scanf("%d",&p);
    memmove(&A[p],&A[p+1],(n-p-1)*sizeof(*A));
    output(A,n-1);
    return 225;
}