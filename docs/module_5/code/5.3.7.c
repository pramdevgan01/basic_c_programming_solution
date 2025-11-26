/*************************************************************/
/*                                                           */
/*   File Name   : Main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates the register storage class by*/
/*                 using a register variable as loop counter */
/*                 and printing squares of first n numbers.  */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int n;

    /* Read input */
    scanf("%d", &n);

    /*-------------------------------------------------------*/
    /* register variable used in loop counter                 */
    /*-------------------------------------------------------*/
    register int i;

    /* Print squares from 1 to n */
    for (i = 1; i <= n; i++)
    {
        printf("%d", i * i);

        if (i < n)   /* Avoid trailing space */
            printf(" ");
    }

    return 0;
}
