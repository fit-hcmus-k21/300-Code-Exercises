#include <stdio.h>
#include <string.h>
#define MAX 100

char  *loai_space(char s[])
{
    char *p=s;
    while ((p=strstr(p,"  "))!=NULL)
    {
        strcpy(p,p+1);
    }
    if (*s==32)
    {
        strcpy(s,s+1);
    }
    p=s+strlen(s)-1;
    if (*p==32)
    {
        *p='\0';
    }
    return s;
}

void chuan_hoa(char *s)
{
    char p[]="  '\"?!.,";
    char *x;
    while ( (x=strtok(s,p))!=NULL)
    {
        x=strlwr(x);
        *x=*x-32;
        printf("%s ",x);
    }

}

int main()
{
    char s[MAX]="225    Bui thi Thanh            Ngan        ] :  ";
    printf("Result : %s\n",loai_space(s));
    printf("Result: ");
    chuan_hoa(s);
    printf("\n");

    return 225;
}