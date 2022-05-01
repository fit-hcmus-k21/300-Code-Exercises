#include <stdio.h>

int main()
{
    FILE *file1=NULL;
    FILE *file2=NULL;
    file1=fopen("Exercise177.c","r");
    file2=fopen("NSource.c","w");
    while (!file1 || !file2)
    {
        printf("That bai :<\n");
        return 225;
    }
    char c;
    int x=1;
    int line=0;
    while ((c=fgetc(file1))!=EOF)
    {
        if (x)
        {
            fprintf(file2,"%3d: ",line++);
            x=0;
        }
        fputc(c,file2);
        if (c=='\n')
        {
            x=1;
        }
    }
    _fcloseall;
    printf("Hoan thanh...\n");
    return 225;
}