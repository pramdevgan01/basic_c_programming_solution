/*************************************************************
 *                                                           *
 *   File Name   : convert_time.c                            *
 *   Author      : Param Vishwakarma                         *
 *   Description : Converts given hours and minutes into     *
 *                 total minutes. Uses pointers to pass      *
 *                 values into a function that performs the  *
 *                 conversion and returns the result.        *
 *                                                           *
 *   Constraints :                                           *
 *       - 0 ≤ hours ≤ 23                                    *
 *       - 0 ≤ minutes ≤ 59                                  *
 *                                                           *
 *   Sample Input :                                          *
 *       2 30                                                *
 *                                                           *
 *   Sample Output :                                         *
 *       Total minutes = 150                                 *
 *                                                           *
 *   Explanation :                                           *
 *       2 hours = 120 minutes                               *
 *       Add 30 → Total = 150 minutes                        *
 *                                                           *
 *   Date        : November 2025                             *
 *                                                           *
 *************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Function: convertToMinutes                                */
/* Description: Takes pointers to hours and minutes and      */
/*              returns total minutes.                       */
/*-----------------------------------------------------------*/
int convertToMinutes(int *h, int *m)
{
    return (*h * 60) + (*m);
}

int main(void)
{
    int hours, minutes;

    /*-------------------------------------------------------*/
    /* Read input: hours and minutes                         */
    /*-------------------------------------------------------*/
    scanf("%d %d", &hours, &minutes);

    /*-------------------------------------------------------*/
    /* Calculate total minutes using pointer arguments       */
    /*-------------------------------------------------------*/
    int total = convertToMinutes(&hours, &minutes);

    /*-------------------------------------------------------*/
    /* Print the result                                      */
    /*-------------------------------------------------------*/
    printf("Total minutes = %d", total);

    return 0;
}
