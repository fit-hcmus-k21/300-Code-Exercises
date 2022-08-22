#include <stdio.h>
#define MAX 100

int _strlen( char *s)
{
    char *p=s;
    while (*p) p++;
    return p-s;
}


int _strcmp(char *s1,char *s2)
{
        while (*s1==*s2)
        {
            if (*s1=='\0')
            {
                return 0;
            }
            s1++;
            s2++;
        }
        return *s1-*s2;
}

char *_strchr(char *s,char c)
{
    while (*s && *s!=c)
    {
        s++;
    }
    if (*s==c)
    {
        return s;
    }
    else
    {
        return NULL;
    }
}

char *_strrchr(char *s,char c)
{
    char *p=NULL;
    for (;*s;s++)
    {
        if (*s==c)
        {
            p=s;
        }
    }
    return p;
}

int main()
{
    char S1[MAX];
    char S2[MAX];
    char S3[MAX];
    int tieptuc;
    do
    {
        printf("\nTiep tuc?");
        scanf("%d",&tieptuc);
        printf("Chuoi 1:");
        fflush(stdin);
        fgets(S1,MAX,stdin);
        printf("Chuoi 2:");
        fflush(stdin);
        fgets(S2,MAX,stdin);
    
        S1[_strlen(S1)-1]='\0';
        S2[_strlen(S2)-1]='\0';

        if (_strcmp(S1,S2)==0)
        {
            printf("Hai xau bang nhau\n");
        }
        else
        {
            if (_strcmp(S1,S2)>0)
            {
                printf("Xau 1 lon hon\n");
            }
            else
            {
                printf("Xau 2 lon hon\n");
            }
        }

        printf("Nhap ki tu:");
        fflush(stdin);
        char c=getchar();

        printf("\ntim xau %c trong xau 1 (first) :%s",c,_strchr(S1,c));
        printf("\ntim xau %c trong xau 2 (first):%s",c,_strchr(S2,c));

        printf("\ntim xau %c trong xau 1 (final) :%s ",c,_strrchr(S1,c));
        printf("\ntim xau %c trong xau 1 (final) :%s",c,_strrchr(S2,c));
    }
        while (tieptuc==1);
}