/*************************************************************
 *                                                           *
 *   File Name   : func_ptr_pass.c                           *
 *   Author      : Param Vishwakarma                         *
 *   Description : Demonstrates passing a function as a      *
 *                 parameter using function pointers.        *
 *                 The main program reads two integers and   *
 *                 passes them along with a function pointer *
 *                 to another function which invokes it.     *
 *                                                           *
 *   Input Format:                                           *
 *       Two integers                                        *
 *                                                           *
 *   Output Format:                                          *
 *       Result of the called function                       *
 *                                                           *
 *   Constraints:                                            *
 *       -1000 ≤ input ≤ 1000                                *
 *                                                           *
 *   Sample Input:                                           *
 *       5 3                                                 *
 *                                                           *
 *   Sample Output:                                          *
 *       15                                                  *
 *                                                           *
 *   Date        : November 2025                             *
 *                                                           *
 *************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Function to multiply two integers                         */
/*-----------------------------------------------------------*/
int multiply(int a, int b)
{
    return a * b;
}

/*-----------------------------------------------------------*/
/* Higher-order function that accepts another function       */
/*-----------------------------------------------------------*/
int operate(int x, int y, int (*func)(int, int))
{
    return func(x, y);   /* call the passed function */
}

int main(void)
{
    int a, b;

    /* Read two integers */
    scanf("%d %d", &a, &b);

    /* Pass multiply() as a function pointer */
    int result = operate(a, b, multiply);

    /* Display result */
    printf("%d", result);

    return 0;
}
