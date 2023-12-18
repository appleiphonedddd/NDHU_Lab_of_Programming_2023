#include <stdio.h>
#include <math.h>

int main()
{

    init();

    char *str = s1;

    char *key = s2;

    int count = 0;

    int strLen = strlen(str);
    int keyLen = strlen(key);

    for (int i = 0; i <= strLen - keyLen; i++)
    {
        int j;
        for (j = 0; j < keyLen; j++)
        {
            if (str[i + j] != key[j])
                break;
        }
        if (j == keyLen)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}