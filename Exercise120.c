#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    char s1[MAX];
    char s2[MAX];
    printf("Chuoi goc: ");
    fflush(stdin);
    fgets(s1,MAX,stdin);
    printf("Chuoi chen: ");
    fflush(stdin);
    fgets(s2,MAX,stdin);
    printf("Vi tri chen: ");
    int vt;
    scanf("%d",&vt);
    s1[strlen(s1)-1]='\0';
    s2[strlen(s2)-1]='\0';
    char s3[MAX];
    strcpy(s3,s1+vt);
    s1[vt]='\0';
    strcat(s1,s2);
    strcpy(s1+strlen(s1),s3);
    printf("Chuoi ket qua: %s\n",s1);
    printf("Hoan thanh...\n");
    return 225;
}