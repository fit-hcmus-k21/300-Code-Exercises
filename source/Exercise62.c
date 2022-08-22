#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void output(int A[],int n)
{
    for (int i=0;i<n;i++)
        printf("%d ",A[i]);
}

bool prime(int a,int b)
{
    int i;
    for ( i=a;i>=1;i--)
        if (a%i==0 && b%i==0) break;
    if (i==1) 
        return true;
    else 
        return false;
}

int main()
{
    int A[100];
    int n;
    srand(time(NULL));
    printf("Nhap n [1;99] : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        A[i]=rand()%11+10;
    output(A,n);

    int sl=0;
    int sc=0;
    for (int i=0;i<n;i+=2)
        if (A[i]%2==1) sl=sl+A[i];
    for (int i=1;i<n;i+=2)
        if (A[i]%2==0) sc=sc+A[i];
    if (sc==sl)
        printf("\nTong le vi tri chan (%d) bang tong chan vi tri le (%d) \n",sc,sl);
    else
        printf("\nTong chan vi tri le (%d) khac tong le vi tri chan (%d) \n",sc,sl);
    for (int i=0;i<n;i++)
        for (int j=i;j<n-1;j++)
            if (prime(A[j],A[j+1])) printf("(%d, %d)\n",A[j],A[j+1]);
    return 225;

}