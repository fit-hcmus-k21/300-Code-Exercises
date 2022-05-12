#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    float result=1;
    for (int i=2;i<=n+1;i++)
        result=pow(result+i-1,1.0/i);
    printf("Result : %f",result);
    return 0;
}