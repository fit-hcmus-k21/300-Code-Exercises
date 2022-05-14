<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    printf("Nhap num: ");
    scanf("%d",&num);
    FILE *file1=NULL;

    file1=fopen("filename.txt","w");

    srand(time(NULL));
    for (int i=0;i<num;i++)
    {
        fputc(rand()%26+'A',file1);
        fputc(32,file1);
    }
    fclose(file1);
    file1=fopen("filename.txt","r");
    fseek(file1,0,SEEK_SET);
    char c;
    while ((c=fgetc(file1))!=EOF)
    {
        printf("%c",c);
    }
    printf("\n");
    fseek(file1,0,SEEK_END);
    int pos=ftell(file1);
    printf("%d\n",pos);
    int vt=-1;
    do
    {
        fseek(file1,vt,SEEK_END);
        c=fgetc(file1);
        printf("%c",c);
        vt--;
    }while (vt>=(-pos));
    fclose(file1);
    return 225;

=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    printf("Nhap num: ");
    scanf("%d",&num);
    FILE *file1=NULL;

    file1=fopen("filename.txt","w");

    srand(time(NULL));
    for (int i=0;i<num;i++)
    {
        fputc(rand()%26+'A',file1);
        fputc(32,file1);
    }
    fclose(file1);
    file1=fopen("filename.txt","r");
    fseek(file1,0,SEEK_SET);
    char c;
    while ((c=fgetc(file1))!=EOF)
    {
        printf("%c",c);
    }
    printf("\n");
    fseek(file1,0,SEEK_END);
    int pos=ftell(file1);
    printf("%d\n",pos);
    int vt=-1;
    do
    {
        fseek(file1,vt,SEEK_END);
        c=fgetc(file1);
        printf("%c",c);
        vt--;
    }while (vt>=(-pos));
    fclose(file1);
    return 225;

>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}