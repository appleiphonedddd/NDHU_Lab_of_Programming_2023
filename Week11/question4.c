#include <stdio.h>

int josephus(int n, int k)
{
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main()
{
    int n, k;
    while (scanf("%d %d", &n, &k) == 2)
    {
        if (n == 0 && k == 0)
            break;
        printf("%d\n", josephus(n, k));
    }
    return 0;
}