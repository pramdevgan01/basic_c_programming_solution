/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Uses functions from fileutils.h to read    */
/*                 a filename from user and print number of   */
/*                 lines and characters inside the file.      */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "fileutils.h"
#include "fileutils.c"

int main(void)
{
    char filename[100];

    /* Read filename */
    scanf("%s", filename);

    int lines = countLines(filename);
    int chars = countCharacters(filename);

    /* Handle file-open error */
    if (lines == -1 || chars == -1) {
        printf("Error: File not found or unreadable.");
        return 0;
    }

    /* Print results */
    printf("Lines: %d\n", lines);
    printf("Characters: %d", chars);

    return 0;
}
