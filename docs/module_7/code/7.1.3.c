/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to calculate the area of a        */
/*                 rectangle. The program reads the length   */
/*                 and width, computes the area using the    */
/*                 formula:                                  */
/*                                                           */
/*                     Area = length * width                 */
/*                                                           */
/*                 The output is printed with 2 decimal      */
/*                 places.                                   */
/*                                                           */
/*   Input:                                                  */
/*       Length of rectangle (float or integer)              */
/*       Width of rectangle (float or integer)               */
/*                                                           */
/*   Output:                                                 */
/*       <area>   (formatted to 2 decimal places)            */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           2                                               */
/*           3                                               */
/*       Output:                                             */
/*           6.00                                            */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads length and width of rectangle,      */
/*                 calculates area, and prints result.       */
/* Parameters    : None                                      */
/* Returns       : int - exit status                         */
/*-----------------------------------------------------------*/
int main(void)
{
    float length, width;

    /* Read length and width */
    scanf("%f", &length);
    scanf("%f", &width);

    /* Calculate area */
    float area = length * width;

    /* Print area formatted to 2 decimal places */
    printf("%.2f", area);

    return 0;  /* Successful termination */
    
}
