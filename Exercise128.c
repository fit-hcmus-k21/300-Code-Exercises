#include <stdio.h>
#include <string.h>
#define MAX 100

int gtln(char *s1,char *s2)
{
    int d=0,max=0;
    char *hi=strdup(s1);
    char *p=strtok(hi,s2);
    while (p!=NULL)
    {
        d=strlen(p);
        if (d>max)
        {
            max=d;
        }
        p=strtok(NULL,s2);
    }
    return max;
}
char *tach(char *s,int max)
{
    char *t=NULL;
    char *p=strdup(s);
    while ((p=strtok(p," "))!=NULL)
    {
        if (strlen(p)==max)
        {
            t=p;
            return t;
        }
        p=NULL;
        
    }
    return t;
}

void in(char s[],int max)
{
    char *p;
    char *x=s;

    while ((p=tach(x,max))!=NULL)
    {
        
        printf("%s[%d] ",p,max);
        x=strstr(x,p)+strlen(p);
    } 
        
}
    

int main()
{
    char s[MAX];
    printf("nhap chuoi : ");
    fgets(s,MAX,stdin);
    s[strlen(s)-1]='\0';

    char x[]=" ";
    int max=gtln(s,x);
    
    in(s,max);
    return 225;

}