/*************************************************************/
/*                                                           */
/*   File Name   : string_length_pointer.c                   */
/*   Author      : Param Vishwakarma                         */
/*   Description : Computes the length of a string using a    */
/*                 pointer. No array indexing and no          */
/*                 inbuilt functions like strlen() are used.  */
/*                                                           */
/*   Input Format:                                           */
/*       A single string (no spaces).                         */
/*                                                           */
/*   Output Format:                                          */
/*       Length of the string                                 */
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ string length ≤ 100                              */
/*                                                           */
/*   Sample Input:                                           */
/*       hello                                                */
/*                                                           */
/*   Sample Output:                                          */
/*       5                                                    */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    char str[101];
    char *p = str;
    int length = 0;

    /* Read string input (no spaces) */
    scanf("%s", str);

    /* Count characters using pointer traversal */
    while (*p != '\0') {
        length++;
        p++;
    }

    /* Print length */
    printf("%d", length);

    return 0;
}
