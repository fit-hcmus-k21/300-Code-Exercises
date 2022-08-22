#include <stdio.h>
#include <string.h>
#define MAX 100

void loai_space(char s[])
{
    for (int i=1;s[i] ;i++)
    {
        if (s[i-1]==32 && s[i]==32)
        {
            memmove(s+i-1,s+i+1,strlen(s)-i);
        }
    }
}

void chuan_hoa(char s[])
{
    char s1[MAX];
    int i,j;
    for ( i=0;s[i];i++)
    {
        
        if (s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {
            j=0;
            do
            {
                s1[j++]=s[i];
                i++;
            }while (s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z');
            s1[j]='\0';
            strlwr(s1);
            s1[0]=s1[0]-32;
            printf("%s, ",s1);
            s1[0]='\0';
        
        }
    }
}

int main()
{
    char s[MAX];
    printf("Nhap chuoi : ");
    fgets(s,MAX,stdin);
    s[strlen(s)-1]='\0';
    loai_space(s);
    printf("Xau da chuan hoa : %s\n",s);
    printf("Cac tu da chuan hoa : ");
    chuan_hoa(s);
    printf("\n");
    return 225;

}