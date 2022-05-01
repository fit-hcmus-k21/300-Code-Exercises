#include <stdio.h>
#include <string.h>

void reverse(FILE *file1,FILE *file2)
{
    char s[255];
    if (fgets(s,255,file1)==NULL)
    {
        return;
    }
    reverse(file1,file2);
    fprintf(file2,"%s",s);
}


int main()
{
    FILE *file1=NULL;
    FILE *file2=NULL;
    file1=fopen("thanhnganinp.txt","r");
    file2=fopen("thanhnganout.txt","w");
    while (!file1 || !file2)
    {
        printf("That bai :<\n");
        return 225;
    }
    reverse(file1,file2);
    printf("Hoan thanh...\n");
    _fcloseall;
    return 225;
}