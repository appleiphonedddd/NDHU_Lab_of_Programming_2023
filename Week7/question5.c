#include <stdio.h>
#include <stdlib.h>

#define MAX_BUILDINGS 5000

// Structure to represent a building
struct Building
{
    int left;
    int height;
    int right;
};

// Compare buildings by left x-coordinate
int compare(const void *a, const void *b)
{
    return (*(struct Building *)a).left - (*(struct Building *)b).left;
}

int main()
{

    // Read buildings
    int n;
    scanf("%d", &n);

    struct Building buildings[MAX_BUILDINGS];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &buildings[i].left, &buildings[i].height, &buildings[i].right);
    }

    // Sort buildings by left x-coordinate
    qsort(buildings, n, sizeof(struct Building), compare);

    // Compute skyline
    int prevHeight = 0;
    printf("%d ", buildings[0].left);
    printf("%d ", buildings[0].height);

    for (int i = 1; i <= n; i++)
    {
        if (i < n && buildings[i].left == buildings[i - 1].right)
        {
            // Continue previous building
            prevHeight = buildings[i - 1].height;
        }
        else
        {
            // Vertical line down
            printf("%d ", buildings[i - 1].right);
            printf("%d ", prevHeight);

            if (i < n)
            {
                // Start new building
                printf("%d ", buildings[i].left);
                printf("%d ", buildings[i].height);
                prevHeight = buildings[i].height;
            }
        }
    }

    // End with vertical line down
    printf("0");

    return 0;
}