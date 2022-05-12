

/*          Viết chương trình nhập vào ngày, tháng, năm (giả sử nhập đúng, không cần
kiểm tra hợp lệ). Tìm xem ngày đó là ngày thứ bao nhiêu trong năm.
Nếu không dùng vòng lặp, có thể dùng công thức sau:
sum = (int) (30.42 * (month - 1)) + day
Nếu month = 2, hoặc năm nhuận và month > 2 thì sum = sum + 1
Nếu 2 < month < 8 thì sum = sum - 1
Nhap ngay, thang, nam: 4 4 2000 
Ngay thu: 95            */

#include <stdio.h>

int ktra(int m,int y)
{
    int top;
    switch(m)
    {
        case 4: 
        case 6:
        case 9:
        case 11:
                top=30;
                break;
        case 2: 
                top=28 + (y%4==0&&y%100!=0 || y%400==0);
                break;
        default :
                top=31;
                break;
    }
    return top;
}

int main()
{
    int d,m,y;
    printf("Nhap ngay, thang, nam:");
    scanf("%d%d%d",&d,&m,&y);
    int day=d;
    for (int i=m-1;i>=1;i--)
        day=day+ktra(i,y);
    printf("Ngay thu : %d",day);
    return 225;
}