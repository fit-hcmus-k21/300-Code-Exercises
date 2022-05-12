#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<n-i+1;j++) printf("   ");
        for (int m=1;m<=2*i-1;m++) printf(" * ");
        printf("\n");
    }
    printf("\n");
    for (int i=1;i<n;i++)
    {
        for (int j=1;j<=n-i;j++) printf("   ");
        printf(" * ");
        for (int m=1;m<=2*i-3;m++) printf("   ");
        if (i>1) printf(" * ");
        printf("\n");
    }
    for (int i=1;i<=2*n-1;i++) printf(" * ");
    return 0;
}