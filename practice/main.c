/**************************************************************
 * Class::  CSC-415-04 Spring 2024
 * Name::  Shankar Deuja
 * Student ID::  922403765
 * GitHub-Name::  Neeraj577
 * Project:: Assignment 2 – Stucture in Memory and Buffering
 *
 * File:: deuja_shankar_HW2_main.c
 *
 * Description::
 *
 **************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assignment2.h"

int main(int argc, char *argv[])
{
    // Allocate memory for personalInfo structure
    personalInfo *info = malloc(sizeof(personalInfo));

    // Check if memory allocation is successful
    if (info == NULL)
        printf("Memory allocation unsuccessful.\n");
    else
        printf("%lu memory allocated successfully.\n", sizeof(personalInfo));

    // Populate the struct fields with command line arguments and predefined values
    info->firstName = argv[1];
    info->lastName = argv[2];
    info->studentID = 922403765;
    info->level = SENIOR;
    info->languages = KNOWLEDGE_OF_C | KNOWLEDGE_OF_JAVA | KNOWLEDGE_OF_PYTHON | KNOWLEDGE_OF_HTML;

    // Copy the third command-line parameter to the message field
    strncpy(info->message, argv[3], sizeof(info->message));

    // Write personal information structure using writePersonalInfo function
    int writeInfo = writePersonalInfo(info);

    // Check if writing information is successful
    if (writeInfo != 0)
    {
        printf("Error while writing info.");
    }
    else
    {
        printf("Successful");
    }

    // Declare variables and allocate buffer size using malloc
    const char *next;
    char *buffer = malloc(sizeof(char) * BLOCK_SIZE);

    int slen = 0;  // Track the string length
    int index = 0; // Track the index position on the buffer

    // Get strings from getNext function until it returns null and commit them to the buffer
    next = getNext();
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
        next = getNext(); // Get next string
    }

    // Commit buffer if accessed
    if (index != 0)
    {
        commitBlock(buffer);
    }

    // Call checkIt function
    writeInfo = checkIt();

    // Free allocated memory
    free(buffer);
    free(info);

    return writeInfo;
}
