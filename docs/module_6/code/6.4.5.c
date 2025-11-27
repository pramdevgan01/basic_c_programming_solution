/*************************************************************/
/*                                                           */
/*   File Name   : reverse_string.c                          */
/*   Author      : Param Vishwakarma                         */
/*   Description : This program demonstrates dynamic memory  */
/*                 allocation to read a string from the user */
/*                 and print its reverse using pointer       */
/*                 traversal.                                */
/*                                                           */
/*   Input        : First line  - integer n (string length)  */
/*                  Second line - string of length n         */
/*                                                           */
/*   Output       : Reversed string                          */
/*                                                           */
/*   Constraints  : 1 ≤ n ≤ 1000                             */
/*                 String contains ASCII printable chars     */
/*                                                           */
/*   Date         : November 2025                            */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include <stdlib.h>   /* Required for malloc(), free() */

int main(void)
{
    int n;

    /*-----------------------------------------------------*/
    /*  Read length of string                              */
    /*-----------------------------------------------------*/
    scanf("%d", &n);

    /*-----------------------------------------------------*/
    /*  Allocate memory dynamically for string             */
    /*-----------------------------------------------------*/
    char *str = (char *)malloc((n + 1) * sizeof(char));

    /* Safety check for memory allocation */
    if (str == NULL) {
        return 0;   /* Memory allocation failed */
    }

    /*-----------------------------------------------------*/
    /*  Read the string                                    */
    /*-----------------------------------------------------*/
    scanf("%s", str);

    /*-----------------------------------------------------*/
    /*  Print the string in reverse using pointers         */
    /*-----------------------------------------------------*/
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", *(str + i));  
    }

    /*-----------------------------------------------------*/
    /*  Free allocated memory                              */
    /*-----------------------------------------------------*/
    free(str);

    return 0;
}
