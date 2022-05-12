
/* Bài 10: Số bảo hiểm xã hội của Canada (SIN - Canadian Social Insurance Number)
là một số có 9 chữ số, được kiểm tra tính hợp lệ như sau:
- Số phải nhất (vị trí là 1, tính từ phải sang), là số kiểm tra (check digit).
- Trọng số được tính từ phải qua trái (không tính check digit), bằng s1 + s2:
+ s1 là tổng các số có vị trí lẻ.
+ Các số có vị trí chẵn nhân đôi. Nếu kết quả nhân đôi có hai chữ số thì kết quả là
tổng của hai chữ số này. s2 là tổng các kết quả.
SIN hợp lệ có tổng trọng số với số kiểm tra chia hết cho 10.
Ví dụ: SIN 193456787
- Số kiểm tra là 7 (màu xanh tô đậm).
- Trọng số là tổng của s1 và s2, với:
+ s1 = 1 + 3 + 5 + 7 = 16
+ Các số có vị trí chẵn nhân đôi: (9 * 2) (4 * 2) (6 * 2) (8 * 2)  18 8 12 16
s2 = (1 + 8) + 8 + (1 + 2) + (1 + 6) = 27
Trọng số bằng s1 + s2 = 16 + 27 = 43.
Vì tổng trọng số với số kiểm tra 43 + 7 = 50 chia hết cho 10 nên số SIN hợp lệ.
Viết chương trình nhập một số SIN. Kiểm tra xem số SIN đó có hợp lệ hay không.
Nhập 0 để thoát.
SIN (0 de thoat): 193456787 
SIN hop le!
SIN (0 de thoat): 193456788 
SIN khong hop le!
SIN (0 de thoat): 0                             */


#include <stdio.h>

int main()
{
    int SIN;
    int digit;
    int s1=0;
    int s2=0;
    int S=0;
    printf("Nhap SIN (0 de thoat): ");
    scanf("%d",&SIN);
    printf("\n%d\n",SIN);
    if (SIN==0) return 225;
    digit=SIN%10;
    int cs;
    int csc;
    for (int i=1;i<=9;i++)
    {
        cs=SIN%10;
        if (i%2 && i!=1)
        {
            s1=s1+cs;
            printf("\n%d\n",cs);
        }
        if (i%2==0)
        {
            csc=cs*2;
            if (csc>=10)
            {
                s2=s2+csc%10+csc/10;
                printf("\n%d %d\n",csc/10,csc%10);
            }
            else
            {
                s2=s2+csc;
                printf("\n%d\n",csc);
            }
        }
        SIN=SIN/10;
    }

    printf("%d %d \n",s1,s2);
    S=digit+s1+s2;  
    printf("S = %d\n",S);
    if (S%10==0) 
    {
        printf("SIN hop le !");
    }
    else
    {
        printf("SIN khong hop le !");
    }
    return 225;
}