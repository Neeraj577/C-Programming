#include <stdio.h>
#include <string.h>

union id
{
    int id_num;
    char name[20];
};

void show_id(union id id1);
void set_id(union id *id1);
int main()
{
    union id id1;
    set_id(&id1);
    show_id(id1);

    return 0;
}
void set_id(union id *id1)
{
    id1->id_num = 33;
    // strcpy(id1.name, "Shankar");
}
void show_id(union id id1)
{
    printf("Id num is: %d\n", id1.id_num);
    printf("Name: %s\n", id1.name);
}
