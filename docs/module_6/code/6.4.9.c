/*************************************************************/
/*                                                           */
/*   File Name   : array_function_pointer.c                  */
/*   Author      : Param Vishwakarma                         */
/*   Description : Applies square() or cube() on each element*/
/*                 of an integer array using a function      */
/*                 pointer. The operation is selected based  */
/*                 on user input (1 = square, 2 = cube).     */
/*                                                           */
/*   Input       : n (number of elements)                    */
/*                 n space-separated integers                */
/*                 flag (1 or 2)                             */
/*                                                           */
/*   Output      : Modified array after applying operation   */
/*                                                           */
/*   Constraints : 1 ≤ n ≤ 20                                */
/*                 -100 ≤ elements ≤ 100                     */
/*                 flag ∈ {1, 2}                             */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*  Operation functions                                      */
/*-----------------------------------------------------------*/
int square(int x) {
    return x * x;
}

int cube(int x) {
    return x * x * x;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[20];

    /* Read array elements */
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int flag;
    scanf("%d", &flag);

    /*-------------------------------------------------------*/
    /*  Declare function pointer                             */
    /*-------------------------------------------------------*/
    int (*operation)(int);

    /* Assign correct function based on flag */
    if (flag == 1)
        operation = square;
    else
        operation = cube;

    /*-------------------------------------------------------*/
    /*  Apply function to each element                       */
    /*-------------------------------------------------------*/
    for (int i = 0; i < n; i++) {
        arr[i] = operation(arr[i]);
    }

    /*-------------------------------------------------------*/
    /*  Print modified array                                 */
    /*-------------------------------------------------------*/
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(" ");
    }

    return 0;
}
