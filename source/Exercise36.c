/*   Viết chương trình in ra n số nguyên tố đầu tiên (n nhập từ bàn phím).
Nhap n: 15 
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
Bài giải: xem trang 103 */

#include <stdio.h>
#include <stdbool.h>

bool prime(int n)
{
    if (n==2) return true;
    int count=0;
    for (int i=2;i<n;i++)
        if (n%i==0) count+=1;
    if (count==0) 
        return true;
    else 
        return false;
}
int main()
{
    int n;
    printf("Nhap n :");
    scanf("%d",&n);
    int j=1;
    for (int i=1;i<=n;i++)
    { 
        j++;
        while (!prime(j))
        {
            j++;
        }
        printf("%d ",j);
    }
    return 225;

}