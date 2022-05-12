#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    char c;
    char s[MAX];
    printf("Nhap chuoi :");
    fflush(stdin);
    fgets(s,MAX,stdin);
    printf("ky tu muon tim ? ");
    c=getchar();
    printf("Vi tri xuat hien :");
    int i=0;
    while (s[i])
    {
        if (s[i++]==c)
        {
            printf("%d ",i-1);
        }
    }
    return 225;
}