/*  : Viết chương trình tìm cách thay thế các dấu hỏi (?) bởi các dấu 4 phép tính
số học +, -, *, /, trong biểu thức dưới đây sao cho biểu thức có giá trị bằng 36.
((((1 ? 2) ? 3) ? 4) ? 5) ? 6
((((1 - 2) + 3) + 4) * 5) + 6 = 36
((((1 - 2) * 3) + 4) + 5) * 6 = 36
((((1 * 2) + 3) - 4) + 5) * 6 = 36
((((1 / 2) * 3) * 4) * 5) + 6 = 36
Bài giải: xem trang 108 */

#include <stdio.h>

float f(float a,float b,int d)
{
    //  (0:+) (1:-) (2:*) (3:/)
    switch(d)
    {
        case 0: return a+b;
        case 1: return a-b;
        case 2: return a*b;
        case 3: return a/b;
    }
}

int main()
{
    char sign[]={'+','-','*','/','\0'};
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            for (int k=0;k<4;k++)
            {
                for (int l=0;l<4;l++)
                {
                    for (int m=0;m<4;m++)
                    {
                        if (f(f(f(f(f(1,2,i),3,j),4,k),5,l),6,m)==36)
                        {
                            printf("((((1%c2)%c3)%c4)%c5)%c6 = 36\n",sign[i],sign[j],sign[k],sign[l],sign[m]);
                        }
                    }
                }
            }
        }
    }
    printf("Hoan thanh...\n");
    return 225;
}