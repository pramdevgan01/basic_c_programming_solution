/*************************************************************/
/*                                                           */
/*   File Name   : reverse_string_pointer.c                  */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reverses a lowercase string using only     */
/*                 pointer traversal (no array indexing).     */
/*                 Does not use strrev() or any helper        */
/*                 string functions.                          */
/*                                                           */
/*   Input Format:                                           */
/*       A lowercase string (no spaces).                     */
/*                                                           */
/*   Output Format:                                          */
/*       Reversed string in one line.                        */
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ length ≤ 100                                     */
/*                                                           */
/*   Sample Input:                                           */
/*       ashish                                               */
/*                                                           */
/*   Sample Output:                                          */
/*       hsihsa                                               */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    char str[101];
    scanf("%s", str);

    char *p = str;

    /* Move p to the end of the string */
    while (*p != '\0') {
        p++;
    }

    /* Move back to last valid character */
    p--;

    /* Print in reverse using pointer traversal */
    while (p >= str) {
        printf("%c", *p);
        p--;
    }

    return 0;
}
