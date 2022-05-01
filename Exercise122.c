#include <stdio.h>
#include <string.h>

int luythua(int x,int y)
{
    int s=1;
    for (int i=1;i<=y;i++)
    {
        s=s*x;
    }
    return s;
}

int main()
{
    char s[255];
    printf("Nhap chuoi nhi phan: ");
    fflush(stdin);
    fgets(s,255,stdin);
    s[strlen(s)-1]='\0';
    int c;
    long long so=0;
    int j=0;
    for (int i=strlen(s)-1;i>=0;i--)
    {
        c=s[j++]-'0';
        if (c==1)
        {
            so=so+luythua(2,i);
        }
    }
    printf("Tri thap phan: %d\n",so);
    printf("Hoan thanh....\n");
    return 225;
}