/*************************************************************/
/*                                                           */
/*   File Name   : to_lower_pointer.c                        */
/*   Author      : Param Vishwakarma                         */
/*   Description : Converts a string to lowercase using       */
/*                 pointer traversal only (no indexing).      */
/*                                                           */
/*   Input Format:                                           */
/*       A single string (may contain uppercase letters)      */
/*                                                           */
/*   Output Format:                                          */
/*       Lowercase version of the string                      */
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ length ≤ 100                                     */
/*                                                           */
/*   Sample Input:                                           */
/*       OpenAI                                               */
/*                                                           */
/*   Sample Output:                                          */
/*       openai                                               */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    char str[101];
    scanf("%s", str);

    char *ptr = str;

    /* Convert each character using pointer */
    while (*ptr != '\0') {

        /* If uppercase (A–Z), convert to lowercase */
        if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = *ptr + ('a' - 'A');  /* ASCII shift */
        }

        ptr++;  /* Move pointer forward */
    }

    printf("%s", str);

    return 0;
}
