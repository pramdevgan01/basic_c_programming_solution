/*************************************************************/
/*                                                           */
/*   File Name   : compare_strings_pointer.c                 */
/*   Author      : Param Vishwakarma                         */
/*   Description : Compares two lowercase strings using only  */
/*                 pointers (no array indexing, no strcmp()). */
/*                 Strings are considered equal only if both  */
/*                 characters match and both end together.    */
/*                                                           */
/*   Input Format:                                           */
/*       Line 1: first lowercase string                      */
/*       Line 2: second lowercase string                     */
/*                                                           */
/*   Output Format:                                          */
/*       "Equal" or "Not Equal"                              */
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ each string length ≤ 100                        */
/*                                                           */
/*   Sample Input:                                           */
/*       string                                               */
/*       string                                               */
/*                                                           */
/*   Sample Output:                                          */
/*       Equal                                                */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    char str1[101], str2[101];

    /* Read both strings */
    scanf("%s", str1);
    scanf("%s", str2);

    /* Pointer variables to traverse the strings */
    char *p1 = str1;
    char *p2 = str2;

    /* Compare character-by-character using pointers */
    while (*p1 != '\0' && *p2 != '\0') {
        if (*p1 != *p2) {
            printf("Not Equal");
            return 0;
        }
        p1++;
        p2++;
    }

    /* If both end together, they are equal */
    if (*p1 == '\0' && *p2 == '\0')
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}
