/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to determine whether two numbers  */
/*                 form a friendly pair. Two numbers are     */
/*                 friendly if their abundances (sum of      */
/*                 proper divisors) are equal. All divisor   */
/*                 computation is performed using recursion. */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*  Recursive Function Prototypes                            */
/*-----------------------------------------------------------*/
int sumOfDivisors(int n, int i);

/*************************************************************/
/*                           main()                          */
/*************************************************************/
int main(void) {

    int num1, num2;

    /* Read input values */
    scanf("%d", &num1);
    scanf("%d", &num2);

    /* Recursive abundance computation */
    int abundance1 = sumOfDivisors(num1, 1);
    int abundance2 = sumOfDivisors(num2, 1);

    /* Output decision */
    if (abundance1 == abundance2)
        printf("%d and %d are friendly pairs.", num1, num2);
    else
        printf("%d and %d are not friendly pairs.", num1, num2);

    return 0;
}

/*************************************************************/
/*   sumOfDivisors(int n, int i)                             */
/*   Recursively computes sum of proper divisors of n.       */
/*   i starts from 1 and increases until i == n.             */
/*************************************************************/
int sumOfDivisors(int n, int i) {

    if (i == n)                 /* stop before including n itself */
        return 0;

    if (n % i == 0)
        return i + sumOfDivisors(n, i + 1);   /* include divisor */
    else
        return sumOfDivisors(n, i + 1);       /* skip non-divisor */
}
