#include <stdio.h>
#include <string.h>

// Example of typedef struct
//  Points

struct Point
{
    int x;
    int y:
};

int main()
{

    struct Point point;

    point.x = 5;
    point.y = 10;
    printf("\t p1.x: %d", point.x);
    printf("\t p1.y: %d", point.y);

    // printf("\tName : %s\n", Nick.name);
    // printf("\tAge is:\t%d\n", Nick.age);

    // printf("\tid : %s\n", Nick.id);
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("\tGrades[%d]: %d\n", i, Nick.grades[i]);
    // }

    return 0;
}