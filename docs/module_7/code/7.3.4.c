/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program demonstrating the use of enum to  */
/*                 represent traffic light signals. The user */
/*                 enters a number (0, 1, or 2), and the     */
/*                 program prints the corresponding traffic  */
/*                 light status.                             */
/*                                                           */
/*   Input:                                                  */
/*       0 → Red                                              */
/*       1 → Yellow                                           */
/*       2 → Green                                            */
/*                                                           */
/*   Output:                                                 */
/*       Stop   (for Red)                                    */
/*       Ready  (for Yellow)                                 */
/*       Go     (for Green)                                  */
/*       Or error message for invalid input.                 */
/*                                                           */
/*   Example:                                                */
/*       Input: 0                                            */
/*       Output: Stop                                        */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Enum Name : TrafficLight                                  */
/* Description : Represents traffic signal colors            */
/* Values      : RED = 0, YELLOW = 1, GREEN = 2              */
/*-----------------------------------------------------------*/
enum TrafficLight {
    RED = 0,
    YELLOW,
    GREEN
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads a traffic light code (0–2) and      */
/*                 prints corresponding action.              */
/*-----------------------------------------------------------*/
int main() {
    int n;

    /* Read input */
    scanf("%d", &n);

    /* Output corresponding signal */
    switch (n) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Ready\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid input! Please enter 0 for Red, 1 for Yellow, or 2 for Green.\n");
    }

    return 0; /* Successful termination */
}
