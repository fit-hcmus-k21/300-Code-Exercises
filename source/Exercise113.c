#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Nhap chuoi nhi phan :");
    scanf("%s",str);
    int max=0;
    int vt;
    int len=0;
    int j;
    for (int i=0;i<strlen(str)-1;i++)
        if (str[i]=='0')
        {
            len=1;
            for (j=i+1;j<strlen(str)-1;j++)
                if (str[j]=='0') 
                {
                    len++;
                }
                else
                    break;
            if (max<len)
            {
                 max=len; 
                 vt=i;
            }
            i=j;
        }
    printf("Chuoi 0 dai nhat co %d ky tu \n",max);
    printf("Bat dau tai s[%d]",vt);
    return 225;

}




#include <stdio.h>
#include <string.h>
#define MAX 100

int main() 
{
        char s[MAX];
        int i, head, maxhead, maxlen;

        printf( "Nhap chuoi nhi phan: " );
        fgets( s,MAX, stdin );
        head = maxhead = maxlen = 0;

        do 
        {
            int len = 0;
            for ( i = head; s[i] && s[i] == '0'; ++i )
            {
                len++;
            }
            if ( len > maxlen ) 
            { 
                maxlen = len; maxhead = head; 
            }
            head = i + 1;
        }
         while ( s[i] );

        printf( "Chuoi 0 dai nhat co %d ky tu\n", maxlen );
        printf( "Bat dau tai s[%d] ", maxhead );
        putchar( '\n' );
        return 0;
}