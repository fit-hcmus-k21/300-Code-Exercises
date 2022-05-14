<<<<<<< HEAD
/*      Viết chương trình nhập vào ngày, tháng, năm. Kiểm tra ngày và tháng nhập
có hợp lệ hay không. Tính thứ trong tuần của ngày đó.
Năm nhuận (leap year) tính theo lịch Gregorian (từ 1582): năm phải chia
hết cho 4 và không chia kết cho 100, hoặc năm phải chia hết cho 400.
Thứ trong tuần tính theo công thức Zeller3
:
dayofweek = (d + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7
với: a = (14 - month) / 12
y = year - a
m = month + 12 * a - 2
dayofweek: 0 (Chúa nhật), 1 (thứ hai), 2 (thứ ba), …
Nhap ngay, thang va nam: 19 5 2014 
Hop le
Thu 2           */

#include <stdio.h>

int main()
{
    int d,m,y;
    printf("Nhap ngay, thang, nam :");
    scanf("%d%d%d",&d,&m,&y);
    int top;
    if (y<1582) 
    {
        printf("Lich Gregorian bat dau tu 1582");
        return 22;
    }
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
    if (d<1 || d>top) 
    {
        printf("Khong hop le ");
        return 22;
    }
    int dayofweek;
    int a=(14-m)/12;
        y=y-a;
        m=m+12*a-2;
    dayofweek=(d+y+y/4-y/100+y/400+31*m/12)%7;
    if (!dayofweek) 
        printf("Chu nhat ");
    else
        printf("Thu %d",dayofweek+1);
    return 225;
=======
/*      Viết chương trình nhập vào ngày, tháng, năm. Kiểm tra ngày và tháng nhập
có hợp lệ hay không. Tính thứ trong tuần của ngày đó.
Năm nhuận (leap year) tính theo lịch Gregorian (từ 1582): năm phải chia
hết cho 4 và không chia kết cho 100, hoặc năm phải chia hết cho 400.
Thứ trong tuần tính theo công thức Zeller3
:
dayofweek = (d + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7
với: a = (14 - month) / 12
y = year - a
m = month + 12 * a - 2
dayofweek: 0 (Chúa nhật), 1 (thứ hai), 2 (thứ ba), …
Nhap ngay, thang va nam: 19 5 2014 
Hop le
Thu 2           */

#include <stdio.h>

int main()
{
    int d,m,y;
    printf("Nhap ngay, thang, nam :");
    scanf("%d%d%d",&d,&m,&y);
    int top;
    if (y<1582) 
    {
        printf("Lich Gregorian bat dau tu 1582");
        return 22;
    }
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
    if (d<1 || d>top) 
    {
        printf("Khong hop le ");
        return 22;
    }
    int dayofweek;
    int a=(14-m)/12;
        y=y-a;
        m=m+12*a-2;
    dayofweek=(d+y+y/4-y/100+y/400+31*m/12)%7;
    if (!dayofweek) 
        printf("Chu nhat ");
    else
        printf("Thu %d",dayofweek+1);
    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}