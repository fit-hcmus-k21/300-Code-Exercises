<<<<<<< HEAD
/*  Viết chương trình liệt kê, đếm và tính tổng các ước số của số nguyên dương
n (n nhập từ bàn phím).
Nhap n: 1966 
Cac uoc so: 1 2 983 1966
Co 4 uoc so, tong la: 2952
Bài giải: xem trang 86      */

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Nhap vao so nguyen duong n :");
    scanf("%d",&n);
    int dem=0;
    int s=0;
    printf("Cac uoc so : ");
    for (int i=1;i<=(int)n/2+1;i++)
    {
        if (n%i==0) 
        {
            dem+=1;
            printf("%d ",i);
            s=s+i;
        }
    }
    printf("%d ",n);
    s=s+n;
    dem+=1;
    printf("\nCo %d uoc so, tong la %d",dem,s);
    return 225;

=======
/*  Viết chương trình liệt kê, đếm và tính tổng các ước số của số nguyên dương
n (n nhập từ bàn phím).
Nhap n: 1966 
Cac uoc so: 1 2 983 1966
Co 4 uoc so, tong la: 2952
Bài giải: xem trang 86      */

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Nhap vao so nguyen duong n :");
    scanf("%d",&n);
    int dem=0;
    int s=0;
    printf("Cac uoc so : ");
    for (int i=1;i<=(int)n/2+1;i++)
    {
        if (n%i==0) 
        {
            dem+=1;
            printf("%d ",i);
            s=s+i;
        }
    }
    printf("%d ",n);
    s=s+n;
    dem+=1;
    printf("\nCo %d uoc so, tong la %d",dem,s);
    return 225;

>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}