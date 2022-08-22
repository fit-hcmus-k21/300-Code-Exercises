<<<<<<< HEAD
/*      Viết chương trình nhập vào số giờ, xuất ra số tương đương tính theo tuần,
theo ngày và theo giờ.
Nhap so gio: 1000 
5 tuan, 6 ngay, 16 gio      */

#include <stdio.h>

int main()
{
    int h;
    printf("Nhap so gio : ");
    scanf("%d",&h);
    printf("%d tuan, %d ngay, %d gio",h/(24*7),(h%(24*7))/24,(h%(24*7))%24);
    return 225;
=======
/*      Viết chương trình nhập vào số giờ, xuất ra số tương đương tính theo tuần,
theo ngày và theo giờ.
Nhap so gio: 1000 
5 tuan, 6 ngay, 16 gio      */

#include <stdio.h>

int main()
{
    int h;
    printf("Nhap so gio : ");
    scanf("%d",&h);
    printf("%d tuan, %d ngay, %d gio",h/(24*7),(h%(24*7))/24,(h%(24*7))%24);
    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}