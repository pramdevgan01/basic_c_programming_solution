/*************************************************************
 *                                                           *
 *   File Name   : func_ptr_add.c                            *
 *   Author      : Param Vishwakarma                         *
 *   Description : Demonstrates the use of a function pointer*
 *                 to call an addition function that adds    *
 *                 two integers and prints the result.       *
 *                                                           *
 *   Constraints :                                           *
 *       -1000 ≤ a, b ≤ 1000                                 *
 *                                                           *
 *   Sample Input :                                          *
 *       10 20                                               *
 *                                                           *
 *   Sample Output :                                         *
 *       30                                                  *
 *                                                           *
 *   Date        : November 2025                             *
 *                                                           *
 *************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Function: add                                             */
/* Description: Returns the sum of two integers              */
/*-----------------------------------------------------------*/
int add(int x, int y)
{
    return x + y;
}

int main(void)
{
    int a, b;

    /* Read two integers */
    scanf("%d %d", &a, &b);

    /*-------------------------------------------------------*/
    /* Create a function pointer that points to add()        */
    /*-------------------------------------------------------*/
    int (*fp)(int, int) = add;

    /*-------------------------------------------------------*/
    /* Call the function using function pointer              */
    /*-------------------------------------------------------*/
    int result = fp(a, b);

    /* Print the result */
    printf("%d", result);

    return 0;
}
