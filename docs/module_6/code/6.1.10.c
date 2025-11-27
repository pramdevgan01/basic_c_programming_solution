/*************************************************************/
/*                                                           */
/*   File Name   : max_using_pointers.c                      */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reads an array of integers and finds the  */
/*                 maximum value using pointer dereferencing */
/*                 instead of direct indexing.               */
/*                                                           */
/*   Input       : First line  - integer n (size of array)   */
/*                 Second line - n integers                  */
/*   Output      : Maximum value in the array                */
/*                                                           */
/*   Constraints : 1 ≤ n ≤ 100                               */
/*                 -10^4 ≤ A[i] ≤ 10^4                       */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int n;
    int arr[100];

    /*-------------------------------------------------------*/
    /* Read number of elements                               */
    /*-------------------------------------------------------*/
    scanf("%d", &n);

    /* Pointer to traverse array */
    int *p = arr;

    /*-------------------------------------------------------*/
    /* Read array elements                                    */
    /*-------------------------------------------------------*/
    for (int i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }

    /*-------------------------------------------------------*/
    /* Find maximum using pointer dereferencing               */
    /*-------------------------------------------------------*/
    int max = *p;  /* first element */

    for (int i = 1; i < n; i++) {
        if (*(p + i) > max) {
            max = *(p + i);
        }
    }

    /* Print maximum value */
    printf("%d", max);

    return 0;
}
