/*************************************************************/
/*                                                           */
/*   File Name   : count_vowels_consonants.c                 */
/*   Author      : Param Vishwakarma                         */
/*   Description : Counts vowels and consonants in a string   */
/*                 using pointer traversal and dereferencing. */
/*                 No array indexing is used.                */
/*                                                           */
/*   Input Format:                                           */
/*       A single string (no spaces).                        */
/*                                                           */
/*   Output Format:                                          */
/*       Vowels: X                                           */
/*       Consonants: Y                                       */
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ length ≤ 100                                     */
/*       Only A–Z and a–z allowed.                           */
/*                                                           */
/*   Sample Input:                                           */
/*       Pointer                                              */
/*                                                           */
/*   Sample Output:                                          */
/*       Vowels: 3                                            */
/*       Consonants: 4                                        */
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
    int vowels = 0, consonants = 0;

    while (*p != '\0') {

        char ch = *p;

        /* Convert to lowercase manually */
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        /* Count vowel or consonant */
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }

        p++;  /* Move pointer forward */
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);

    return 0;
}
