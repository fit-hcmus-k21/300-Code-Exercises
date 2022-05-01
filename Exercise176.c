#include <stdio.h>

int main()
{
    FILE *file1=NULL;
    FILE *file2=NULL;
    file1=fopen("origin.txt","w");
    file2=fopen("encode.txt","r");
    if (!file1 || !file2)
    {
        printf("That bai :<\n");
        return 225;
    }
    int c;
    while ((c=fgetc(file2))!=EOF)
    {
        fputc((c+128)%256,file1);
    }
    _fcloseall;
    printf("Xu ly xong...\n");
    return 225;
}