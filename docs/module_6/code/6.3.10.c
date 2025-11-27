/*************************************************************/
/*                                                           */
/*   File Name   : print_words_pointer.c                     */
/*   Author      : Param Vishwakarma                         */
/*   Description : Prints each word from a string on a new    */
/*                 line using ONLY pointer traversal. No      */
/*                 array indexing and no strtok() allowed.    */
/*                                                           */
/*   Input Format:                                           */
/*       A single line containing lowercase words separated   */
/*       by single spaces (no leading/trailing spaces).       */
/*                                                           */
/*   Output Format:                                          */
/*       Each word printed on a new line.                    */
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ string length ≤ 200                             */
/*                                                           */
/*   Sample Input:                                           */
/*       i love coding                                       */
/*                                                           */
/*   Sample Output:                                          */
/*       i                                                   */
/*       love                                                */
/*       coding                                              */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    char str[205];

    /* Read entire line including spaces */
    fgets(str, sizeof(str), stdin);

    char *p = str;

    while (*p != '\0') {

        /* Print characters of a word until space or end */
        while (*p != ' ' && *p != '\0' && *p != '\n') {
            putchar(*p);
            p++;
        }

        /* End of a word → print newline */
        putchar('\n');

        /* Skip the space if present */
        if (*p == ' ')
            p++;
    }

    return 0;
}
