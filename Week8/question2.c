#include <stdio.h>

#define MAX_N 100

int isSafe(int x, int y, int n, int maze[MAX_N][MAX_N])
{
    return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 0);
}

int solveMaze(int x, int y, int n, int maze[MAX_N][MAX_N])
{
    // If reached the destination
    if (x == n - 1 && y == n - 1)
    {
        return 1;
    }

    // Try moving in all four directions
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    for (int i = 0; i < 4; i++)
    {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (isSafe(newX, newY, n, maze))
        {
            // Mark the current cell as visited
            maze[newX][newY] = 2;

            // Recursively check if a path exists from the new cell
            if (solveMaze(newX, newY, n, maze))
            {
                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    int maze[MAX_N][MAX_N];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &maze[i][j]);
        }
    }

    // Starting from the top-left corner (0, 0)
    if (solveMaze(0, 0, n, maze))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
