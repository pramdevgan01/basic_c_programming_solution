/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Calculates the area of a rhombus using    */
/*                 structure pointers. The program reads the */
/*                 lengths of two diagonals and computes the */
/*                 area using the formula:                   */
/*                                                           */
/*                     Area = (d1 * d2) / 2                  */
/*                                                           */
/*   Input:                                                  */
/*       Line 1: length of diagonal 1 (int or float)         */
/*       Line 2: length of diagonal 2 (int or float)         */
/*                                                           */
/*   Output:                                                 */
/*       Prints the area in the format:                      */
/*           <area> CMs                                      */
/*       where <area> is displayed with 2 decimal places.    */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           2                                               */
/*           3                                               */
/*       Output:                                             */
/*           3.00 CMs                                        */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Rhombus                                  */
/* Description    : Holds the lengths of the two diagonals   */
/*                  of a rhombus.                            */
/* Members        : d1 - diagonal 1                          */
/*                  d2 - diagonal 2                          */
/*-----------------------------------------------------------*/
struct Rhombus
{
    float d1;
    float d2;
};

/*-----------------------------------------------------------*/
/* Function Name : computeArea                               */
/* Description   : Computes the area of the rhombus using    */
/*                 structure pointer.                        */
/* Parameters    : ptr - pointer to Rhombus structure         */
/* Returns       : float - calculated area                   */
/*-----------------------------------------------------------*/
float computeArea(struct Rhombus *ptr)
{
    return (ptr->d1 * ptr->d2) / 2.0f;
}

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Entry point. Reads diagonal lengths,      */
/*                 computes area using structure pointer,    */
/*                 and prints result with 2 decimal places.  */
/* Parameters    : None                                      */
/* Returns       : int - exit status                         */
/*-----------------------------------------------------------*/
int main(void)
{
    struct Rhombus r, *ptr;
    ptr = &r;

    /* Read diagonal lengths */
    scanf("%f", &ptr->d1);
    scanf("%f", &ptr->d2);

    /* Compute area of rhombus */
    float area = computeArea(ptr);

    /* Print result */
    printf("%.2f CMs", area);

    return 0; /* Successful termination */
}
