<<<<<<< HEAD
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
    printf("cos(%.1f) = %f",x,cos(x/60*M_PI/180));
    return 225;

=======
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
    printf("cos(%.1f) = %f",x,cos(x/60*M_PI/180));
    return 225;

>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}