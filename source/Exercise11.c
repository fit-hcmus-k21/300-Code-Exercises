<<<<<<< HEAD
/* Viết trò chơi bao - đá - kéo với luật chơi: bao thắng đá, đá thắng kéo, kéo
thắng bao. Người dùng nhập vào một trong ba ký tự b (bao), d (đá), k (kéo); máy
tính sinh ngẫu nhiên một trong ba ký tự trên, thông báo kết quả chơi.
Nhap ky tu (b-d-k), ky tu khac de thoat: b 
Computer: d
Ty so human - computer: 1 - 0
Nhap ky tu (b-d-k), ky tu khac de thoat: k 
Computer: d
Ty so human - computer: 1 - 1
Nhap ky tu (b-d-k), ky tu khac de thoat: 0     */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char mem_1;
    char mem_2;
    printf("The player (r,p,s):");
    _flushall();
    scanf("%c",&mem_1);
    srand(time(NULL));
    char nguoi=0;
    char may=0;
    switch(mem_1)                   // 0~r  1~p 2~s
    {
        case 'r':
                mem_2=rand()%3;
                switch(mem_2)
                {
                case 0:
                        break;
                case 1:
                        may++;
                        break;
                case 2:
                        nguoi++;
                        break;
                }
                break;
        case 'p':
                mem_2=rand()%3;
                switch(mem_2)
                {
                case 0: 
                        nguoi++;
                        break;
                case 1:
                        break;
                case 2:
                        may++;
                        break;
                }
                break;

        case 's':
                mem_2=rand()%3;
                switch(mem_2)
                {
                    case 0:
                            may++;
                            break;
                    case 1:
                            nguoi++;
                            break;
                    case 2:
                            break;
                }
                break;


    }
    printf("Ty so nguoi - may : %d - %d ",nguoi,may);           
            
    return 0;
=======
/* Viết trò chơi bao - đá - kéo với luật chơi: bao thắng đá, đá thắng kéo, kéo
thắng bao. Người dùng nhập vào một trong ba ký tự b (bao), d (đá), k (kéo); máy
tính sinh ngẫu nhiên một trong ba ký tự trên, thông báo kết quả chơi.
Nhap ky tu (b-d-k), ky tu khac de thoat: b 
Computer: d
Ty so human - computer: 1 - 0
Nhap ky tu (b-d-k), ky tu khac de thoat: k 
Computer: d
Ty so human - computer: 1 - 1
Nhap ky tu (b-d-k), ky tu khac de thoat: 0     */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char mem_1;
    char mem_2;
    printf("The player (r,p,s):");
    _flushall();
    scanf("%c",&mem_1);
    srand(time(NULL));
    char nguoi=0;
    char may=0;
    switch(mem_1)                   // 0~r  1~p 2~s
    {
        case 'r':
                mem_2=rand()%3;
                switch(mem_2)
                {
                case 0:
                        break;
                case 1:
                        may++;
                        break;
                case 2:
                        nguoi++;
                        break;
                }
                break;
        case 'p':
                mem_2=rand()%3;
                switch(mem_2)
                {
                case 0: 
                        nguoi++;
                        break;
                case 1:
                        break;
                case 2:
                        may++;
                        break;
                }
                break;

        case 's':
                mem_2=rand()%3;
                switch(mem_2)
                {
                    case 0:
                            may++;
                            break;
                    case 1:
                            nguoi++;
                            break;
                    case 2:
                            break;
                }
                break;


    }
    printf("Ty so nguoi - may : %d - %d ",nguoi,may);           
            
    return 0;
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
}