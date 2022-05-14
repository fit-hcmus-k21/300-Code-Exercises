<<<<<<< HEAD
#include <stdio.h>
#include <math.h>
int main()
{
    float xA,yA;
    float xB,yB;
    printf("Enter A(xA,yA) :");
    scanf("%f %f",&xA,&yA);
    printf("Enter B(xB,yB) :");
    scanf("%f %f",&xB,&yB);
    float distance;
    distance=sqrt(pow(xB-xA,2)+pow(yA-yB,2));
    printf("Distance = %f",distance);
    return 0;
=======
#include <stdio.h>
#include <math.h>
int main()
{
    float xA,yA;
    float xB,yB;
    printf("Enter A(xA,yA) :");
    scanf("%f %f",&xA,&yA);
    printf("Enter B(xB,yB) :");
    scanf("%f %f",&xB,&yB);
    float distance;
    distance=sqrt(pow(xB-xA,2)+pow(yA-yB,2));
    printf("Distance = %f",distance);
    return 0;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}