#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    char s1[MAX];
    char s2[MAX];
    char s3[MAX];
    printf("Chuoi goc: ");
    fflush(stdin);
    fgets(s1,MAX,stdin);
    printf("Thay the tu : ");
    fflush(stdin);
    fgets(s2,MAX,stdin);
    printf("Thay bang tu: ");
    fflush(stdin);
    fgets(s3,MAX,stdin);
    s1[strlen(s1)-1]='\0';
    s2[strlen(s2)-1]='\0';
    s3[strlen(s3)-1]='\0';
    int vt=0;
    char *p=NULL;
    char s4[MAX];
    while ((p=strstr(s1+vt,s2))!=NULL)
    {
        strcpy(s4,p+strlen(s2));
        s1[p-s1]='\0';
        strcat(s1,s3);
        strcat(s1,s4);
        vt=p-s1+strlen(s3);
    }
    printf("Chuoi moi: %s\n",s1);
    printf("Hoan thanh...\n");
    return 225;
}