/*  Nhập vào một số tự nhiên n (n khai báo kiểu unsigned long)
a. Số tự nhiên n có bao nhiêu chữ số.

b. Hãy tìm chữ số cuối cùng của n.
c. Hãy tìm chữ số đầu tiên của n.
d. Tính tổng các chữ số của n.
e. Hãy tìm số đảo ngược của n.
Nhap n: 43210 
43210 co 5 chu so
Chu so cuoi cung la: 0
Chu so dau tien la: 4
Tong cac chu so la: 10
So dao nguoc la: 1234
Bài giải: xem trang 87      */

#include <stdio.h>

int main()
{
    unsigned long n;
    printf("Nhap vao so nguyen duong :");
    scanf("%lu",&n);
    int dem=0;
    unsigned long N=n;
    while (n!=0)
    {
        dem=dem+1;
        n=n/10;
    }
    printf("So tu nhien %lu co %d chu so \n",N,dem);
    printf("Chu so cuoi cung la %d\n",N%10);
    unsigned long bansao=N;
    while (bansao>10)
    {
        bansao=bansao/10;
    }
    printf("Chu so dau tien la : %d\n",bansao%10);
    int s=0;
    unsigned long bansao2=N;
    while (bansao2!=0)
    {
        s=s+bansao2%10;
        bansao2/=10;
    } 
    printf("Tong cac chu so cua %lu la : %d \n",N,s);
    unsigned long sodao=0;
    while (N!=0)
    {
        sodao=sodao*10+N%10;
        N=N/10;
    }
    printf("So dao cua %lu la : %lu",N,sodao);
    return 225;

}
