/*************************************************************/
/*                                                           */
/*   File Name   : sum_using_pointers.c                      */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reads two integers and computes their     */
/*                 sum using pointer variables. The addition */
/*                 is performed indirectly via pointers.     */
/*                                                           */
/*   Input       : Two space-separated integers               */
/*   Output      : Integer sum of the two numbers            */
/*                                                           */
/*   Constraints : -10^4 ≤ a, b ≤ 10^4                       */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int a, b, sum;
    int *p1, *p2;

    /*-------------------------------------------------------*/
    /* Read two integers from input                          */
    /*-------------------------------------------------------*/
    scanf("%d %d", &a, &b);

    /* Assign pointers to the variables */
    p1 = &a;
    p2 = &b;

    /*-------------------------------------------------------*/
    /* Perform addition using pointer dereferencing           */
    /*-------------------------------------------------------*/
    sum = (*p1) + (*p2);

    /* Print result */
    printf("%d", sum);

    return 0;
}
