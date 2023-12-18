#include <stdio.h>

/*******************************************
function name: replace
description: When mode is 1, replace the first target finded in source with the replacement.
             When mode is 2, replace left-most target by replacement until there are no targets in the source.
return value: Return the result after replace.
*******************************************/
char *replace(char *source, char *target, char *replacement, int mode)
{
    char *result = source;
    char *temp = source;
    int targetLength = 0;
    int replacementLength = 0;
    int sourceLength = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;

    while (target[targetLength] != '\0')
    {
        targetLength++;
    }

    while (replacement[replacementLength] != '\0')
    {
        replacementLength++;
    }

    while (source[sourceLength] != '\0')
    {
        sourceLength++;
    }

    if (mode == 1)
    {
        for (i = 0; i < sourceLength; i++)
        {
            if (source[i] == target[0])
            {
                for (j = 0; j < targetLength; j++)
                {
                    if (source[i + j] != target[j])
                    {
                        break;
                    }
                }

                if (j == targetLength)
                {
                    for (k = 0; k < replacementLength; k++)
                    {
                        source[i + k] = replacement[k];
                    }
                    break;
                }
            }
        }
    }
    else if (mode == 2)
    {
        for (l = 0; l < sourceLength; l++)
        {
            if (source[l] == target[0])
            {
                for (m = 0; m < targetLength; m++)
                {
                    if (source[l + m] != target[m])
                    {
                        break;
                    }
                }

                if (m == targetLength)
                {
                    for (n = 0; n < replacementLength; n++)
                    {
                        source[l + n] = replacement[n];
                    }
                }
            }
        }
    }

    return result;

}
