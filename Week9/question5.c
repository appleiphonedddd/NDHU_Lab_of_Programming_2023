#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, *b;
    init(&a, &b);
    int sum = 0;
    int *ptr;
    for (ptr = a; ptr < b; ptr++)
    {
        sum += *ptr;
    }
    printf("%d", sum);
    return 0;
}