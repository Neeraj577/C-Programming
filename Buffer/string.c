#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 256

int main()
{
    char **strings;
    // malloc(sizeof(char)* length);
    int total = 0;

    printf("Enter a number of Strings: ");
    scanf("%d", &total);

    strings = malloc(total * sizeof(char *));

    char buffer[BUFFER_SIZE];
    int length = 0;

    while (getchar() != '\n')
        ;

    printf("\n");
    for (int i = 0; i < total; i++)
    {
        printf("Enter string %d: ", i + 1);
        fgets(buffer, BUFFER_SIZE, stdin);
        length = strlen(buffer);
        buffer[length - 1] = '\0';
        strings[i] = malloc(sizeof(char) * total);
        strcpy(strings[i], buffer);
    }
    printf("\n Resulting strings array: \n\n");
    for (int i = 0; i < total; i++)
    {
        printf("Strings[%d]: %s\n", i, strings[i]);
    }
    printf("length:%d\n", length);
    printf("\n");

    return 0;
}