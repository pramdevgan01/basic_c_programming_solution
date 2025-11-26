/*************************************************************/
/*                                                           */
/*   File Name   : fileutils.c                               */
/*   Author      : Param Vishwakarma                         */
/*   Description : Implements functions for counting number   */
/*                 of lines and characters in a given file.   */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "fileutils.h"

/*-----------------------------------------------------------*/
/*            Function to count lines in a file              */
/*-----------------------------------------------------------*/
int countLines(const char *filename)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
        return -1;  // error opening file

    int count = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n')
            count++;
    }

    /* If file is not empty, last line may not end with newline */
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);

    if (size > 0 && count == 0)
        count = 1;
    else if (size > 0 && ch != '\n')
        count++;

    fclose(fp);
    return count;
}

/*-----------------------------------------------------------*/
/*         Function to count characters in a file            */
/*-----------------------------------------------------------*/
int countCharacters(const char *filename)
{
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
        return -1;

    int count = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF) {
        count++;
    }

    fclose(fp);
    return count;
}
