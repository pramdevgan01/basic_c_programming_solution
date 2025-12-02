/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates the use of the enum data     */
/*                 type to represent all 12 months of the    */
/*                 year. The program accepts a month number  */
/*                 from the user and prints the respective   */
/*                 month name.                              */
/*                                                           */
/*   Input:                                                  */
/*       Integer n (1–12) representing month number          */
/*                                                           */
/*   Output:                                                 */
/*       If valid:   Month <n>: <MonthName>                  */
/*       If invalid: Invalid input! Please enter a number    */
/*                   between 1 and 12.                       */
/*                                                           */
/*   Example:                                                */
/*       Input: 1                                            */
/*       Output: Month 1: January                            */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Enum Name : Month                                         */
/* Description : Represents all 12 months of the year        */
/* Values      : JAN = 1, FEB, MAR, APR, MAY, JUN, JUL,      */
/*               AUG, SEP, OCT, NOV, DEC                     */
/*-----------------------------------------------------------*/
enum Month {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads a month number and prints the       */
/*                 corresponding month name using enum.      */
/*-----------------------------------------------------------*/
int main() {
    int n;

    /* Read month number */
    scanf("%d", &n);

    /* Validate and print month name */
    switch (n) {
        case JAN: printf("Month %d: January\n", n); break;
        case FEB: printf("Month %d: February\n", n); break;
        case MAR: printf("Month %d: March\n", n); break;
        case APR: printf("Month %d: April\n", n); break;
        case MAY: printf("Month %d: May\n", n); break;
        case JUN: printf("Month %d: June\n", n); break;
        case JUL: printf("Month %d: July\n", n); break;
        case AUG: printf("Month %d: August\n", n); break;
        case SEP: printf("Month %d: September\n", n); break;
        case OCT: printf("Month %d: October\n", n); break;
        case NOV: printf("Month %d: November\n", n); break;
        case DEC: printf("Month %d: December\n", n); break;

        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
    }

    return 0; /* Successful termination */
}
