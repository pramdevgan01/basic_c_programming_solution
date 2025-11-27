/*************************************************************/
/*                                                           */
/*   File Name   : count_vowels.c                            */
/*   Author      : Param Vishwakarma                         */
/*   Description : Counts vowels in a given text using       */
/*                 pointers. The program reads a string and  */
/*                 uses a pointer to iterate through each    */
/*                 character and count vowels.               */
/*                                                           */
/*   Input       : A single line of text (letters only)      */
/*   Output      : Total no of vowels - "<count>"            */
/*                                                           */
/*   Constraints : 1 ≤ length ≤ 1000                         */
/*                 Text contains only A–Z and a–z            */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    char str[1001];
    char *ptr = str;
    int count = 0;

    /*-------------------------------------------------------*/
    /* Read the input text line (since no spaces mentioned)  */
    /*-------------------------------------------------------*/
    scanf("%s", str);

    /*-------------------------------------------------------*/
    /* Iterate using pointer and count vowels                */
    /*-------------------------------------------------------*/
    while (*ptr != '\0')
    {
        char ch = *ptr;

        /* Check for vowels (both uppercase & lowercase) */
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            count++;
        }

        ptr++;   /* move pointer to next char */
    }

    /*-------------------------------------------------------*/
    /* Print result                                           */
    /*-------------------------------------------------------*/
    printf("Total no of vowels - \"%d\"", count);

    return 0;
}
