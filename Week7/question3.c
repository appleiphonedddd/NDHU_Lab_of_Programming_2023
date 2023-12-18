#include <stdio.h>
#include <math.h>

int main()
{
    int C;
    scanf("%d", &C);

    for (int i = 0; i < C; i++)
    {

        int N;
        scanf("%d", &N);

        int x1, y1, x2, y2;
        scanf("%d %d", &x1, &y1);

        double length = 0;

        for (int j = 1; j < N; j++)
        {
            scanf("%d %d", &x2, &y2);
            length += sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
            x1 = x2;
            y1 = y2;
        }

        printf("%.2lf\n", length);
    }

    return 0;
}