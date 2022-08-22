<<<<<<< HEAD
#include <stdio.h>

int main()
{
    FILE *file;
    file=fopen("PERSON.DAT","r");
    unsigned int code;
    char name[32];
    char address[32];
    char date[10];
    printf("Ket qua:\n");
    while (!file)
    {
        printf("That bai !");
    }
    int d=0;
    while ((fscanf(file,"%u%32[^,],%32[^:]:%10[^\n]",&code,name,address,date))!=EOF )
    {
        printf("%-32s[code: %u]\n",name,code);
        printf("Address : [%s]\n",address);
        printf("Birthday : [%s]\n",date);
    }
    fclose(file);
    return 22;
=======
#include <stdio.h>

int main()
{
    FILE *file;
    file=fopen("PERSON.DAT","r");
    unsigned int code;
    char name[32];
    char address[32];
    char date[10];
    printf("Ket qua:\n");
    while (!file)
    {
        printf("That bai !");
    }
    int d=0;
    while ((fscanf(file,"%u%32[^,],%32[^:]:%10[^\n]",&code,name,address,date))!=EOF )
    {
        printf("%-32s[code: %u]\n",name,code);
        printf("Address : [%s]\n",address);
        printf("Birthday : [%s]\n",date);
    }
    fclose(file);
    return 22;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}