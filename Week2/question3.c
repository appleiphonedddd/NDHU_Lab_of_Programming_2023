#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x1, x2, x3, x4;
    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);

    // Ensure segments are ordered from left to right
    if (x1 > x2)
        swap(&x1, &x2);
    if (x3 > x4)
        swap(&x3, &x4);

    // Check for overlap
    if (x2 < x3 || x1 > x4)
    {
        printf("no overlay\n");
    }
    else
    {
        printf("overlay\n");
    }

    return 0;
}