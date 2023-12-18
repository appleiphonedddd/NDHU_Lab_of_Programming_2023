#include <stdio.h>

int getCycleLength(int n)
{
    int len = 1;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        len++;
    }

    return len;
}

int main()
{
    int i, j, max = 0;

    while (scanf("%d %d", &i, &j) == 2)
    {
        int k;
        for (k = i; k <= j; k++)
        {
            int len = getCycleLength(k);
            if (len > max)
            {
                max = len;
            }
        }
        printf("%d %d %d\n", i, j, max);
        max = 0;
    }

    return 0;
}