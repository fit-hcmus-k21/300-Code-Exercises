#include <stdio.h>

float gt(int n,int k)
{
    float s=1;
    for (int i=1;i<=k;i++)
        s=s*(n-i+1)/i;
    return s;
}

int main()
{
    int k,n;
    printf("Nhap n,k (k<n<25) : ");
    scanf("%d%d",&n,&k);
    printf("C( %d, %d ) : %.0f",k,n,gt(n,k));
    printf("\nC( %d, %d ) : %.0f",n-k,n,gt(n,n-k));
    return 225;
}