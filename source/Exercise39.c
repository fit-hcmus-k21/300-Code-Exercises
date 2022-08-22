/*  Một bộ ba Pythagorean là một bộ ba số tự nhiên a < b < c, thỏa mãn công
thức Pithagoras6
: a
2 + b2 = c2
. Tìm các bộ ba Pythagorean nhỏ hơn 100 là 3 số nguyên
liên tiếp hoặc 3 số chẵn liên tiếp.
(3, 4, 5): ba so nguyen lien tiep
(6, 8, 10): ba so chan lien tiep
Bài giải: xem trang 106 */

#include <stdio.h>

int main()
{
    int a,b,c;
    for (a=2;a<100;a++)
        for(b=2;b<100;b++)
            for(c=2;c<100;c++)
                if (a*a+b*b==c*c)
                    if (b-a==1 && c-b==1)
                        printf("(%d,%d,%d) : ba so nguyen lien tiep \n",a,b,c);
                    else
                        if (a%2==0 && b%2==0 && c%2==0 && (b-a==2) && (c-b==2))
                            printf("(%d,%d,%d) : ba so chan lien tiep \n",a,b,c);
    return 225;
}