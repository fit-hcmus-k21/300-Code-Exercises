<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    FILE *f1=NULL;
    FILE *f2=NULL;
    f1=fopen("INTEGER.DAT","w");
    f2=fopen("REAL.DAT","w");
    while (!f1)
    {
        printf(":( \n");
        return 225;
    }
    for (int i=0;i<5;i++)
    {
        fprintf(f1,"%d\n",rand());
    }
    fclose(f1);
    while (!f2)
    {
        printf(":) \n");
        return 225;
    }
    for (int i=0;i<5;i++)
    {
        fprintf(f2,"%f\n",rand()/(double) RAND_MAX);
    }
    fclose(f2);
    int x;
    float y;
    f1=fopen("INTEGER.DAT","r");
    f2=fopen("REAL.DAT","r");
    
    while ((fscanf(f1,"%d",&x))!=EOF)
    {
        printf("%d\n",x);
    }
    while ((fscanf(f2,"%f",&y))!=EOF)
    {
        printf("%f\n",y);
    }
    fclose(f1);
    fclose(f2);
    return 225;    
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    FILE *f1=NULL;
    FILE *f2=NULL;
    f1=fopen("INTEGER.DAT","w");
    f2=fopen("REAL.DAT","w");
    while (!f1)
    {
        printf(":( \n");
        return 225;
    }
    for (int i=0;i<5;i++)
    {
        fprintf(f1,"%d\n",rand());
    }
    fclose(f1);
    while (!f2)
    {
        printf(":) \n");
        return 225;
    }
    for (int i=0;i<5;i++)
    {
        fprintf(f2,"%f\n",rand()/(double) RAND_MAX);
    }
    fclose(f2);
    int x;
    float y;
    f1=fopen("INTEGER.DAT","r");
    f2=fopen("REAL.DAT","r");
    
    while ((fscanf(f1,"%d",&x))!=EOF)
    {
        printf("%d\n",x);
    }
    while ((fscanf(f2,"%f",&y))!=EOF)
    {
        printf("%f\n",y);
    }
    fclose(f1);
    fclose(f2);
    return 225;    
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}