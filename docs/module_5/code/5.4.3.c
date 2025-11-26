/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to check whether a given number   */
/*                 is a magic number. A number is magic if   */
/*                 the recursive sum of its digits reduces   */
/*                 to 1. All digit-sum operations are done   */
/*                 using recursion only.                     */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*  Recursive Function Prototypes                            */
/*-----------------------------------------------------------*/
int digitSum(int n);
int reduceToSingleDigit(int n);

/*************************************************************/
/*                           main()                          */
/*************************************************************/
int main(void) {

    int num;
    scanf("%d", &num);

    int result = reduceToSingleDigit(num);

    if (result == 1)
        printf("%d is a magic number.", num);
    else
        printf("%d is not a magic number.", num);

    return 0;
}

/*************************************************************/
/*   digitSum(int n)                                         */
/*   Recursively sums digits of n                            */
/*************************************************************/
int digitSum(int n) {

    if (n == 0)
        return 0;

    return (n % 10) + digitSum(n / 10);
}

/*************************************************************/
/*   reduceToSingleDigit(int n)                              */
/*   Repeatedly applies digitSum() recursively until a       */
/*   single digit is obtained.                               */
/*************************************************************/
int reduceToSingleDigit(int n) {

    if (n < 10)
        return n;

    return reduceToSingleDigit(digitSum(n));
}
