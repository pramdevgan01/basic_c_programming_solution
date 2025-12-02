/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program demonstrating the use of enum to  */
/*                 represent grade letters (A, B, C, D, F).  */
/*                 The user inputs a number (0–4), and the   */
/*                 program prints the corresponding grade.   */
/*                                                           */
/*   Input:                                                  */
/*       0 → A                                               */
/*       1 → B                                               */
/*       2 → C                                               */
/*       3 → D                                               */
/*       4 → F                                               */
/*                                                           */
/*   Output:                                                 */
/*       Grade: <GradeLetter>                                */
/*       OR an error message for invalid input.              */
/*                                                           */
/*   Example:                                                */
/*       Input: 0                                            */
/*       Output: Grade: A                                    */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Enum Name : Grade                                         */
/* Description : Represents grade letters                    */
/* Values      : A = 0, B = 1, C = 2, D = 3, F = 4           */
/*-----------------------------------------------------------*/
enum Grade {
    A = 0,
    B,
    C,
    D,
    F
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads a grade number and prints the       */
/*                 corresponding grade letter using enum.    */
/*-----------------------------------------------------------*/
int main() {
    int n;

    /* Read grade number */
    scanf("%d", &n);

    /* Print corresponding grade */
    switch (n) {
        case A: printf("Grade: A\n"); break;
        case B: printf("Grade: B\n"); break;
        case C: printf("Grade: C\n"); break;
        case D: printf("Grade: D\n"); break;
        case F: printf("Grade: F\n"); break;
        default:
            printf("Invalid input! Please enter a number between 0 and 4.\n");
    }

    return 0; /* Successful termination */
}
