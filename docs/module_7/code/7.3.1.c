/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to demonstrate the use of enum in */
/*                 representing four seasons: Spring,        */
/*                 Summer, Autumn, and Winter. The user      */
/*                 enters a number (1–4), and the program    */
/*                 prints the corresponding season name.      */
/*                                                           */
/*   Input:                                                  */
/*       Integer from 1 to 4 representing a season           */
/*                                                           */
/*   Output:                                                 */
/*       If valid input:   The season is: <Season>           */
/*       If invalid input: Invalid input! Please enter a     */
/*                         number between 1 and 4.           */
/*                                                           */
/*   Example:                                                */
/*       Input: 3                                            */
/*       Output: The season is: Autumn                       */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Enum Name : Season                                        */
/* Description : Represents the four seasons                 */
/* Values      : SPRING = 1, SUMMER = 2, AUTUMN = 3,         */
/*               WINTER = 4                                  */
/*-----------------------------------------------------------*/
enum Season {
    SPRING = 1,
    SUMMER,
    AUTUMN,
    WINTER
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads an integer input and prints the     */
/*                 corresponding season using enum values.   */
/*-----------------------------------------------------------*/
int main() {
    int input;

    /* Read user input */
    scanf("%d", &input);

    /* Check and print season */
    switch (input) {
        case SPRING:
            printf("The season is: Spring\n");
            break;
        case SUMMER:
            printf("The season is: Summer\n");
            break;
        case AUTUMN:
            printf("The season is: Autumn\n");
            break;
        case WINTER:
            printf("The season is: Winter\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 4.\n");
    }

    return 0; /* Successful termination */
}
