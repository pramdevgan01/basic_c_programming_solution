/*************************************************************/
/*                                                           */
/*   File Name   : mathutils.h                               */
/*   Author      : Param Vishwakarma                         */
/*   Description : Header file containing recursive utility  */
/*                 functions for factorial and power.        */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#ifndef MATHUTILS_H
#define MATHUTILS_H

/*-----------------------------------------------------------*/
/*  Recursive factorial function                             */
/*-----------------------------------------------------------*/
int factorial(int n)
{
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

/*-----------------------------------------------------------*/
/*  Recursive power function: base^exp                       */
/*-----------------------------------------------------------*/
int power(int base, int exp)
{
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

#endif
