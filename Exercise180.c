#include <stdio.h>
#include <string.h>
#define MAX 255
typedef struct 
{
    char w[8];
    int sl;
}word;

int main()
{
    word tu[1000];
    FILE *file=NULL;
    file=fopen("HANOI.txt","r");
    int line=0;
    int words=0;
    char s[MAX];
    char *p;
    char x[]=" ,.?\\/\"\n'!";
    int k=0;
    while ((fgets(s,MAX,file))!=NULL)
    {
        line++;
        p=s;
        while ((p=strtok(p,x))!=NULL)
        {
            strlwr(p);
            int i;
            k++;
            for ( i=0;i<words;i++)
            {
                if (strcmp(p,tu[i].w)==0)
                {
                    tu[i].sl++;
                    break;
                }
            
            }
            if (i==words)
            {
                strcpy(tu[i].w,p);
                tu[i].sl=1;
                words++;
            }
            p=NULL;
        }
    }
    printf("File HANOI.txt co %d dong, %d tu, voi tan so cac tu:\n",line,k);
    for (int j=0;j<words;j++)
    {
        printf("%8s: %2d",tu[j].w,tu[j].sl);
        if (j>0 && ((j+1)%4==0))
        {
            putchar('\n');
        }
    }
    fclose(file);
    printf("\nHoan thanh...\n");
    return 225;

}