#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    if (number % 3 == 2 && number % 7 == 5 && number % 11 == 7)
    {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}