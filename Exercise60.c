#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void output(int A[], int n)
{
    for (int i=0;i<n;i++)
        printf(" %d ",A[i]);
}

void shuffle(int A[],int n)
{
    for (int i=0;i<n/2;i++)
    {
        
    }
}

int main()
{
    int A[100],B[100];
    int n;
    printf("Nhap n (n chan) : ");
    scanf("%d",&n);
    srand(time(NULL));
    for (int i=0;i<n;i++)
        A[i]=B[i]=rand() % 201-100;
    output(A,n);


    return 225;
}