/*      Nhập vào một số nguyên dương n, phân tích n thành các thừa số nguyên tố.
Nhap n: 12345 
3 * 5 * 823
Bài giải: xem trang 93      */

#include <stdio.h>
int uoc(int n)
{
    for (int i=2;i<=n;i++)
        if (n%i==0) return i;
}
int main()
{
    int n;
    printf("Nhap n :");
    scanf("%d",&n);
    printf("%d ",uoc(n));
    n=n/uoc(n);
    while (n!=1)
    {
        printf(" * ");
        printf("%d",uoc(n));
        n=n/uoc(n);
    }
    return 225;
}