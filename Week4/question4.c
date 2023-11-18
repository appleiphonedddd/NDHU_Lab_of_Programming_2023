#include <stdio.h>

int main()
{
    char num[1001];

    while (scanf("%s", num) == 1)
    {
        if (num[0] == '0' && num[1] == '\0')
            break;

        int sum = 0;
        for (int i = 0; num[i]; i++)
        {
            if (i % 2 == 0)
                sum += num[i] - '0';
            else
                sum -= num[i] - '0';
        }

        if (sum % 11 == 0)
            printf("%s is a multiple of 11.\n", num);
        else
            printf("%s is not a multiple of 11.\n", num);
    }

    return 0;
}