/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reads radius and height from user,        */
/*                 updates global variables and calculates   */
/*                 volume of cylinder using extern variables */
/*                 from dimensions.c.                        */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "dimensions.c"  // Required for online judge systems

/* extern declarations */
extern float radius;
extern float height;

int main(void)
{
    /* Read radius & height */
    scanf("%f", &radius);
    scanf("%f", &height);

    /* Volume formula: π r² h */
    float volume = 3.14f * radius * radius * height;

    /* Print output */
    printf("Radius: %.2f\n", radius);
    printf("Height: %.2f\n", height);
    printf("Volume of Cylinder: %.2f", volume);
    return 0;
}
