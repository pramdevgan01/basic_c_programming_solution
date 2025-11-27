/*************************************************************/
/*                                                           */
/*   File Name   : store_print_array.c                       */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to store n elements in an array   */
/*                 and print them using pointer operations.  */
/*                 The pointer 'pt' is used to input and     */
/*                 display array values.                     */
/*                                                           */
/*   Input Format:                                           */
/*      - First line: integer n                              */
/*      - Next n lines: array elements                       */
/*                                                           */
/*   Output Format:                                          */
/*      element - i : value                                  */
/*                                                           */
/*   Constraints:                                            */
/*      1 ≤ n ≤ 100                                          */
/*      Elements between -10⁴ and 10⁴                        */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int n;
    int arr[100];
    int *pt = arr;   /* Pointer pointing to the array */

    /*---------------------------*/
    /*       Read array size     */
    /*---------------------------*/
    scanf("%d", &n);

    /*---------------------------------------*/
    /*  Read array elements using pointer pt */
    /*---------------------------------------*/
    for (int i = 0; i < n; i++) {
        scanf("%d", (pt + i));   /* Same as &arr[i] */
    }

    /*---------------------------------------*/
    /*  Print elements using pointer pt      */
    /*---------------------------------------*/
    for (int i = 0; i < n; i++) {
        printf("element - %d : %d\n", i, *(pt + i));
    }

    return 0;
}
