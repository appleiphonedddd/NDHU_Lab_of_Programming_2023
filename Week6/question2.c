#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *str, int length)
{
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

char* binary(int number, char *result, int size)
{
    int i = 0;
    int isNegative = 0;

    if (number == 0) {
        strcpy(result, "0");
        return result;
    }

    if (number < 0) {
        isNegative = 1;
        number = -number;
    }

    while (number > 0) {
        result[i++] = (number % 2) + '0';
        number = number / 2;
    }

    // If the number is negative, apply Two's complement
    if (isNegative) {
        // Add extra bits for Two's complement representation
        while (i < size) {
            result[i++] = '0';
        }

        // Invert the digits
        for (int j = 0; j < size; j++) {
            result[j] = (result[j] == '0') ? '1' : '0';
        }

        // Add 1 to the inverted number
        int carry = 1;
        for (int j = 0; j < size; j++) {
            int sum = (result[j] - '0') + carry;
            result[j] = (sum % 2) + '0';
            carry = sum / 2;
        }
    }

    result[i] = '\0';
    reverse(result, i);

    return result;
}

int main()
{
    int number;
    char result[33]; // 32 bits + null terminator

    scanf("%d", &number);

    binary(number, result, 32);
    printf("%s\n", result);

    return 0;
}
