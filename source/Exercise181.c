<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#define MAX 255

int main()
{
    char fname[MAX];
    char chuoi[MAX];
    printf("Nhap ten file: ");
    fflush(stdin);
    fgets(fname,MAX,stdin);
    printf("Nhap chuoi tim: ");
    fflush(stdin);
    fgets(chuoi,MAX,stdin);
    chuoi[strlen(chuoi)-1]='\0';
    fname[strlen(fname)-1]='\0';
    FILE *file=NULL;
    file=fopen(fname,"r");
    while (!file)
    {
        printf("That bai :<\n");
        return 225;
    }
    
    char *p=NULL;
    char s[MAX];
    int line=0;
    while ((fgets(s,MAX,file))!=NULL)
    {
        line++;
        p=s;
        if (strstr(s,chuoi)!=NULL)
        {
            printf("Dong %2d : ",line);
            while ((p=strstr(p,chuoi))!=NULL)
            {
                printf("%2d ",p-s);
                p++;
            }
            printf("\n");
        }
    }
   
    fclose(file);
    printf("Hoan thanh...\n");
    return 225;
=======
#include <stdio.h>
#include <string.h>
#define MAX 255

int main()
{
    char fname[MAX];
    char chuoi[MAX];
    printf("Nhap ten file: ");
    fflush(stdin);
    fgets(fname,MAX,stdin);
    printf("Nhap chuoi tim: ");
    fflush(stdin);
    fgets(chuoi,MAX,stdin);
    chuoi[strlen(chuoi)-1]='\0';
    fname[strlen(fname)-1]='\0';
    FILE *file=NULL;
    file=fopen(fname,"r");
    while (!file)
    {
        printf("That bai :<\n");
        return 225;
    }
    
    char *p=NULL;
    char s[MAX];
    int line=0;
    while ((fgets(s,MAX,file))!=NULL)
    {
        line++;
        p=s;
        if (strstr(s,chuoi)!=NULL)
        {
            printf("Dong %2d : ",line);
            while ((p=strstr(p,chuoi))!=NULL)
            {
                printf("%2d ",p-s);
                p++;
            }
            printf("\n");
        }
    }
   
    fclose(file);
    printf("Hoan thanh...\n");
    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}