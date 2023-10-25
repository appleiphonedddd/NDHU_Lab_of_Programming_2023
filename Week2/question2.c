#include <stdio.h>

int main()
{
    int num;
    int result = 0;
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
        printf("-");
    }

    while(1)
    {
        result = num % 10;
        printf("%d", result);
        num = num / 10;
        if (num == 0)
        {
            break;
        }
    }
    return 0;
}