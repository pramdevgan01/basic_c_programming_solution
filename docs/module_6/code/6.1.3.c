/*************************************************************/
/*                                                           */
/*   File Name   : array_pointer.c                           */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to input and display array values */
/*                 using pointers. The array elements are    */
/*                 stored in a normal integer array, and     */
/*                 pointer arithmetic is used to access and  */
/*                 print each value.                          */
/*                                                           */
/*   Input       : First line -> integer n (array size)      */
/*                 Next n lines -> array elements            */
/*                                                           */
/*   Output      : Array Values: e1 e2 e3 ... en             */
/*                                                           */
/*   Constraints : 1 ≤ n ≤ 1000                              */
/*                 Array values: -10^6 to 10^6               */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int n;
    int arr[1000];
    int *p;   /* Pointer for traversal */

    /*-------------------------------------------------------*/
    /*  Read array size                                      */
    /*-------------------------------------------------------*/
    scanf("%d", &n);

    /*-------------------------------------------------------*/
    /*  Read array elements using pointer                    */
    /*-------------------------------------------------------*/
    p = arr;  /* Point to start of array */

    for (int i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }

    /*-------------------------------------------------------*/
    /*  Display array using pointer                          */
    /*-------------------------------------------------------*/
    printf("Array Values: ");
    for (int i = 0; i < n; i++) {
        printf("%d", *(p + i));

        if (i < n - 1)
            printf(" ");  /* space between values */
    }

    return 0;
}
