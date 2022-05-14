<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct 
{
    int code;
    char name[20];
    double dtb;
}STUDENT;


void ghi(FILE *file,STUDENT hs[],int *n)
{
    file=fopen("STUDENT.DAT","w");
    int i=0;
    char c;
    do 
    {
        printf("Nhap mot mau tin (y/n)? ");
        fflush(stdin);
        scanf("%c",&c);
        switch(c)
        {
            case 'y':
                    printf("Ma so   > ");
                    scanf("%d",&hs[i].code);
                    fprintf(file,"1   ");
                    fprintf(file,"%6d",hs[i].code);

                    printf("Ten     > ");
                    fflush(stdin);
                    fgets(hs[i].name,20,stdin);
                    hs[i].name[strlen(hs[i].name)-1]='\0';
                    fprintf(file,"%s    ",hs[i].name);


                    printf("Diem TB > ");
                    scanf("%lf",&hs[i].dtb);
                    fprintf(file,"%lf\n",hs[i].dtb);

                    i++;
                    *n=i;

                    break;
            case 'n':
                    printf("Da ghi file...\n");
                    break;
        }
    }while (c!='n');
    fclose(file);
}

void doc(FILE *file)
{
    file=fopen("STUDENT.DAT","r");
    char c;
    int d=0;
    while ((c=fgetc(file))!=EOF)
    {
        printf("%c",c);
        if (c=='\n')
        {
            ++d;
        }
    }
    printf("Tong cong: %d record(s)\n",d);
    fclose(file);
}

void sua(FILE *file,STUDENT hs[],int *n)
{
    int ms;
    double dm;
    printf("Ma so   > ");
    scanf("%d",&ms);
    for (int i=0;i<*n;i++)
    {
        if (hs[i].code==ms)
        {
            printf("    %20s\n",hs[i].name);
            printf("Diem moi  > ");
            scanf("%lf",&dm);
            hs[i].dtb=dm;
            printf("Da cap nhat...\n");
            break;
        }
    }
}

void menu(FILE *file,STUDENT hs[],int *n)
{
    int tv;
    do
    {
        printf("MENU    [File 'STUDENT.DAT']\n");
        printf("--------\n");
        printf("[1]. Them\n");
        printf("[2]. Doc\n");
        printf("[3]. Sua\n");
        printf("[4]. Thoat\n");
        printf("Chon tac vu : ");
        scanf("%d",&tv);
        switch(tv)
        {
                case 1:
                        printf("GHI FILE\n");
                        ghi(file,hs,n);
                        break;
                case 2:
                        printf("DOC FILE\n");
                        doc(file);
                        break;
                case 3:
                        printf("SUA FILE\n");
                        sua(file,hs,n);
                        break;
                case 4:
                        printf("Bye...\n");
                        tv=0;
                        break;

        }

     } while (tv!=0);
    
}

int main()
{
    FILE *file=NULL;
    STUDENT hs[MAX];
    int n=0;
    menu(file,hs,&n);
    return 225;
=======
#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct 
{
    int code;
    char name[20];
    double dtb;
}STUDENT;


void ghi(FILE *file,STUDENT hs[],int *n)
{
    file=fopen("STUDENT.DAT","w");
    int i=0;
    char c;
    do 
    {
        printf("Nhap mot mau tin (y/n)? ");
        fflush(stdin);
        scanf("%c",&c);
        switch(c)
        {
            case 'y':
                    printf("Ma so   > ");
                    scanf("%d",&hs[i].code);
                    fprintf(file,"1   ");
                    fprintf(file,"%6d",hs[i].code);

                    printf("Ten     > ");
                    fflush(stdin);
                    fgets(hs[i].name,20,stdin);
                    hs[i].name[strlen(hs[i].name)-1]='\0';
                    fprintf(file,"%s    ",hs[i].name);


                    printf("Diem TB > ");
                    scanf("%lf",&hs[i].dtb);
                    fprintf(file,"%lf\n",hs[i].dtb);

                    i++;
                    *n=i;

                    break;
            case 'n':
                    printf("Da ghi file...\n");
                    break;
        }
    }while (c!='n');
    fclose(file);
}

void doc(FILE *file)
{
    file=fopen("STUDENT.DAT","r");
    char c;
    int d=0;
    while ((c=fgetc(file))!=EOF)
    {
        printf("%c",c);
        if (c=='\n')
        {
            ++d;
        }
    }
    printf("Tong cong: %d record(s)\n",d);
    fclose(file);
}

void sua(FILE *file,STUDENT hs[],int *n)
{
    int ms;
    double dm;
    printf("Ma so   > ");
    scanf("%d",&ms);
    for (int i=0;i<*n;i++)
    {
        if (hs[i].code==ms)
        {
            printf("    %20s\n",hs[i].name);
            printf("Diem moi  > ");
            scanf("%lf",&dm);
            hs[i].dtb=dm;
            printf("Da cap nhat...\n");
            break;
        }
    }
}

void menu(FILE *file,STUDENT hs[],int *n)
{
    int tv;
    do
    {
        printf("MENU    [File 'STUDENT.DAT']\n");
        printf("--------\n");
        printf("[1]. Them\n");
        printf("[2]. Doc\n");
        printf("[3]. Sua\n");
        printf("[4]. Thoat\n");
        printf("Chon tac vu : ");
        scanf("%d",&tv);
        switch(tv)
        {
                case 1:
                        printf("GHI FILE\n");
                        ghi(file,hs,n);
                        break;
                case 2:
                        printf("DOC FILE\n");
                        doc(file);
                        break;
                case 3:
                        printf("SUA FILE\n");
                        sua(file,hs,n);
                        break;
                case 4:
                        printf("Bye...\n");
                        tv=0;
                        break;

        }

     } while (tv!=0);
    
}

int main()
{
    FILE *file=NULL;
    STUDENT hs[MAX];
    int n=0;
    menu(file,hs,&n);
    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}