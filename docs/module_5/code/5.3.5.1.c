/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*                                                           */
/*   Description : This file reads the two adjacent sides of */
/*                 a parallelogram from user input and       */
/*                 stores them in global variables 'side1'   */
/*                 and 'side2'.                              */
/*                                                           */
/*                 It then calls the function                */
/*                 calcPerimeter() (defined in               */
/*                 parameter.c) to compute and display        */
/*                 the perimeter using extern variables.      */
/*                                                           */
/*   Purpose     :                                           */
/*       • Accept parallelogram side lengths                 */
/*       • Store them into global variables                  */
/*       • Invoke external function to compute perimeter      */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "parameter.c"   /* Included for the online compiler environment */

int side1;   /* Global variable: first side length  */
int side2;   /* Global variable: second side length */

void calcPerimeter();   /* Function declaration */

int main() {

    /* Reading inputs in the required format */
    scanf("Side1 = %d", &side1);
    scanf(" Side2 = %d", &side2);

    /* Calling function to calculate and print perimeter */
    calcPerimeter();

    return 0;
}
