#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*Viết chương trình nhập vào số x chỉ số đo của một góc, tính bằng phút, cho biết nó thuộc góc vuông thứ bao nhiêu của vòng tròn lượng giác 
tính cos(x) dùng hàm do math.h cung cấp */


int main()
{
    float x;
    printf("Nhap so do x cua goc (phut) :");
    scanf("%f",&x);
    printf("%.1f thuoc goc thu %d \n",x,(int)ceil(x/60/90)%4);
    printf("cos(x) = %f",cos(x*3.14/180));
    return 225;
}