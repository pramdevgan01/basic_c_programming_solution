/*************************************************************/
/*                                                           */
/*   File Name   : text_length.c                             */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to compute the length of a        */
/*                 given text using pointers. The input is   */
/*                 a single word without spaces. A pointer   */
/*                 iterates character-by-character until the */
/*                 null terminator is reached, counting the  */
/*                 number of characters.                     */
/*                                                           */
/*   Input       : A single string (no spaces).              */
/*   Output      : Text length in the format:                */
/*                 Text length - "<length>"                  */
/*                                                           */
/*   Constraints : 1 ≤ length ≤ 1000 characters              */
/*                 Only printable characters allowed.        */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    char str[1001];   /* Buffer for input text */
    char *p;          /* Pointer for traversal */
    int length = 0;   /* Length counter */

    /*-------------------------------------------------------*/
    /*  Read input string (no spaces allowed)                */
    /*-------------------------------------------------------*/
    scanf("%s", str);

    /*-------------------------------------------------------*/
    /*  Initialize pointer to start of the string            */
    /*-------------------------------------------------------*/
    p = str;

    /*-------------------------------------------------------*/
    /*  Count characters using pointer traversal             */
    /*-------------------------------------------------------*/
    while (*p != '\0') {
        length++;
        p++;
    }

    /*-------------------------------------------------------*/
    /*  Display output in required format                    */
    /*-------------------------------------------------------*/
    printf("Text length - \"%d\"", length);

    return 0;
}
