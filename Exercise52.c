#include <stdio.h>

int main()
{
    int n;
    printf("Nhap n :");
    scanf("%d",&n);
    float s=0;
    for (int i=1;i<=n;i++)
        s=s+1.0/(i+n*n);
    printf("Fn = %f",s);
    return 225;
}