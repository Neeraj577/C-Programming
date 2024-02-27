#include <stdio.h>
#include <string.h>

// Example of typedef struct
//  Points

typedef struct
{
    int x;
    int y;
    int z;
} Point;

void print_points(Point points[]);

int main()
{

    Point p1 = {3, 4};
    printf("\t p1.x: %d\n", p1.x);
    printf("\t p1.y: %d\n", p1.y);

    Point points[10];
    for (int i = 0; i < 10; i++)
    {
        points[i].x = i;
        points[i].y = 10 - i;
        points[i].z = points[i].y - points[i].x;
    }
    print_points(points);

    return 0;
}

void print_points(Point points[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("p%d = (%d,%d,%d)\n", i + 1, points[i].x, points[i].y, points[i].z);
    }
};