#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, counter = 0;
    int* arr;
    scanf("%d", &size);
    arr = (int*)malloc(size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < 60) {
            counter++;
        }
    }

    printf("%d", counter);
    free(arr);
    return 0;
}