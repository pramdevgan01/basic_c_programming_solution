/*************************************************************/
/*                                                           */
/*   File Name   : smallest_number.c                         */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to find the smallest of two       */
/*                 integers using pointers. Two integers     */
/*                 are read from input, their addresses are  */
/*                 stored in pointers, and comparison is     */
/*                 done via pointer dereferencing.           */
/*                                                           */
/*   Input       : Two integers (each on a separate line)    */
/*   Output      : "<smaller number> is the smallest number" */
/*                                                           */
/*   Constraints : -10^6 ≤ number ≤ 10^6                     */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int a, b;
    int *p1, *p2;

    /*-------------------------------------------------------*/
    /* Read two integers                                     */
    /*-------------------------------------------------------*/
    scanf("%d", &a);
    scanf("%d", &b);

    /*-------------------------------------------------------*/
    /* Assign pointers                                       */
    /*-------------------------------------------------------*/
    p1 = &a;
    p2 = &b;

    /*-------------------------------------------------------*/
    /* Compare using pointers                                */
    /*-------------------------------------------------------*/
    if (*p1 < *p2)
        printf("%d is the smallest number", *p1);
    else
        printf("%d is the smallest number", *p2);

    return 0;
}
