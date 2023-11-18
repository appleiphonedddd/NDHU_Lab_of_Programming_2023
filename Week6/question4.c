#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);

    int n = strlen(s);

    int max_len = 0;
    char max_substr[1001];

    int visited[128] = {0};

    int start = 0;
    int end = 0;

    while (end < n)
    {
        if (visited[s[end]] == 0)
        {
            visited[s[end]] = 1;
            end++;
            if (end - start > max_len)
            {
                max_len = end - start;
                strncpy(max_substr, s + start, end - start);
                max_substr[end - start] = '\0';
            }
        }
        else
        {
            visited[s[start]] = 0;
            start++;
        }
    }

    printf("%s\n", max_substr);

    return 0;
}