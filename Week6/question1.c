#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool is_prime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int compare(const void *a, const void *b)
{
    int val1 = *(int *)a;
    int val2 = *(int *)b;

    bool val1_is_prime = is_prime(val1);
    bool val2_is_prime = is_prime(val2);

    // Both are prime, sort in descending order
    if (val1_is_prime && val2_is_prime)
    {
        return (val2 - val1);
    }

    // Both are non-prime, sort in ascending order
    if (!val1_is_prime && !val2_is_prime)
    {
        return (val1 - val2);
    }

    // One is prime, the prime number comes first
    return val1_is_prime ? -1 : 1;
}

void prime_sorting(int *array, int size)
{
    qsort(array, size, sizeof(int), compare);
}

int main()
{
    int N;
    scanf("%d", &N);

    int *array = (int *)malloc(N * sizeof(int));

    if (array == NULL) {
        perror("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    prime_sorting(array, N);

    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}
