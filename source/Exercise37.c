/*  Viết chương trình nhập số nguyên dương n. Tìm số nguyên dương m lớn nhất
sao cho: 1 + 2 + … + m < n.
Nhap n: 22 
1 + 2 + 3 + 4 + 5 + 6 = 21 < 22
m = 6
Bài giải: xem trang 104 */

#include <stdio.h>

int main()
{
    int n;
    printf("Nhap n :");
    scanf("%d",&n);
    int j=1;
    int s=0;
    while (s+j<n)
    {
        printf("%d ",j);
        s=s+j;
        j++;
        if (s+j<n) printf("+ ");
    }
    printf(" = %d < %d",s,n);
    printf("\nm = %d",j-1);
    return 225;
}