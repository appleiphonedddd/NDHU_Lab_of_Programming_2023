#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main()
{

   int n, i;
   scanf("%d", &n);

   int values[n];
   for (i = 0; i < n; i++)
   {
      scanf("%d", &values[i]);
   }

   qsort(values, n, sizeof(int), compare);

   float sum = 0;
   for (i = 3; i < n - 3; i++)
   {
      sum += values[i];
   }

   float mean = sum / (n - 6);

   printf("%.2f\n", mean);

   return 0;
}

int compare(const void *a, const void *b)
{
   return (*(int *)a - *(int *)b);
}