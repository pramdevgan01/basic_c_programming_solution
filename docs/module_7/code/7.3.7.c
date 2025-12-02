/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program demonstrating the use of enum to  */
/*                 represent planets in our Solar System.    */
/*                 The user inputs a number (0–7), and the    */
/*                 program prints the corresponding planet.   */
/*                                                           */
/*   Input:                                                  */
/*       0 → Mercury                                         */
/*       1 → Venus                                           */
/*       2 → Earth                                           */
/*       3 → Mars                                            */
/*       4 → Jupiter                                         */
/*       5 → Saturn                                          */
/*       6 → Uranus                                          */
/*       7 → Neptune                                         */
/*                                                           */
/*   Output:                                                 */
/*       Planet: <PlanetName>                                */
/*       OR an error message for invalid input.              */
/*                                                           */
/*   Example:                                                */
/*       Input: 2                                            */
/*       Output: Planet: Earth                               */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Enum Name : Planet                                        */
/* Description : Represents planets in the Solar System      */
/* Values      : MERCURY = 0, VENUS, EARTH, MARS, JUPITER,   */
/*               SATURN, URANUS, NEPTUNE                     */
/*-----------------------------------------------------------*/
enum Planet {
    MERCURY = 0,
    VENUS,
    EARTH,
    MARS,
    JUPITER,
    SATURN,
    URANUS,
    NEPTUNE
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads a planet number and prints the      */
/*                 corresponding planet name using enum.     */
/*-----------------------------------------------------------*/
int main() {
    int n;

    /* Read user input */
    scanf("%d", &n);

    /* Output planet name */
    switch (n) {
        case MERCURY: printf("Planet: Mercury\n"); break;
        case VENUS:   printf("Planet: Venus\n"); break;
        case EARTH:   printf("Planet: Earth\n"); break;
        case MARS:    printf("Planet: Mars\n"); break;
        case JUPITER: printf("Planet: Jupiter\n"); break;
        case SATURN:  printf("Planet: Saturn\n"); break;
        case URANUS:  printf("Planet: Uranus\n"); break;
        case NEPTUNE: printf("Planet: Neptune\n"); break;
        default:
            printf("Invalid input! Please enter a number between 0 and 7.\n");
    }

    return 0; /* Successful termination */
}
