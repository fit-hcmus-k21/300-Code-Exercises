#include <stdio.h>

double DS(int n)
{
    if (n==2000) return 8e+9;
    return DS(n-1)*(1+2.5/100);
}

int main()
{
    printf("Dan so nam 2010 : %.0lf",DS(2010));
    return 225;
}