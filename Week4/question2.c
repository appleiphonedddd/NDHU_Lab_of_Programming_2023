#include <stdio.h>
#include <stdlib.h>

double average(int arr[], int size)
{
   int sum = 0;
   double average;
   for(int i = 0; i < size; i++)
   {
      sum+=arr[i];
   }
   average = (double)sum/size;
   return average;
}

int main()
{
   int size;
   scanf("%d", &size);

   int arr[size];

   for(int i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }
   
   printf("%.2lf", average(arr, size));
   return 0;
}