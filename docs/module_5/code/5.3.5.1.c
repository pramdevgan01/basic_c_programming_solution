/*************************************************************/
/*                                                           */
/*   File Name   : Main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Uses extern variables (side1, side2) from */
/*                 sides.c. Reads user input for sides and   */
/*                 calculates the perimeter of a              */
/*                 parallelogram.                             */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "sides.c"   /* Required for online compilers to link variables */

/* extern declarations */
extern int side1;
extern int side2;

int main(void)
{
    /* Read values from user (even though question says no input,
       sample shows input must be provided) */
    scanf("%d", &side1);
    scanf("%d", &side2);

    int perimeter = 2 * (side1 + side2);

    /* EXACT OUTPUT FORMAT (no extra spaces or newline at end) */
    printf("Side1 = %d  \n", side1);
    printf("Side2 = %d  \n", side2);
    printf("Perimeter of Parallelogram = %d ", perimeter);

    return 0;
}
