

/*          Viết chương trình nhập vào một năm (> 1582), in lịch của năm đó. Tính thứ
cho ngày đầu năm bằng công thức Zeller (bài 14, trang 6).
Nhap nam: 2008 
Thang 1
 S M T W T F S
 1 2 3 4 5
6 7 8 9 10 11 12
13 14 15 16 17 18 19
20 21 22 23 24 25 26
27 28 29 30 31
...
Thang 12
 S M T W T F S
 1 2 3 4 5 6
 7 8 9 10 11 12 13
14 15 16 17 18 19 20
21 22 23 24 25 26 27
28 29 30 31             */

#include <stdio.h>
int ktra(int m,int y)
{
    int top;
    switch(m)
    {
        case 2:
                top=28+((y%4==0 && y%100!=0) || y%400==0 );
                break;
        case 4:
        case 6:
        case 9:
        case 11:
                top=30;
                break;
        default : 
                top=31;
                break;
    }  
    return top;
        
}

int main()
{
    int y;
    printf("Nhap nam : ");
    scanf("%d",&y);
    int a;
    int m;
    int d;
    int day;
    int top;
    a=(14-1)/12;
    y=y-a;
    m=1+12*a-2;
    day=(d+y+y/4-y/100+y/400+31*m/12)%7;
    for (int i=1;i<=12;i++)
    {
        printf("Thang %d :\n",i);
        printf("   S   M   T   W   T   F   S   \n");
        top=ktra(i,y);
        for (int j=1;j<=top;j++)
        {
            for (int k=1;k<=day;k++)
            {
                printf("  ");
            }
            printf("%3d",j);
            if ((day+j)%7==0)
            {
                printf("\n");
            }
    
        }
        day=(day+top)%7;
        printf("\n");
    }
    return 225;
}