#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int result;
    for (int i=3;i<=n;i++)
    {
        result=a+b;
        a=b;
        b=result;
    }
    printf("Result: %d",result);
    return 0;
}