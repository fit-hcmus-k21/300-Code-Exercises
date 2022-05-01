#include <stdio.h>
#include <string.h>
#define MAX 255
#define upper(a) (a)=((a)>='a' && (a)<='z')?(a)-32:(a)

int main()
{
    FILE *file1=NULL;
    FILE *file2=NULL;
    
    file1=fopen("lower.txt","r");
    file2=fopen("upper.txt","w");
    while (!file1 || !file2)
    {
        printf("That bai :<\n");
        return 225;
    }
    char c;
    while ((c=fgetc(file1))!=EOF)
    {
        fputc(upper(c),file2);
    }
    printf("Chuyen thanh chu hoa xong ...");
    _fcloseall;
    return 225;
}