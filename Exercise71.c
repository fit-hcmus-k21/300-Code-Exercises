#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void input(int A[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf(" A[%d] = ",i);
        scanf("%d",(A+i));
    }
}
bool dx(int A[],int n)
{
    if (n%2==0)
        for(int i=0;i<n/2;i++)
            if (A[i]!=A[n-i-1]) return false;
    else
        for (int i=0;i<n/2-1;i++)
            if (A[i]!=A[n-i-1]) return false;
    return true;
}
void output(int A[],int n)
{
    for (int i=0;i<n;i++)
        printf("%d ",A[i]);
}

int main()
{
    int A[100]={1,2,3,4,5,5,4,3,2,1};
    int n;
    printf("Nhap n :");
    scanf("%d",&n);
    //  input(A,n);
    printf("\n");
    output(A,n);
    if (dx(A,n)) 
        printf("\nDoi xung !");
    else 
        printf("\nKhong doi xung !");
    int k;
    printf("\nNhap so lan can dich :");
    scanf("%d",&k);
    /*
    int temp;
    for (int i=1;i<=k;i++)
    {   
        temp=A[0];
        memmove(A,A+1,(n-1)*sizeof(*A));
        A[n-1]=temp;
    }
    */
    for (int i=0;i<k;i++)
    {
        int temp=A[0];
        int d=0;
        for (int j=1;j<n;j++)
        {
            A[d]=A[j];
            d++;
        }
        A[n-1]=temp;
    }
    output(A,n);
    return 225;
}