

/*    Viết chương trình nhập vào ngày, tháng, năm (giả sử nhập đúng, không cần
kiểm tra hợp lệ). Tìm ngày, tháng, năm của ngày tiếp theo.
Tương tự, tìm ngày, tháng, năm của ngày ngay trước đó.
Nhap ngay, thang, nam: 28 2 2000 
Ngay mai: 29/02/2000
Nhap ngay, thang, nam: 1 1 2001 
Hom qua: 31/12/2000     */


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
    printf("Nhap ngay, thang, nam :");
    scanf("%d%d%d",&d,&m,&y);
    int top;
    int ds,ms,ys;
    int dt,mt,yt;
    top=ktra(m,y);
    if (d==top) 
    {
        ds=1;
        ms=m%12+1;
    }
    else
    {
        ds=d+1;
        ms=m;
    }
    ys=y+(ds==1 && ms==1);
    printf("Ngay mai: %d/%d/%d",ds,ms,ys);
    if (d==1)
    {
        if (m==1)
        {
            mt=12;
            dt=ktra(mt,y-1);
        }
        else
            mt=m-1;
            dt=ktra(mt,y);
    }
    else
    {
        dt=d-1;
        mt=m;
    }
    yt=y-(dt==1 && mt==1);
    printf("\nHom qua: %d/%d/%d",dt,mt,yt);
    return 225;
}