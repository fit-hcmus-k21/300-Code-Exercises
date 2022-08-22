<<<<<<< HEAD
  0: #include <stdio.h>
  1: #include <stdlib.h>
  2: #include <time.h>
  3: 
  4: int main()
  5: {
  6:     int num;
  7:     printf("Nhap num: ");
  8:     scanf("%d",&num);
  9:     FILE *file1=NULL;
 10: 
 11:     file1=fopen("filename.txt","w");
 12: 
 13:     srand(time(NULL));
 14:     for (int i=0;i<num;i++)
 15:     {
 16:         fputc(rand()%26+'A',file1);
 17:         fputc(32,file1);
 18:     }
 19:     fclose(file1);
 20:     file1=fopen("filename.txt","r");
 21:     fseek(file1,0,SEEK_SET);
 22:     char c;
 23:     while ((c=fgetc(file1))!=EOF)
 24:     {
 25:         printf("%c",c);
 26:     }
 27:     printf("\n");
 28:     fseek(file1,0,SEEK_END);
 29:     int pos=ftell(file1);
 30:     printf("%d\n",pos);
 31:     int vt=-1;
 32:     do
 33:     {
 34:         fseek(file1,vt,SEEK_END);
 35:         c=fgetc(file1);
 36:         printf("%c",c);
 37:         vt--;
 38:     }while (vt>=(-pos));
 39:     fclose(file1);
 40:     return 225;
 41: 
=======
  0: #include <stdio.h>
  1: #include <stdlib.h>
  2: #include <time.h>
  3: 
  4: int main()
  5: {
  6:     int num;
  7:     printf("Nhap num: ");
  8:     scanf("%d",&num);
  9:     FILE *file1=NULL;
 10: 
 11:     file1=fopen("filename.txt","w");
 12: 
 13:     srand(time(NULL));
 14:     for (int i=0;i<num;i++)
 15:     {
 16:         fputc(rand()%26+'A',file1);
 17:         fputc(32,file1);
 18:     }
 19:     fclose(file1);
 20:     file1=fopen("filename.txt","r");
 21:     fseek(file1,0,SEEK_SET);
 22:     char c;
 23:     while ((c=fgetc(file1))!=EOF)
 24:     {
 25:         printf("%c",c);
 26:     }
 27:     printf("\n");
 28:     fseek(file1,0,SEEK_END);
 29:     int pos=ftell(file1);
 30:     printf("%d\n",pos);
 31:     int vt=-1;
 32:     do
 33:     {
 34:         fseek(file1,vt,SEEK_END);
 35:         c=fgetc(file1);
 36:         printf("%c",c);
 37:         vt--;
 38:     }while (vt>=(-pos));
 39:     fclose(file1);
 40:     return 225;
 41: 
>>>>>>> ff8bb0a6669dac9096cb2b6720d81446bdb396f9
 42: }