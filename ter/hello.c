#include <stdio.h>
#include <unistd.h>

// Copy this template to start new c program
// int argc, char **argv

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("\tGive a filename. \n");
        return 1;
    }

    if (access(argv[1], F_OK) == -1)
    {
        printf("\tFile Does nnot exist. \n");
    }
    printf("You Typed: %s %s \n", argv[0], argv[1]);
    printf("There were %d arguments.\n", argc);
    printf("Hello World!\n");
    return 0;
}