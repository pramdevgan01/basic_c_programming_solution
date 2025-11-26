/**************************************************************/
/*                                                            */
/*   File Name   : power.c                                    */
/*   Author      : Param Vishwakarma                          */
/*   Description : Computes the value of base^exponent using  */
/*                 a recursive function. The user provides    */
/*                 the base and exponent, and recursion       */
/*                 repeatedly multiplies base until the       */
/*                 exponent is reduced to zero.               */
/*                                                            */
/*   Date        : November 2025                              */
/*                                                            */
/**************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*  Recursive Function Prototype                             */
/*-----------------------------------------------------------*/
long long power(int base, int exponent);

/*************************************************************/
/*                           main()                          */
/*************************************************************/
int main(void) {

    int base, exponent;

    /* Reading inputs */
    scanf("%d", &base);
    scanf("%d", &exponent);

    long long result = power(base, exponent);

    /* Output format as required */
    printf("%d raised to the power of %d is %lld",
           base, exponent, result);

    return 0;
}

/*************************************************************/
/*   power(int base, int exponent)                           */
/*                                                           */
/*   Recursively computes base^exponent:                     */
/*   - If exponent is 0, return 1 (base case).               */
/*   - Otherwise, return base * power(base, exponent - 1).   */
/*************************************************************/
long long power(int base, int exponent) {

    if (exponent == 0)
        return 1;

    return base * power(base, exponent - 1);
}
