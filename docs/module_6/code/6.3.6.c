/*************************************************************/
/*                                                           */
/*   File Name   : concat_pointer.c                          */
/*   Author      : Param Vishwakarma                         */
/*   Description : Concatenates two strings using pointer     */
/*                 traversal only (no strcat, no indexing).   */
/*                                                           */
/*   Input Format:                                           */
/*       Two strings (no spaces).                            */
/*                                                           */
/*   Output Format:                                          */
/*       Concatenated string                                  */
/*                                                           */
/*   Constraints:                                            */
/*       Combined length ≤ 200                                */
/*                                                           */
/*   Sample Input:                                           */
/*       Hello World                                          */
/*                                                           */
/*   Sample Output:                                          */
/*       HelloWorld                                           */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    char str1[201], str2[201];

    /* Read two strings */
    scanf("%s %s", str1, str2);

    char *p1 = str1;
    char *p2 = str2;

    /* Move p1 to the end of first string */
    while (*p1 != '\0') {
        p1++;
    }

    /* Copy characters from str2 to end of str1 */
    while (*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }

    /* Null terminate the final string */
    *p1 = '\0';

    /* Print concatenated result */
    printf("%s", str1);

    return 0;
}
