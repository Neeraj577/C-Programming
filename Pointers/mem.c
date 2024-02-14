#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 50;
    int *b = &a;
    printf("Value of a: %d\n", a);
    printf("Memory of *b: %p\n", &b);
    return 0;
}