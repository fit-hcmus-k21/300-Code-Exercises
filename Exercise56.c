#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("Nhap n : ");
    scanf("%d",&n);
    int size=sizeof(n)*CHAR_BIT;
    printf("%d = ",n);
    while (size--)
    {
        printf("%d",(n>>size & 1)?1:0);
        if (size%CHAR_BIT==0)
        {
            printf(" ");
        }
    }
    printf("\nHex : %p",n);
    return 225;

    unsigned int 
}