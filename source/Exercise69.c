#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int main()
{
    int a[MAX]={-53,-32,23,78,61,-1,95,83,-55,-7,0,1,2,3,4,5};
    int n=16;
    int len,head,maxhead,maxlen;
    len=head=maxhead=maxlen=0;
    do 
    {
        int i;
        len=1;
        for (i=head;i<n && a[i]<a[i+1];i++)
        {
            len++;
        }
        if (len>maxlen)
        {
            maxlen=len;
            maxhead=head;
        }
        head=i+1;
    } while (head<n);
    printf("\"run\" tang dai nhat: ");
    for (int j=maxhead,d=0;d<maxlen;j++,d++)
    {
        printf("%d ",a[j]);
    }
    printf("\nHoan thanh...\n");
    return 225;
}