#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    float p;
    float s;
    printf("Enter the length of first side :");
    scanf("%f",&a);
    printf("Enter the length of second side :");
    scanf("%f",&b);
    printf("Enter the length of third side :");
    scanf("%f",&c);
    if (a+b>c&&a+c>b&&b+c>a)
    {
        if (a==b &&b==c)
            printf("Tam giac deu !");
        else
            {
                if (a==b||a==c||b==c)
                     {
                         if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
                             printf("Tam giac vuong can !");
                         else 
                              printf("Tam giac can !");
                     }
            
                else 
                    if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
                        printf("Tam giac vuong !");
                    else 
                        printf("Tam giac thuong !");
            }
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("\nDien tich : %f",s);
    }
    else 
        printf(" Khong phai tam giac !");
    return 0;

}