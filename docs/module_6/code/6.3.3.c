/*************************************************************/
/*                                                           */
/*   File Name   : first_occurrence_pointer.c                */
/*   Author      : Param Vishwakarma                         */
/*   Description : Finds the first occurrence of a character */
/*                 in a string using pointers only. No       */
/*                 array indexing or string library functions*/
/*                 are used.                                 */
/*                                                           */
/*   Input Format:                                           */
/*       1. A string (no spaces OR using space with %s logic)*/
/*       2. A character to search for                        */
/*                                                           */
/*   Output Format:                                          */
/*       Index of first occurrence (0-based) or -1           */
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ length ≤ 100                                    */
/*                                                           */
/*   Sample Input:                                           */
/*       pointer i                                           */
/*                                                           */
/*   Sample Output:                                          */
/*       2                                                   */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    char str[101];
    char ch;

    /* Read string and character */
    scanf("%s %c", str, &ch);

    char *ptr = str;
    int index = 0;

    /* Traverse using pointer */
    while (*ptr != '\0') {
        if (*ptr == ch) {
            printf("%d", index);
            return 0;
        }
        ptr++;
        index++;
    }

    /* If not found */
    printf("-1");

    return 0;
}
