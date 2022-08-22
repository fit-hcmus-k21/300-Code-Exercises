/*  Với số nguyên n cho trước, tìm ước số lẻ lớn nhất của n và ước số lớn nhất
của n là lũy thừa của 2.
Nhap n: 384 
US le lon nhat: 3
US lon nhat la luy thua cua 2: 128
Bài giải: xem trang 114 */

#include <stdio.h>

int USLLN(int n)
{
    for (int i=n/2+1;i>=1;i--)
        if (i%2==1 && n%i==0) return i;
}
int USLN(int n)
{
    int us;
    for (int j=2;j<n/2+1;j*=2)
        if (n%j==0) us=j;
    return us;
}

int main()
{
    int n;
    printf("Nhap n :");
    scanf("%d",&n);
    printf("US le lon nhat : %d",USLLN(n));
    printf("\nUS lon nhat la luy thua cua 2: %d",USLN(n));
    return 225;
}