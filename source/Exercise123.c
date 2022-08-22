#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

char *add(char s1[],char s2[],char s3[])
{
    int len1=strlen(s1);
    int len2=strlen(s2);
    int len3=len1>len2?len1+1:len2+1;
    
    for(int i=0;i<len3;i++)
    {
        s3[i]='0';
    } 
    int carry=0;
    int c;
    while (len1 && len2)
    {
        c=s1[len1-1]-'0'+s2[len2-1]-'0'+carry;
        carry=c/2;
        s3[len3-1]=c%2+'0';
        len1--;
        len2--;
        len3--;
    }
    if (len1)
    {
        c=s1[len1-1]-'0'+carry;
        carry=c/2;
        s3[len3-1]=c%2+'0';
        len1--;
        len3--;
    }
    if (len2)
    {
        c=s2[len2-1]-'0'+carry;
        carry=c/2;
        s3[len3-1]=c%2+'0';
        len2--;
        len3--;
    }
    if (carry)
    {
        s3[len3-1]='1';
    }
    else
    {
        return s3+1;
    }
    return s3;
}

int main()
{
    char s1[MAX];
    char s2[MAX];
    char s3[MAX];
    printf("Nhap so thu I :");
    fflush(stdin);
    fgets(s1,MAX,stdin);
    printf("Nhap so thu II : ");
    fflush(stdin);
    fgets(s2,MAX,stdin);
    s1[strlen(s1)-1]='\0';
    s2[strlen(s2)-1]='\0';
    printf("Ket qua:\n");
    printf("%30s\n",s1);
    printf("%30s\n",s2);
    printf("%30s","--------------------\n");
    printf("%30s\n",add(s1,s2,s3));
    printf("Hoan thanh...\n");
    return 225;
}