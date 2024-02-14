#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *a;
    int length = 0;

    printf("Enter a length:  ");
    scanf("%d", &length);

    a = malloc(length * sizeof(int));

    for (int i = 0; i < length; i++)
        a[i] = i;

    for (int i = 0; i < length; i++)
        printf("a[%d]=%d\n", i, a[i]);

    free(a);

    return 0;
}