#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    FILE *file=NULL;
    file=fopen("EMP.DAT","w");
    while (!file)
    {
        printf("That bai :<\n");
        return 225;
    }
    printf("Nhap so nhan vien: ");
    int sl;
    scanf("%d",&sl);
    printf("Nhap (ten, ngay, thang, nam sinh, luong) :\n");
    for (int i=1;i<=sl;i++)
    {

    }
    printf("Nhap du lieu xong...\n");
    printf("Xuat danh sach sap xep:\n");



    return 225;
}