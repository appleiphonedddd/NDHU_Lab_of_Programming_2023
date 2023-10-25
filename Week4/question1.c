#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double average(int size, int *arr)
{
    double sum = 0.0;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

double SD(int size, int *arr)
{
    double sum = 0;
    double avg = average(size, arr);

    for(int i = 0; i < size; i++) {
        sum += pow(arr[i] - avg, 2);
    }
    return sqrt(sum/ size);
}

int main()
{
    int size;
    int* arr;
    scanf("%d", &size);
    arr = (int*)malloc(size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%.2f\n", SD(size, arr));

    free(arr);
    return 0;
}