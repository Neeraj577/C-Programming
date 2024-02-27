#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main()
{
    char command[BUFFER_SIZE];
    char *args[BUFFER_SIZE / 2 + 1]; // Maximum arguments

    while (1)
    {
        printf("<Shell> ");
        fflush(stdout);

        // Read input command
        if (!fgets(command, BUFFER_SIZE, stdin))
            break;

        // Tokenize the command into arguments
        int num_args = 0;
        char *token = strtok(command, " \n");
        while (token != NULL)
        {
            args[num_args++] = token;
            token = strtok(NULL, " \n");
        }
        args[num_args] = NULL; // Null-terminate the argument list

        // Check for exit command
        if (strcmp(args[0], "exit") == 0)
            break;

        // Fork a child process
        pid_t pid = fork();

        if (pid < 0)
        {
            perror("Fork failed");
            exit(EXIT_FAILURE);
        }
        else if (pid == 0)
        {
            // Child process

            // Execute the command
            execvp(args[0], args);
            perror("Exec failed");
            exit(EXIT_FAILURE);
        }
        else
        {
            // Parent process

            // Wait for the child process to complete
            wait(NULL);
        }
    }

    return 0;
}
