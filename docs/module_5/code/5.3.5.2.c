/*************************************************************/
/*                                                           */
/*   File Name   : parameter.c                               */
/*   Author      : Param Vishwakarma                         */
/*                                                           */
/*   Description : This file accesses the global variables   */
/*                 'side1' and 'side2' declared in main.c    */
/*                 using the extern keyword.                 */
/*                                                           */
/*                 It defines the function calcPerimeter(),  */
/*                 which calculates and prints the perimeter */
/*                 of a parallelogram using the formula:     */
/*                       Perimeter = 2 × (side1 + side2)      */
/*                                                           */
/*   Purpose     :                                           */
/*       • Demonstrate extern keyword usage                   */
/*       • Perform computation in a separate file             */
/*       • Display parallelogram dimensions and perimeter     */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/* Accessing global variables from main.c */
extern int side1;
extern int side2;

/*-----------------------------------------------------------*/
/* Function: calcPerimeter                                   */
/* Description: Computes and prints the parallelogram         */
/*              perimeter using side1 and side2.              */
/*-----------------------------------------------------------*/
void calcPerimeter() {
    int peri = 2 * (side1 + side2);

    printf("Side A = %d\n", side1);
    printf("Side B = %d\n", side2);
    printf("Perimeter = %d", peri);
}
