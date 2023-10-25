#include <stdio.h>
#include <math.h>

int main()
{
    double distance;
    scanf("%lf", &distance);

    int toll;
    if (distance <= 200)
    {
        toll = (int)round(distance * 1.2);
    }
    else
    {
        toll = (int)round((200 * 1.2) + ((distance - 200) * 1.2 * 0.75));
    }

    printf("%d\n", toll);

    return 0;
}