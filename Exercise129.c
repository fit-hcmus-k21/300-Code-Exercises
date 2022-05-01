#include <stdio.h>
#include <string.h>
#define MAX 225

int main()
{
    char s[MAX];
    printf("Nhap chuoi (it nhat 4 chu so) : ");
    fflush(stdin);
    fgets(s,MAX,stdin);
    for (int i=0;i<strlen(s);i++)
    {   
        if (s[i]<'0' || s[i]>'9')
        {
            strcpy(s+i,s+i+1);
            i--;
        }
    }
    if (strlen(s)<4)
    {
        printf("Chuoi phai co it nhat 4 chu so !\n");
        return main();
    }
    for (int i=0;i<4;i++)
    {
        int maxpos=i;
        for (int j=i;j<=strlen(s)-4+i;j++)
        {
            if (s[j]>s[maxpos])
            {
                maxpos=j;
            }
        }
        if (maxpos>i)
        {
            strcpy(s+i,s+maxpos);
        }
    }
    printf("So lon nhat con lai : %s\n",s);
    return 225;
}