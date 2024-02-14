#include <stdio.h>
#include <string.h>

// Student:
//   -name(String)
//   -id(string)
//   -age(int)
//  -grades(int array)

struct Student
{
    char name[30];
    char id[10];
    int age;
    char grades[4];
};

int main()
{
    struct Student Nick;

    strcpy(Nick.name, "Nick");
    strcpy(Nick.id, "012356789");
    Nick.age = 28;
    Nick.grades[0] = 98;
    Nick.grades[1] = 88;
    Nick.grades[2] = 78;
    Nick.grades[3] = 68;

    printf("\tName : %s\n", Nick.name);
    printf("\tAge is:\t%d\n", Nick.age);

    printf("\tid : %s\n", Nick.id);
    for (int i = 0; i < 4; i++)
    {
        printf("\tGrades[%d]: %d\n", i, Nick.grades[i]);
    }

    return 0;
}