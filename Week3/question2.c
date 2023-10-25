#include <stdio.h>

int main()
{
    long num1, num2, num3, num4;
    scanf("%ld %ld %ld %ld", &num1, &num2, &num3, &num4);

    long temp = (num1 > num2 ? num1 : num2);
    temp = (temp > num3 ? temp : num3);
    temp = (temp > num4 ? temp : num4);

    printf("%ld", temp);

    return 0;
}