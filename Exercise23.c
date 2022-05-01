/*    Viết chương trình tìm các số hoàn hảo (perfect number) nhỏ hơn một số
nguyên dương n cho trước. Biết số hoàn hảo là số nguyên dương, bằng tổng các ước
số thực sự của nó (ví dụ: 28 = 14 + 7 + 4 + 2 + 1).
Nhap n: 10000 
Cac so hoan hao nho hon 10000: 6 28 496 8128
Bài giải: xem trang 87          */

#include <stdio.h>
#include <stdbool.h>


bool shh(int n)
{
    int s=0;
    for (int i=1;i<=n/2+1;i++)
        if (n%i==0) s=s+i;
    if (s==n) return true;
    else        return false;
}

int main()
{
    int n;
    printf("Nhap vao so n: ");
    scanf("%d",&n);
    printf("Cac so hoan hao nho hon %d la : ",n);
    for (int i=2;i<=n;i++)
        if (shh(i))     printf("%d ",i);
    return 225;
}