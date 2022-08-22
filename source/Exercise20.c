/*      : Viết chương trình nhập số kW điện đã tiêu thụ. Tính tiền điện phải trả, biết
rằng khung giá tiền điện như sau:
0kW 100kW 250kW 350kW
500đ/kW 800đ/kW 1000đ/kW 1500đ/kW
Nhap so kW tieu thu: 4321 
Chi phi: 6226500  */

#include <stdio.h>

int main()
{
    int kw;
    printf("Nhap vao so kw da tieu thu :");
    scanf("%d",&kw);
    int Tien=0;
    if (kw>350) 
        {
            Tien=Tien+(kw-350)*1500+100*1000+150*800+100*500;
            
        }
    else
        if (kw>250) 
        {
            Tien=Tien+(kw-250)*1000;+150*800+100*500;
        }
        else
            if (kw>100)
            {
                Tien=Tien+(kw-100)*800+100*500;
            }
            else
                if (kw>0)
                {
                    Tien=Tien+kw*500;
                }
    printf("Chi phi : %d",Tien);
    return 225;

}