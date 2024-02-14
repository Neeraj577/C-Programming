#include <stdio.h>

void swap(int *a, int *b);
int main()
{
    int x, y;
    printf("Enter teo number :");
    scanf("%d %d", &x, &y);
    printf("x: %d\t y:%d\n", x, y);
    printf("&x: %p\t &y:%p\n", &x, &y);
    swap(&x, &y);
    printf("x: %d\t y:%d\n", x, y);
    printf("&x: %p\t &y:%p\n", &x, &y);

    return 0;
}

void swap(int *a, int *b)
{
    printf("a: %p\t b:%p\n", a, b);
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}