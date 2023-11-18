#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int scores[n];
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    float avg = (float)sum / n;

    int failCount = 0;
    for (i = 0; i < n; i++)
    {
        if (scores[i] < avg)
        {
            failCount++;
        }
    }

    printf("%d\n", failCount);

    return 0;
}
