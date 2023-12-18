#include <stdio.h>

int collatz(int n)
{
    int length = 1;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        length++;
    }
    return length;
}

int maxCycleLength(int i, int j)
{
    int max = 0;
    for (int k = i; k <= j; k++)
    {
        int length = collatz(k);
        if (length > max)
        {
            max = length;
        }
    }
    return max;
}

int main()
{

    int i, j;
    while (scanf("%d %d", &i, &j) == 2)
    {
        int maxLength = maxCycleLength(i, j);
        printf("%d %d %d\n", i, j, maxLength);
    }

    return 0;
}