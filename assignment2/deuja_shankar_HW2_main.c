
#include <stdio.h>
#include "assignment2.h"
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    // instantiate and allocate memory to personalInfo struct
    // memory allocation according to the struct pointer size
    // suppose, int = 4 bytes
    // char = 1 byte

    personalInfo *info = malloc(sizeof(personalInfo));

    // check to see if the memory got allocated

    if (info == NULL)
        printf("Memory allocation unsuccessful.\n");
    else
        printf("%lu memory allocated successfully.\n", sizeof(personalInfo));
    // populate the struct with a pointer char array of argv
    info->firstName = argv[1];
    info->lastName = argv[2];
    info->studentID = 922403765;
    info->level = SENIOR;
    info->languages = KNOWLEDGE_OF_C | KNOWLEDGE_OF_JAVA | KNOWLEDGE_OF_PYTHON | KNOWLEDGE_OF_HTML;

    strncpy(info->message, argv[3], sizeof(info->message));

    // inject you struct data to writePersonalInfo.
    int writeInfo = writePersonalInfo(info);

    // check to see if the data got written
    if (writeInfo != 0)
    {
        printf("Error while writing info.");
    }
    else
    {
        printf("Successful");
    }

    // declare varibales and allocate buffer size using malloc
    const char *next;
    char *buffer = malloc(sizeof(char) * BLOCK_SIZE);

    int slen = 0;  // track the string length
    int index = 0; // track the index position on the buffer

    next = getNext(); // here getNext() returns char * of C strings

    // check through the char* from getNext() until it returns null, and commit it to the buffer
    while (next != NULL)
    {
        slen = strlen(next);
        for (int i = 0; i < slen; i++)
        {
            buffer[index] = next[i];
            index++;
            if (index == BLOCK_SIZE)
            {
                commitBlock(buffer);
                strcpy(buffer, "");
                index = 0;
            }
        }

        next = getNext(); // getting next string
    }

    // only commit if the buffer is accessed
    if (index != 0)
    {
        commitBlock(buffer);
    }

    // call function chectIt
    writeInfo = checkIt();

    // free memory
    free(buffer);
    free(info);
    return writeInfo;
}