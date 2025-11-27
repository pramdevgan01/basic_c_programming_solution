/*************************************************************/
/*                                                           */
/*   File Name   : swap_numbers.c                            */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates swapping of two integers     */
/*                 using pointers. The program reads two     */
/*                 integers, prints them before swapping,    */
/*                 swaps their values using pointer variables*/
/*                 and then prints the swapped values.       */
/*                                                           */
/*   Input       : Two integers separated by space           */
/*   Output      : Before swapping: a = X, b = Y             */
/*                 After swapping:  a = Y, b = X             */
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
    int temp;

    /*-------------------------------------------------------*/
    /* Read two integers from user                           */
    /*-------------------------------------------------------*/
    scanf("%d %d", &a, &b);

    /* Assign pointer addresses */
    p1 = &a;
    p2 = &b;

    /*-------------------------------------------------------*/
    /* Print before swapping                                 */
    /*-------------------------------------------------------*/
    printf("Before swapping: a = %d, b = %d\n", a, b);

    /*-------------------------------------------------------*/
    /* Swap values using pointers                            */
    /*-------------------------------------------------------*/
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    /*-------------------------------------------------------*/
    /* Print after swapping                                  */
    /*-------------------------------------------------------*/
    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}
