#include <stdio.h>
#include <stdlib.h>

#define MAX_BLOCKS 24

int blocks[MAX_BLOCKS];

void move(int a, int b)
{
    // Move block a onto block b
    // Return any blocks on top of a and b to initial position

    if (a != b)
    {
        blocks[a] = b;

        int prev = a;
        while (blocks[prev] != prev)
        {
            int next = blocks[prev];
            blocks[prev] = prev;
            prev = next;
        }

        prev = b;
        while (blocks[prev] != prev)
        {
            int next = blocks[prev];
            blocks[prev] = prev;
            prev = next;
        }
    }
}

void pile(int a, int b)
{
    // Pile blocks starting at a onto block b
    // Retain original order

    if (a != b)
    {
        int prev = a;
        while (blocks[prev] != prev)
        {
            int next = blocks[prev];
            blocks[prev] = b;
            prev = next;
        }
        blocks[prev] = b;

        int temp = blocks[b];
        blocks[b] = a;

        prev = temp;
        while (blocks[prev] != prev)
        {
            int next = blocks[prev];
            blocks[prev] = prev;
            prev = next;
        }
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        blocks[i] = i;
    }

    char command[10];

    while (1)
    {
        scanf("%s", command);
        if (command[0] == 'q')
        {
            break;
        }

        int a, b;
        scanf("%d %d", &a, &b);

        if (command[0] == 'm')
        {
            if (command[1] == 'o')
            {
                move(a, b);
            }
            else
            {
                pile(a, b);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d: ", i);
        int curr = i;
        while (blocks[curr] != curr)
        {
            printf("%d ", curr);
            curr = blocks[curr];
        }
        printf("\n");
    }

    return 0;
}