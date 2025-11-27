/*************************************************************
 *                                                           *
 *   File Name   : sort_three.c                              *
 *   Author      : Param Vishwakarma                         *
 *   Description : Accepts three integers from the user and  *
 *                 prints them in ascending order. Sorting   *
 *                 is performed using simple comparisons and *
 *                 swaps without using arrays.               *
 *                                                           *
 *   Constraints :                                            *
 *       - Inputs are integers in range -100000 to 100000     *
 *       - Duplicate values are allowed                       *
 *                                                           *
 *   Sample Input :                                           *
 *       30 10 20                                             *
 *                                                           *
 *   Sample Output :                                          *
 *       10 20 30                                             *
 *                                                           *
 *   Date        : November 2025                              *
 *                                                           *
 *************************************************************/

#include <stdio.h>

int main(void)
{
    int a, b, c;

    /*-------------------------------------------------------*/
    /*  Read three integers from the user                    */
    /*-------------------------------------------------------*/
    scanf("%d %d %d", &a, &b, &c);

    /*-------------------------------------------------------*/
    /*  Sorting using pairwise comparisons and swaps         */
    /*-------------------------------------------------------*/
    if (a > b) { int temp = a; a = b; b = temp; }
    if (a > c) { int temp = a; a = c; c = temp; }
    if (b > c) { int temp = b; b = c; c = temp; }

    /*-------------------------------------------------------*/
    /*  Print numbers in ascending order                     */
    /*-------------------------------------------------------*/
    printf("%d %d %d", a, b, c);

    return 0;
}
