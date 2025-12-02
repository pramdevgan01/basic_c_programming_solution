/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to calculate the volume of a      */
/*                 cylinder using a structure. The program   */
/*                 reads radius and height, stores them in a */
/*                 structure, and computes the volume using  */
/*                 the formula:                              */
/*                                                           */
/*                     Volume = π * r² * h                   */
/*                                                           */
/*                 Volume is printed up to two decimal places*/
/*                                                           */
/*   Input:                                                  */
/*       Radius (float or integer)                           */
/*       Height (float or integer)                           */
/*                                                           */
/*   Output:                                                 */
/*       Volume of the cylinder: <value>                     */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           2                                               */
/*           4                                               */
/*       Output:                                             */
/*           Volume of the cylinder: 50.27                   */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

#define PI 3.14159

/*-----------------------------------------------------------*/
/* Structure Name : Cylinder                                 */
/* Description    : Stores radius and height of a cylinder.  */
/* Members        : radius - radius of the cylinder          */
/*                  height - height of the cylinder          */
/*-----------------------------------------------------------*/
struct Cylinder
{
    float radius;
    float height;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads cylinder dimensions, calculates     */
/*                 volume, and prints the result.            */
/* Parameters    : None                                      */
/* Returns       : int - exit status                         */
/*-----------------------------------------------------------*/
int main(void)
{
    struct Cylinder c;

    /* Read radius and height */
    scanf("%f", &c.radius);
    scanf("%f", &c.height);

    /* Calculate volume */
    float volume = PI * c.radius * c.radius * c.height;

    /* Print result (2 decimal places) */
    printf("Volume of the cylinder: %.2f\n", volume);

    return 0;  /* Successful termination */
}
