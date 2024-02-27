#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// We passed struct student as argument to a function
// Tpyedef Student:
//   -name(String)
//   -id(string)
//   -age(int)
//  -grades(int array)

// typedef struct
// {
//     char name[30];
//     char id[10];
//     int age;
//     char grades[4];
// } Student;

typedef struct
{
    int *array;
} Data;

typedef struct
{
    int x;
    int y;
} Point;

int main(void)
{

    Point p1 = {5, 10};
    Point p2 = {.y = 6, .x = 9};

    printf("\tp1.x: %d\n", p1.x);
    printf("\tp1.x: %d\n\n", p1.y);

    printf("\tp2.y: %d\n", p2.x);
    printf("\tp2.y: %d\n", p2.y);

    p1 = p2;
    printf("\tp2.y: %d\n", p2.x);
    printf("\tp2.y: %d\n", p2.y);

    Data x;
    Data y;

    x.array = malloc(sizeof(int) * 5);
    y.array = malloc(sizeof(int) * 5);
    x.array[0] = 1;
    x.array[1] = 2;
    x.array[2] = 3;
    x.array[3] = 4;
    x.array[4] = 5;

    y.array[0] = 9;
    y.array[1] = 8;
    y.array[2] = 7;
    y.array[3] = 6;
    y.array[4] = 5;

    x = y;
    // pointers to the array has changed

    for (int i = 0; i < 5; i++)
    {
        printf("x.array[%d] = %d\n", i, x.array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("y.array[%d] = %d\n", i, y.array[i]);
    }

    return 0;
}

// void print_student(Student student)
// {
//     printf("\tName : %s\n", student.name);
//     printf("\tAge is:\t%d\n", student.age);

//     printf("\tid : %s\n", student.id);
//     for (int i = 0; i < 4; i++)
//     {
//         printf("\tGrades[%d]: %d\n", i, student.grades[i]);
//     }
// };