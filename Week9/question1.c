#include <stdio.h>

int main()
{

    init();

    void *p = &block;

    // Print int
    int *intPtr = (int *)p;
    printf("%d, ", *intPtr);

    // Print char
    char *charPtr = (char *)(intPtr + 1);
    printf("%c, ", *charPtr);

    // Print float
    float *floatPtr = (float *)(charPtr + 1);
    printf("%f", *floatPtr);

    return 0;
}