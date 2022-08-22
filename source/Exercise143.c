#include <stdio.h>

int Ackermann(int n,int m,int *c)
{
    *c++;
    if (n==0) return m+1;
    if (m==0) return Ackermann(n-1,1,c);
    return Ackermann(n-1,Ackermann(n,m-1,c),c);
}

int main()
{
    int c=0;
    printf("A(3,6) = %d",Ackermann(3,6,&c));
    printf("Goi de qui %d lan",c);
    return 225;
}

