#include <stdio.h>
#define BUFFER_SIZE 5

int main(void)
{
    int buffer[BUFFER_SIZE];

    for (int i = 0; i < BUFFER_SIZE; i++)
    {
        printf("Enter :");
        scanf("%d", &buffer[i]);
    }
    int total = 0;
    for (int i = 0; i < BUFFER_SIZE; i++)
    {
        printf("Buffer[%d]: %d\n", i, buffer[i]);
        total += buffer[i];
    }
    printf("Average of Buffer: %d\n", total / BUFFER_SIZE);

    // printf("%d\n", BUFFER_SIZE);
    return 0;
}