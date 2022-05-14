<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    char s[MAX];
    printf("Nhap chuoi: ");
    fflush(stdin);
    fgets(s,MAX,stdin);
    s[strlen(s)-1]='\0';
    printf("Nhap vi tri dau: ");
    int vtd;
    scanf("%d",&vtd);
    printf("Nhap so ky tu loai bo: ");
    int skt;
    scanf("%d",&skt);
    strcpy(s+vtd,s+vtd+skt);
    printf("Chuoi ket qua: %s\n",s);
    printf("Hoan thanh...\n");
    return 225;
=======
#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    char s[MAX];
    printf("Nhap chuoi: ");
    fflush(stdin);
    fgets(s,MAX,stdin);
    s[strlen(s)-1]='\0';
    printf("Nhap vi tri dau: ");
    int vtd;
    scanf("%d",&vtd);
    printf("Nhap so ky tu loai bo: ");
    int skt;
    scanf("%d",&skt);
    strcpy(s+vtd,s+vtd+skt);
    printf("Chuoi ket qua: %s\n",s);
    printf("Hoan thanh...\n");
    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}