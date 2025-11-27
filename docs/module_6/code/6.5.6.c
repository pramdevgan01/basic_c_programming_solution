/*************************************************************
 *                                                           *
 *   File Name   : array_func_ptr.c                          *
 *   Author      : Param Vishwakarma                         *
 *   Description : Demonstrates the use of an array of       *
 *                 function pointers to perform arithmetic   *
 *                 operations (addition, subtraction,        *
 *                 multiplication).                          *
 *                                                           *
 *   Input Format:                                           *
 *       Two integers a and b                                *
 *       One integer op (0 = add, 1 = subtract, 2 = multiply)*
 *                                                           *
 *   Output Format:                                          *
 *       Result of the operation OR "Invalid choice"         *
 *                                                           *
 *   Constraints:                                            *
 *       -1000 ≤ a, b ≤ 1000                                 *
 *       0 ≤ op ≤ 2                                          *
 *                                                           *
 *   Sample Input:                                           *
 *       4 5 2                                               *
 *                                                           *
 *   Sample Output:                                          *
 *       20                                                  *
 *                                                           *
 *   Date        : November 2025                             *
 *                                                           *
 *************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Arithmetic operations                                     */
/*-----------------------------------------------------------*/
int add(int x, int y)       { return x + y; }
int subtract(int x, int y)  { return x - y; }
int multiply(int x, int y)  { return x * y; }

int main(void)
{
    int a, b, op;

    /* Read input values */
    scanf("%d %d %d", &a, &b, &op);

    /*-------------------------------------------------------*/
    /* Array of function pointers                            */
    /*   fp[0] → add                                         */
    /*   fp[1] → subtract                                    */
    /*   fp[2] → multiply                                    */
    /*-------------------------------------------------------*/
    int (*fp[3])(int, int) = { add, subtract, multiply };

    /*-------------------------------------------------------*/
    /* Validate operation index                              */
    /*-------------------------------------------------------*/
    if (op < 0 || op > 2)
    {
        printf("Invalid choice");
        return 0;
    }

    /*-------------------------------------------------------*/
    /* Call the correct function from the array              */
    /*-------------------------------------------------------*/
    int result = fp[op](a, b);

    /* Print result */
    printf("%d", result);

    return 0;
}
