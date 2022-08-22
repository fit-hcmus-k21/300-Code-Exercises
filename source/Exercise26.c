<<<<<<< HEAD
/*      Nhập vào tử số, mẫu số (đều khác 0) của một phân số. Hãy rút gọn phân số
này. Chọn dạng xuất thích hợp trong trường hợp mẫu số bằng 1 và phân số có dấu.
Để rút gọn một phân số, chia cả tử số và mẫu số cho USLCN của tử số và
mẫu số.
Nhap tu so, mau so: -3 -15 
Rut gon: 1/5
Nhap tu so, mau so: 8 -2 
Rut gon: -4
Bài giải: xem trang 92      */


#include <stdio.h>
#include <stdlib.h>

int ucln(int a,int b)
{
    a=abs(a);
    b=abs(b);
    for (int i=a;i>0;i--)
        if (a%i==0 && b%i==0)
            return i;
}
int main()
{
    int a,b;
    printf("Nhap tu so, mau so:");
    scanf("%d%d",&a,&b);
    int uc=ucln(a,b);
    a=a/uc;
    b=b/uc;
    if (a>0 && b<0) 
        {
            a=-a;
            b=-b;
            if (b==1) printf("Rut gon :%d",a);
            else
                printf("Rut gon: %d/%d",a,b);
        }
    else
            if (a<0 && b<0) 
                printf("Rut gon: %d/%d",-a,-b);
            else
                printf("Rut gon : %d/%d",a,b);

    return 225;
=======
/*      Nhập vào tử số, mẫu số (đều khác 0) của một phân số. Hãy rút gọn phân số
này. Chọn dạng xuất thích hợp trong trường hợp mẫu số bằng 1 và phân số có dấu.
Để rút gọn một phân số, chia cả tử số và mẫu số cho USLCN của tử số và
mẫu số.
Nhap tu so, mau so: -3 -15 
Rut gon: 1/5
Nhap tu so, mau so: 8 -2 
Rut gon: -4
Bài giải: xem trang 92      */


#include <stdio.h>
#include <stdlib.h>

int ucln(int a,int b)
{
    a=abs(a);
    b=abs(b);
    for (int i=a;i>0;i--)
        if (a%i==0 && b%i==0)
            return i;
}
int main()
{
    int a,b;
    printf("Nhap tu so, mau so:");
    scanf("%d%d",&a,&b);
    int uc=ucln(a,b);
    a=a/uc;
    b=b/uc;
    if (a>0 && b<0) 
        {
            a=-a;
            b=-b;
            if (b==1) printf("Rut gon :%d",a);
            else
                printf("Rut gon: %d/%d",a,b);
        }
    else
            if (a<0 && b<0) 
                printf("Rut gon: %d/%d",-a,-b);
            else
                printf("Rut gon : %d/%d",a,b);

    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}