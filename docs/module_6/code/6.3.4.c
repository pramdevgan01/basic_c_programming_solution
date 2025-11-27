/*************************************************************/
/*                                                           */
/*   File Name   : count_vowels_pointer.c                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Counts the number of vowels in a string   */
/*                 using pointer traversal only.             */
/*                 No array indexing is used.                */
/*                                                           */
/*   Input Format:                                           */
/*       A single string                                     */
/*                                                           */
/*   Output Format:                                          */
/*       Number of vowels                                     */
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ length ≤ 100                                     */
/*                                                           */
/*   Sample Input:                                           */
/*       education                                            */
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
    scanf("%s", str);

    char *ptr = str;
    int count = 0;

    /* Traverse string using pointer */
    while (*ptr != '\0') {

        /* Check for vowels (both cases) */
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            count++;
        }

        ptr++;  /* Move pointer */
    }

    printf("%d", count);

    return 0;
}
