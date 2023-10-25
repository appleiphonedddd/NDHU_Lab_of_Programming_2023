#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int swaptime(int *arr, int size) {
    int swap = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap++;
            }
        }
    }
    return swap;
}

int main() {
    int testcase;
    
    scanf("%d", &testcase);

    for (int i = 0; i < testcase; i++) {
        int size;
        
        scanf("%d", &size);

        int *arr = (int *)malloc(size * sizeof(int));
        if (arr == NULL) {
            perror("Memory allocation failed");
            exit(1);
        }

        for (int j = 0; j < size; j++) {
            
            scanf("%d", &arr[j]);
        }
        printf("Optimal train swapping takes %d swaps.\n", swaptime(arr, size));
        free(arr);
    }
    return 0;
}
