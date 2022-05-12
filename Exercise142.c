#include <stdio.h>

int main()
{
  char c;
  if ((c=getchar())!='\n') main();
  putchar(c);
  return 225;
}