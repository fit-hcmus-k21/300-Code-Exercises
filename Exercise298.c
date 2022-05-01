//  Sudoku  trang 182

#include <stdio.h>
#include <stdbool.h>
#define MAX 50

bool sokudoC(int a[][MAX],int n,int k)
{
    int d[10]={0};
    for (int i=0;i<n;i++)
    {
        d[a[i][k]]++;
    }
    for (int j=1;j<=9;j++)
    {
        if (d[j]!=1)
        {
            return false;
        }
    }
    return true;
}

bool sokudoD(int a[][MAX],int n,int k)
{
    int d[10]={0};
    for (int i=0;i<n;i++)
    {
        d[a[k][i]]++;
    }
    for (int j=1;j<=9;j++)
    {
        if (d[j]!=1)
        {
            return false;
        }
    }
    return true;
}

bool sokudoB(int a[][MAX],int sr,int er,int sc,int ec)
{
    int d[10]={0};
    for (int i=sr;i<=er;i++)
    {
        for (int j=sc;j<=ec;j++)
        {
            d[a[i][j]]++;
        }
    }
    for (int i=1;i<=9;i++)
    {
        if (d[i]!=1)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int a[MAX][MAX];
    printf("Nhap bang sokudo:\n");
    for (int i=0;i<9;i++)
    {
        for (int j=0;j<9;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    bool skd=true;
    for (int i=0;i<9;i++)
    {
        if (!sokudoD(a,9,i))
        {
            skd=false;
            break;
        }
        if (!sokudoC(a,9,i))
        {
            skd=false;
            break;
        }
    }

    for (int i=0;i<9;i=i+3)
    {
        for (int j=0;j<9;j=j+3)
        {
            if (!sokudoB(a,i,i+2,j,j+2))
            {
                skd=false;
                break;
            }
        }
    }

    if (skd)
    {
        printf("Sokudo...\n");
    }
    else
    {
        printf("Khong la sokudo...\n");
    }
    printf("Hoan thanh...\n");
    return 225;
}