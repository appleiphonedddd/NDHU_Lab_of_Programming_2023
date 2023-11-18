#include <stdio.h>

void toRoman(int num)
{

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int i = 0;
    while (num > 0)
    {
        if (num >= values[i])
        {
            printf("%s", symbols[i]);
            num -= values[i];
        }
        else
        {
            i++;
        }
    }
}

int main()
{

    int num;
    scanf("%d", &num);

    toRoman(num);

    return 0;
}