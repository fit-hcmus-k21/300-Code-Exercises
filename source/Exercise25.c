<<<<<<< HEAD
/*  Nhập vào hai số nguyên dương a, b. Tính ước số chung lớn nhất và bội số
chung nhỏ nhất của a, b.
USCLN: (Greatest Common Divisor) gcd(a, b) = max{k  k \ a  k \ b}
BSCNN: (Least Common Multiple) lcd(a, b) = min{k  k > 0, a \ k  b \ k}
USCLN(a, b):
 + Cho gcd bằng a hoặc b
 + Trừ dần gcd cho đến khi cả a và b đều chia hết cho gcd
 + USCLN (a, b) = gcd
BSCNN(a, b):
 + Cho lcm bằng a hoặc b
 + Tăng dần lcm cho đến khi lcm chia hết cho cả a và b
 + BSCNN (a, b) = lcm
Nhap cap (a, b): 12 8 
USCLN (a, b): 4
BSCNN (a, b): 24
Bài giải: xem trang 89          */

#include <stdio.h>
int UCLN(int a,int b)
{
    for (int i=a;i>0;i--)
        if (a%i==0 && b%i==0) 
            return i;
}
int BCNN(int a, int b)
{
    int BCNN=a*b/UCLN(a,b);
    return BCNN;
}
int main()
{
    int a,b;
    printf("Nhap cap (a,b) :");
    scanf("%d%d",&a,&b);
    printf("USCLN (%d,%d) : %d",a,b,UCLN(a,b));
    printf("\nBSCNN (%d,%d) : %d ",a,b,BCNN(a,b));
    return 225;
=======
/*  Nhập vào hai số nguyên dương a, b. Tính ước số chung lớn nhất và bội số
chung nhỏ nhất của a, b.
USCLN: (Greatest Common Divisor) gcd(a, b) = max{k  k \ a  k \ b}
BSCNN: (Least Common Multiple) lcd(a, b) = min{k  k > 0, a \ k  b \ k}
USCLN(a, b):
 + Cho gcd bằng a hoặc b
 + Trừ dần gcd cho đến khi cả a và b đều chia hết cho gcd
 + USCLN (a, b) = gcd
BSCNN(a, b):
 + Cho lcm bằng a hoặc b
 + Tăng dần lcm cho đến khi lcm chia hết cho cả a và b
 + BSCNN (a, b) = lcm
Nhap cap (a, b): 12 8 
USCLN (a, b): 4
BSCNN (a, b): 24
Bài giải: xem trang 89          */

#include <stdio.h>
int UCLN(int a,int b)
{
    for (int i=a;i>0;i--)
        if (a%i==0 && b%i==0) 
            return i;
}
int BCNN(int a, int b)
{
    int BCNN=a*b/UCLN(a,b);
    return BCNN;
}
int main()
{
    int a,b;
    printf("Nhap cap (a,b) :");
    scanf("%d%d",&a,&b);
    printf("USCLN (%d,%d) : %d",a,b,UCLN(a,b));
    printf("\nBSCNN (%d,%d) : %d ",a,b,BCNN(a,b));
    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}