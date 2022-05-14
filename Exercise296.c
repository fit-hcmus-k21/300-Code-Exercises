<<<<<<< HEAD
//  Tìm số cách đổi tiền sang các tờ 1 2 5

#include <stdio.h>

int main()
{
    int T;
    printf("Nhap so tien can doi: ");
    scanf("%d",&T);
    int x,y,z;  //  x,y,z: số tờ 1 đồng,2 đồng, 5 đồng
    int d=1;    // luôn có ít nhất 1 cách đổi là đổi tất cả  tờ 1 đồng

    //  Kiểm tra có đổi sang full tờ 2 hay 5 được không

    if (T%2==0)
    {
        d++;
    }
    if (T%5==0)
    {
        d++;
    }
    int sum=0;

    //  Xét lần lượt đổi sang các tờ (1-2) (1,5) (2,5) (1,2,5)
    for (int y=1;y<=T/2;y++)
    {
        for (int x=1;x<T;x++)
        {
                sum=x+2*y;
                if (sum==T)
                {
                    d++;
                }
        }
    }
    for (int z=1;z<=T/5;z++)
    {
        for (int x=1;x<T;x++)
        {
            sum=x+5*z;
            if (sum==T)
            {
                    d++;
            }
        }
    }
    for (int z=1;z<=T/5;z++)
    {
        for (int y=1;y<=T/2;y++)
        {
            sum=2*y+5*z;
            if (sum==T)
            {
                    d++;
            }
        }
    }
    for (int z=1;z<=T/5;z++)
    {
        for (int y=1;y<=T/2;y++)
        {
            for (int x=1;x<T;x++)
            {
                sum=x+2*y+5*z;
                if (sum==T)
                {
                    d++;
                }
            }
        }
    }
    printf("So cach doi tien la: %d\n",d);
    printf("Hoan thanh...\n");
    return 225;
=======
//  Tìm số cách đổi tiền sang các tờ 1 2 5

#include <stdio.h>

int main()
{
    int T;
    printf("Nhap so tien can doi: ");
    scanf("%d",&T);
    int x,y,z;  //  x,y,z: số tờ 1 đồng,2 đồng, 5 đồng
    int d=1;    // luôn có ít nhất 1 cách đổi là đổi tất cả  tờ 1 đồng

    //  Kiểm tra có đổi sang full tờ 2 hay 5 được không

    if (T%2==0)
    {
        d++;
    }
    if (T%5==0)
    {
        d++;
    }
    int sum=0;

    //  Xét lần lượt đổi sang các tờ (1-2) (1,5) (2,5) (1,2,5)
    for (int y=1;y<=T/2;y++)
    {
        for (int x=1;x<T;x++)
        {
                sum=x+2*y;
                if (sum==T)
                {
                    d++;
                }
        }
    }
    for (int z=1;z<=T/5;z++)
    {
        for (int x=1;x<T;x++)
        {
            sum=x+5*z;
            if (sum==T)
            {
                    d++;
            }
        }
    }
    for (int z=1;z<=T/5;z++)
    {
        for (int y=1;y<=T/2;y++)
        {
            sum=2*y+5*z;
            if (sum==T)
            {
                    d++;
            }
        }
    }
    for (int z=1;z<=T/5;z++)
    {
        for (int y=1;y<=T/2;y++)
        {
            for (int x=1;x<T;x++)
            {
                sum=x+2*y+5*z;
                if (sum==T)
                {
                    d++;
                }
            }
        }
    }
    printf("So cach doi tien la: %d\n",d);
    printf("Hoan thanh...\n");
    return 225;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}