/*************************************************************
 *                                                           *
 *   File Name   : comparator.c                              *
 *   Author      : Param Vishwakarma                         *
 *   Description : Demonstrates using function pointers to   *
 *                 choose between two comparator functions:  *
 *                 min() and max(). The chosen function is   *
 *                 invoked dynamically based on user input.  *
 *                                                           *
 *   Input Format:                                           *
 *       Two integers and a string ("min" or "max")          *
 *                                                           *
 *   Output Format:                                          *
 *       <result>                                            *
 *       or "Invalid operation"                              *
 *                                                           *
 *   Constraints:                                            *
 *       -1000 ≤ values ≤ 1000                               *
 *                                                           *
 *   Sample Input:                                           *
 *       10 20 max                                           *
 *                                                           *
 *   Sample Output:                                          *
 *       20                                                  *
 *                                                           *
 *   Date        : November 2025                             *
 *                                                           *
 *************************************************************/

#include <stdio.h>
#include <string.h>

/*-----------------------------------------------------------*/
/* Returns the smaller of two integers                       */
/*-----------------------------------------------------------*/
int findMin(int a, int b)
{
    return (a < b) ? a : b;
}

/*-----------------------------------------------------------*/
/* Returns the larger of two integers                        */
/*-----------------------------------------------------------*/
int findMax(int a, int b)
{
    return (a > b) ? a : b;
}

int main(void)
{
    int x, y;
    char op[10];

    /* Read inputs */
    scanf("%d %d %s", &x, &y, op);

    /* Declare function pointer */
    int (*cmp)(int, int) = NULL;

    /* Decide which comparator to use */
    if (strcmp(op, "min") == 0)
        cmp = findMin;
    else if (strcmp(op, "max") == 0)
        cmp = findMax;
    else {
        printf("Invalid operation");
        return 0;
    }

    /* Call the selected function */
    int result = cmp(x, y);

    /* Print result */
    printf("%d", result);

    return 0;
}
