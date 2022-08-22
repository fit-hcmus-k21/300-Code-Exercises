/*      Với n cho trước, tính tổng S, biết:
Nếu n chẵn: S = 2 + 4 + 6 + … + n
Nếu n lẻ: S = 1 + 2 + 3 + … + n
Nhap n: 120 
S = 3660
Bài giải: xem trang 113     */

#include <stdio.h>

int main()
{
    int n;
    printf("Nhap n :");
    scanf("%d",&n);
    int s=0;
    if (n%2==0)
    {
        for (int i=2;i<=n;i+=2)
            s=s+i;
        printf("S = %d",s);
    }
    else
    {
        for (int j=1;j<=n;j+=2)
            s=s+j;
        printf("S = %d",s);
    }
    return 225;
}