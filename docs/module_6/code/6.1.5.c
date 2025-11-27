/*************************************************************/
/*                                                           */
/*   File Name   : simple_interest.c                         */
/*   Author      : Param Vishwakarma                         */
/*   Description : Calculates Simple Interest (SI) using     */
/*                 pointers. The program reads principal,    */
/*                 rate, and time, stores them in pointers,  */
/*                 and computes SI using pointer values.     */
/*                                                           */
/*   Formula     : SI = (P * R * T) / 100                    */
/*                 Total = P + SI                            */
/*                                                           */
/*   Input       : Principal, Rate, Time (float/integer)     */
/*   Output      : Simple Interest and Total Amount          */
/*                                                           */
/*   Constraints : 0 ≤ P, R, T ≤ 10^6                        */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    float principal, rate, time;
    float *p, *r, *t;

    /*-------------------------------------------------------*/
    /*  Read user input                                      */
    /*-------------------------------------------------------*/
    scanf("%f", &principal);
    scanf("%f", &rate);
    scanf("%f", &time);

    /*-------------------------------------------------------*/
    /*  Assign pointers                                      */
    /*-------------------------------------------------------*/
    p = &principal;
    r = &rate;
    t = &time;

    /*-------------------------------------------------------*/
    /*  Simple Interest Calculation                           */
    /*-------------------------------------------------------*/
    float SI = (*p * *r * *t) / 100.0;
    float total = *p + SI;

    /*-------------------------------------------------------*/
    /*  Output Results                                       */
    /*-------------------------------------------------------*/
    printf("Simple Interest = %.2f\n", SI);
    printf("Total amount = %.2f", total);

    return 0;
}
