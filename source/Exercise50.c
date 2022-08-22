/*  Phân số liên tục (continued fraction) ký hiệu [b1, b2, …, bk], có dạng:
[xem them trang 15]     */

#include <stdio.h>

int main()
{
    int s,t;
    printf("Nhap s,t (0<s<t) : ");
    scanf("%d%d",&s,&t);
    printf("[");
    int temp;
    do
    {
        printf(" %d",t/s);
        temp=t%s;
        t=s;
        s=temp;
    } while (temp?printf(","):printf("]\n"));
    return 225;
}