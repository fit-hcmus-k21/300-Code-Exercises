<<<<<<< HEAD
/* Nhập vào thời điểm 1 và thời điểm 2. Tìm thời gian trải qua giữa hai thời
điểm này tính bằng giờ, phút, giây.
Nhap gio, phut, giay [1]: 3 28 47 
Nhap gio, phut, giay [2]: 5 40 12 
Hieu thoi gian: 2 gio 11 phut, 25 giay      */

#include <stdio.h>

int main()
{
    int h1,mins1,sec1;
    int h2,mins2,sec2;
    printf(" Nhap gio, phut, giay [1] :");
    scanf("%d %d %d",&h1,&mins1,&sec1);
    printf(" Nhap gio, phut, giay [2] :");
    scanf("%d %d %d",&h2,&mins2,&sec2);
    int time=h2*3600+mins2*60+sec2;
    time=time-h1*3600-mins1*60-sec1;
    printf("Hieu thoi gian : %d gio, %d phut, %d giay ",time/3600,(time%3600)/60,(time%3600)%60);
    return 225;
=======
/* Nhập vào thời điểm 1 và thời điểm 2. Tìm thời gian trải qua giữa hai thời
điểm này tính bằng giờ, phút, giây.
Nhap gio, phut, giay [1]: 3 28 47 
Nhap gio, phut, giay [2]: 5 40 12 
Hieu thoi gian: 2 gio 11 phut, 25 giay      */

#include <stdio.h>

int main()
{
    int h1,mins1,sec1;
    int h2,mins2,sec2;
    printf(" Nhap gio, phut, giay [1] :");
    scanf("%d %d %d",&h1,&mins1,&sec1);
    printf(" Nhap gio, phut, giay [2] :");
    scanf("%d %d %d",&h2,&mins2,&sec2);
    int time=h2*3600+mins2*60+sec2;
    time=time-h1*3600-mins1*60-sec1;
    printf("Hieu thoi gian : %d gio, %d phut, %d giay ",time/3600,(time%3600)/60,(time%3600)%60);
    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}