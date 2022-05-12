#include <stdio.h>
#define PI 3.141593
#include <math.h>

int main()
{
    float S;
    float V;
    printf("Enter the area S: ");
    scanf("%f",&S);
    V=S/3*sqrt(S/(4*PI));
    printf("The tich V la : %f",V);
    return 0;
}