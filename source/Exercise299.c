#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 100

typedef struct 
{
    char c;
    int heso;
} kytu;

int luythua(int x,int y)
{
    int s=1;
    for (int i=1;i<=y;i++)
    {
        s=s*x;
    }
    return s;
}

int main()
{
    FILE *file1=NULL;
    FILE *file2=NULL;

    file1=fopen("input.txt","r");
    file2=fopen("output.txt","w");

    char s[MAX];
    int n;
    fgets(s,MAX,file1);
    s[strlen(s)-1]='\0';
    
    kytu hi[MAX];
    int stt=1;

    while (fgets(s,MAX,file1)!=NULL)
    {

       if (s[strlen(s)-1]=='\n')
       {
            s[strlen(s)-1]='\0';
       }
        
        int d=0;
        for (int i=0;i<strlen(s);i++)
        {
            int j=0;
            for ( j=0;j<d;j++)
            {
                if (s[i]==hi[j].c)
                {
                    break;
                }
            }
            if (j==d)
            {
                hi[d].c=s[i];
                d++;
            }
        }
        
        for (int i=0;i<strlen(s);i++)
        {
            hi[i].c=s[i];
        }
        hi[0].heso=1;
        int k=0;
        for (int i=1;i<strlen(s);i++)
        {
        
            int j=0;
            for ( j=0;j<i;j++)
            {
                if (s[i]==hi[j].c)
                {
                    hi[i].heso=hi[j].heso;
                
                    break;
                }
            }
            if (j==i)
            {
                if (k==1)
                {
                    k++;
                }
                hi[i].heso=k++;
            }
        }
        long long int  GT=0;
        for (int i=0;i<strlen(s);i++)
        {
            GT=GT+ hi[i].heso*luythua(d,strlen(s)-(i+1));
        }
        fprintf(file2,"Case #%2d: %d\n",stt++,GT);
    }
    printf("\nHoan thanh...\n");
    _fcloseall();
    return 225;
}