#include <stdio.h>

int main()
{
   int number;
   float f;
   char character;
   
   scanf("%d %f %c", &number, &f, &character);
   printf("%d\n", number);
   printf("%f\n", f);
   printf("%c\n", character);
   return 0;
}