/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program demonstrating the use of enum to  */
/*                 represent the four compass directions.    */
/*                 The user enters a number (0–3), and the   */
/*                 program prints the corresponding direction*/
/*                 name.                                     */
/*                                                           */
/*   Input:                                                  */
/*       0 → North                                           */
/*       1 → South                                           */
/*       2 → East                                            */
/*       3 → West                                            */
/*                                                           */
/*   Output:                                                 */
/*       Corresponding direction name OR error message.      */
/*                                                           */
/*   Example:                                                */
/*       Input: 0                                            */
/*       Output: North                                       */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Enum Name : Direction                                     */
/* Description : Represents four compass directions          */
/* Values      : NORTH = 0, SOUTH = 1, EAST = 2, WEST = 3    */
/*-----------------------------------------------------------*/
enum Direction {
    NORTH = 0,
    SOUTH,
    EAST,
    WEST
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads a direction code (0–3) and prints   */
/*                 the corresponding direction using enum.   */
/*-----------------------------------------------------------*/
int main() {
    int n;

    /* Read direction number */
    scanf("%d", &n);

    /* Output result */
    switch (n) {
        case NORTH: printf("North\n"); break;
        case SOUTH: printf("South\n"); break;
        case EAST:  printf("East\n"); break;
        case WEST:  printf("West\n"); break;
        default:
            printf("Invalid input! Please enter a number between 0 and 3.\n");
    }

    return 0; /* Successful termination */
}
