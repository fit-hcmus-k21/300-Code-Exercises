/*  Tìm các bộ (trâu đứng, trâu nằm, trâu già) thỏa mãn bài toán cổ:
Trăm trâu ăn trăm bó cỏ
Trâu đứng ăn năm
Trâu nằm ăn ba
Lụ khụ trâu già
Ba con một bó
Thử tìm cách giảm số vòng lặp khi tính toán xuống.
(4, 18, 78)
(8, 11, 81)
(12, 4, 84)
Bài giải: xem trang 108 */

#include <stdio.h>

int main()
{
    int x,y,z;
    for (x=1;x<20;x++)
        for (y=1;y<100/3;y++)
        {
            z=100-x-y;
            if (5*x+3*y+z/3.0==100) 
                printf("(%d, %d, %d )\n",x,y,z);
        }
        return 225;
}