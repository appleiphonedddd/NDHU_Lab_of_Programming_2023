#include <stdio.h>

int main()
{
    int number;
    int isFourPresent = 0;

    // Input: get a number from the user
    scanf("%d", &number);

    // Check if '4' is present in the number
    while (number > 0)
    {
        if (number % 10 == 4)
        {
            isFourPresent = 1;
            break;
        }
        number = number / 10;
    }

    // Output: Inform the user about the presence of '4'
    if (isFourPresent)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}