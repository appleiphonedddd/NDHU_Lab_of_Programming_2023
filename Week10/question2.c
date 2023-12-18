#include <stdio.h>

typedef struct
{
    float x, y;
} Point;

typedef struct
{
    Point point;
    float slope;
} Line;

int main()
{

    Line line;
    Point point;

    // Read line
    scanf("%f, %f, %f", &line.point.x, &line.point.y, &line.slope);

    // Read point
    scanf("%f, %f", &point.x, &point.y);

    // Check if point is on the line
    // y - y1 = m(x - x1)
    float y = line.slope * (point.x - line.point.x) + line.point.y;

    if (y == point.y) {
        printf("Yes\n");
    }

    else {
        printf("No\n");
    }

    return 0;
}