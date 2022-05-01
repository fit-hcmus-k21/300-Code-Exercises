#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 999999

int main()
{
    //  Đọc dữ liệu
    char text[MAX];
    FILE *file=fopen("inputW.txt","r");
    fgets(text,MAX,file);
    char s1[10];
    fgets(s1,10,file);
    int n=atoi(s1);
    //  Xử lí
    int i=0;
    int d=0;
    int sotu=0;
    int vt=0;
    while (text[i]!='\0')
    {
        d++;
        if (text[i]==32)
        {
            sotu++;
            vt=i;
        }
        if (d>n && sotu>=1)
        {
                //  Thay ký tự \n sau từ phía trước
                text[vt]='\n';
                d=i-vt;
                sotu=0;
        }
        if (d>n && sotu==0)
        {
            //  Tìm kí tự cách đầu tiên sau từ và thay bằng \n
            while (text[i]!='\0' && text[i]!=32)
            {
                i++;
            }
            if (text[i]==32)
            {
                text[i]='\n';
                d=0;
            }
            if (text[i]=='\0')
            {
                break;
            }
        }
        i++;
    }

    fclose(file);
    //  Ghi vào tệp mới
    FILE *file1=fopen("outputW.txt","w");
    fprintf(file1,"%s",text);
    fclose(file1);
    printf("Hoan thanh...\n");
    return 225;
}