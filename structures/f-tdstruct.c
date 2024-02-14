#include <stdio.h>
#include <string.h>

// We passed struct student as argument to a function
// Tpyedef Student:
//   -name(String)
//   -id(string)
//   -age(int)
//  -grades(int array)

typedef struct
{
    char name[30];
    char id[10];
    int age;
    char grades[4];
} Student;

typedef struct
{
    int x;
    int y:
} Point;

void print_student(Student student);

int main()
{
    Student Nick;
    Point p1, p2;

    strcpy(Nick.name, "Nick");
    strcpy(Nick.id, "012356789");
    Nick.age = 28;
    Nick.grades[0] = 98;
    Nick.grades[1] = 88;
    Nick.grades[2] = 78;
    Nick.grades[3] = 68;

    print_struct(Nick);

    Point p1 = {5, 10};
    printf("\tp1.x: %d\n", p1.x);

    return 0;
}

void print_student(Student student)
{
    printf("\tName : %s\n", student.name);
    printf("\tAge is:\t%d\n", student.age);

    printf("\tid : %s\n", student.id);
    for (int i = 0; i < 4; i++)
    {
        printf("\tGrades[%d]: %d\n", i, student.grades[i]);
    }
};