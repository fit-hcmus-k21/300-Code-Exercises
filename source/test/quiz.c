/*#include <stdio.h>
int main(void)
{
    int i = 10 > 9 > 7 < 8;
    printf("%d", i);
    return 0;
}*/

/*#include<stdio.h>
#define A -B
#define B -C
#define C 5

int main()
{
  printf("The value of A is %d", A); 
  return 0;
} */

/*#include<stdio.h>
int main()
{
    int a, b;
    if(scanf("%d%d", &a, &b)==2)
        printf("true");
    else
        printf("false");
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    FILE* p;
    int n = 0;
    p = fopen("newname.txt", "rb");
    if (p == NULL)
        perror("Error opening file");
    else {
        while (fgetc(p) != EOF) {
            ++n;
        }
        if (feof(p)) {
            printf("%d\n", n);
        } else
            puts("End-of-File was not reached.");
        fclose(p);
    }
    return 0;
}

*/
/*
#include <stdio.h>
int main()
{
    int n;
    n = (int)sizeof(!2.3);
    printf("%d", n);
    return 0;
}*/
/*
#include<stdio.h>
#define max abc
#define abc 100
 
int main()
{
    printf("maximum is %d", max);
    return 0;
}*/
/*
#include <stdio.h>
#define PRINT(i, limit) do 
                        { 
                            if (i++ < limit) 
                            { 
                                printf("GeeksQuizn"); 
                                continue; 
                            } 
                        }while(1);
 
int main()
{
    PRINT(0, 3);
    return 0;
}
*/
/*
#include<stdio.h>
#define square(x) x*x

int main()
{
  int x;
  x = 36/square(6);
  printf("%d",x);
   
  return 0;
}*/
/*
#include <stdio.h>

int main()
{
    printf("value is = %d", (10 ++));
    return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
    int x = 4, y = 4, z = 4;
    if (x == y == z) {
        printf("Hello");
    } else {
        printf("Hi");
    }
    return 0;
}*/
/*
#include <stdio.h>
#define declare(x) int x;

int main()
{
    int a;
    declare(a)
        printf("declare(a)");
    return 0;
}*/

#include <stdio.h>
int main()
{
  int a = 10, b = 20, c = 30;
  if (c > b > a)
  {
    printf("TRUE");
  }
  else
  {
    printf("FALSE");
  }
  getchar();
  return 0;
}
