/***************************************************************/
/*                                                             */
/*   File Name   : gcd_recursive.c                             */
/*   Author      : Param Vishwakarma                           */
/*   Description : Program to compute the GCD (Greatest        */
/*                 Common Divisor) of two numbers using        */
/*                 recursion. The user provides two integers,  */
/*                 and the program applies Euclid's method.    */
/*                                                             */
/*   Date        : November 2025                               */
/*                                                             */
/***************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*   Function Prototype: gcd()                               */
/*   Uses Euclid's algorithm:                                */
/*   gcd(a, b) = gcd(b, a % b)                               */
/*   Base Case: gcd(a, 0) = a                                */
/*-----------------------------------------------------------*/
int gcd(int a, int b);

/*************************************************************/
/*                           main()                          */
/*************************************************************/
int main(void)
{
    int a, b;

    /* Read two integers */
    scanf("%d", &a);
    scanf("%d", &b);

    /* Compute GCD using recursion */
    int result = gcd(a, b);

    /* Print result in required format */
    printf("GCD: %d", result);

    return 0;
}

/*************************************************************/
/*   Function: gcd(int a, int b)                             */
/*                                                           */
/*   Description:                                            */
/*   - If b == 0, return a (base case).                      */
/*   - Else recursively call gcd(b, a % b).                  */
/*                                                           */
/*************************************************************/
int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
