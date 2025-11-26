/***************************************************************/
/*                                                             */
/*   File Name   : sum_of_digits.c                             */
/*   Author      : Param Vishwakarma                           */
/*   Description : Program to compute the sum of digits of a   */
/*                 non-negative integer using recursion.       */
/*                 The user enters a number and the program    */
/*                 recursively extracts digits and sums them.  */
/*                                                             */
/*   Date        : November 2025                               */
/*                                                             */
/***************************************************************/

#include <stdio.h>

/*------------------------------------------------------------*/
/*   Function Prototype: sumOfDigits()                        */
/*   Recursively calculates the sum of digits of a number.    */
/*------------------------------------------------------------*/
int sumOfDigits(int num);

/*************************************************************/
/*                           main()                          */
/*************************************************************/
int main(void)
{
    int num;

    /* Read input number */
    scanf("%d", &num);

    /* Call recursive function */
    int result = sumOfDigits(num);

    /* Output in required format */
    printf("Sum of digits: %d", result);

    return 0;
}

/**************************************************************/
/*   Function: sumOfDigits(int num)                           */
/*                                                            */
/*   Description:                                             */
/*   - Base Case: num == 0 → return 0                         */
/*   - Recursive Case: return (last digit) + sumOfDigits()    */
/*                                                            */
/**************************************************************/
int sumOfDigits(int num)
{
    if (num == 0)
        return 0;

    return (num % 10) + sumOfDigits(num / 10);
}
