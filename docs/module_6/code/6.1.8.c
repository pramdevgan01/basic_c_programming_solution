/*************************************************************/
/*                                                           */
/*   File Name   : max_using_pointers.c                      */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reads two integers from the user and      */
/*                 determines the maximum value using        */
/*                 pointer variables for indirect access.    */
/*                                                           */
/*   Input       : Two integers separated by space           */
/*   Output      : Maximum is: <maximum_value>               */
/*                                                           */
/*   Constraints : Standard integer range                    */
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
    scanf("%d %d", &a, &b);

    /* Assign pointers */
    p1 = &a;
    p2 = &b;

    /*-------------------------------------------------------*/
    /* Compare using pointers                                */
    /*-------------------------------------------------------*/
    if (*p1 > *p2)
        printf("Maximum is: %d", *p1);
    else
        printf("Maximum is: %d", *p2);

    return 0;
}
