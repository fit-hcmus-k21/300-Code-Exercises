/*  Nhập vào một số tiền n (nghìn đồng, n > 5) nguyên dương. Đổi số tiền này
ra ba loại tiền giấy 1000 VNĐ, 2000 VNĐ, 5000 VNĐ.
Tìm phương án đổi tiền sao cho loại tiền 2000VNĐ chiếm hơn phân nửa số tờ bạc phải
đổi ít nhất.
Nhap n (nghin dong, n > 5): 137 
( 0, 21, 19 ): 40
Bài giải: xem trang 105 */

#include <stdio.h>

int main()
{
    int n;
    printf("Nhap n (nghin dong, n>5) : ");
    scanf("%d",&n);
    int x1=0,y1=0,z1=0;
    int x;
    int min=n;
    for (int y=n/2;y>=1;y--)
    {
        for (int z=0;z<n/5;z++)
        {
            x=(n-2*y-5*z);
            if ((y>x+z) && (x+y+z<min) && (x>=0))
            {
                min=x+y+z;
                x1=x;
                y1=y;
                z1=z;
            }
        }
    }
    printf("Phuong an doi theo yc (1,2,5) : (%d,%d,%d)\nHoan thanh...\n",x1,y1,z1);
    return 225;
}