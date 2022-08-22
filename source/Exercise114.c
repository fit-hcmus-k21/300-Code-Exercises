#include <stdio.h>
#define MAX 100

int _strlen( char *s)
{
    char *p=s;
    while (*p) p++;
    return p-s;
}


void _strcpy( char *s1, char *s2)
{
    while (*s2)
    {
        *s1++=*s2++;
    }
    *s1++='\0';
}

void _strcat(char *s1, char *s2)
{

    while (*s1) s1++;
    while (*s2)
    {
        *s1++=*s2++;
    }
    *s1++='\0';
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
        printf("Chuoi 3:");
        fflush(stdin);
        fgets(S3,MAX,stdin);
        S1[_strlen(S1)-1]='\0';
        S2[_strlen(S2)-1]='\0';
        S3[_strlen(S3)-1]='\0';
        printf(" Do dai xau 1 : %d \n",_strlen(S1));
        printf("Do dai xau 2 : %d \n", _strlen(S2));
        _strcpy(S1,S2);
        printf("Sao chep xau 2 sang xau 1: %s\n",S1);
        _strcat(S1,S3);
        printf("ghep xau 3 vao xau 1: %s\n",S1);

    }
        while (tieptuc==1);

        return 225;
}