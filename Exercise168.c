#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define MAX 255

typedef struct 
{
    char tua[MAX];
    char isbn[MAX];
    char tacgia[MAX];
    char nxb[MAX];
    struct tm *update;
} sach;

void xoa(char s[])
{
    s[strlen(s)-1]='\0';
}

sach input()
{
    sach book;
    time_t now;
    printf("Tua     >");
    fflush(stdin);
    fgets(book.tua,MAX,stdin);
    xoa(book.tua);
    printf("ISBN    >");
    fflush(stdin);
    fgets(book.isbn,MAX,stdin);
    xoa(book.isbn);
    printf("Tac gia >");
    fflush(stdin);
    fgets(book.tacgia,MAX,stdin);
    xoa(book.tacgia);
    printf("NXB     >");
    fflush;
    fgets(book.nxb,MAX,stdin);
    xoa(book.nxb);
    time(&now);
    (book).update=localtime(&now);
    return book;
}

void output(sach book)
{
    printf("---------------------------\n");
    printf("Tua      > %s\n",book.tua);
    printf("Tac gia  > %s\n",book.tacgia);
    printf("NXB      > %s\n",book.nxb);
    printf("[update: %d - %d - %d ]\n",(book.update)->tm_mday,(book.update)->tm_mon+1,(book.update)->tm_year+1900);
}

void Tim_sach(sach a[],int n, char s[])
{
    for (int i=0;i<n;i++)
    {
        if (strncmp(a[i].isbn,s,MAX)==0)
        {
            output(a[i]);
        }
    }
}

int main()
{
    sach a[MAX];
    int n;
    printf("Nhap so luong sach n:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        a[i]=input();
    }
    printf("----------------------------------\n");
    for (int i=0;i<n;i++)
    {
        output(a[i]);
    }
    printf("Nhap ISBN muon tim:");
    char tim[MAX];
    fgets(tim,MAX,stdin);
    tim[strlen(tim)-1]='\0';
    printf("\nKet qua tim sach:\n");
    Tim_sach(a,n,tim);
    return 225;
}