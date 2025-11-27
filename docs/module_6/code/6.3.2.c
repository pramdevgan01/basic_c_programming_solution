/*************************************************************/
/*                                                           */
/*   File Name   : copy_string_pointer.c                     */
/*   Author      : Param Vishwakarma                         */
/*   Description : Copies one string into another using       */
/*                 pointers only (no array indexing, no       */
/*                 string library functions like strcpy()).   */
/*                                                           */
/*   Input Format:                                           */
/*       A single string (no spaces).                         */
/*                                                           */
/*   Output Format:                                          */
/*       Copied string: <copied_text>                         */
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ string length ≤ 100                              */
/*                                                           */
/*   Sample Input:                                           */
/*       chatgpt                                              */
/*                                                           */
/*   Sample Output:                                          */
/*       Copied string: chatgpt                               */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    char source[101], destination[101];
    char *srcPtr = source;
    char *destPtr = destination;

    /* Read input string */
    scanf("%s", source);

    /* Copy string using pointers */
    while (*srcPtr != '\0') {
        *destPtr = *srcPtr;    /* copy character */
        srcPtr++;
        destPtr++;
    }

    *destPtr = '\0';  /* Null-terminate copied string */

    /* Output the copied string */
    printf("Copied string: %s", destination);

    return 0;
}
