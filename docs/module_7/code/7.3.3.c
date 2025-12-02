/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to demonstrate the use of enum to */
/*                 represent days of the week. The user      */
/*                 inputs a number (0–6) and the program     */
/*                 prints the corresponding day name.        */
/*                                                           */
/*   Input:                                                  */
/*       Integer n (0–6)                                     */
/*           0 → Sunday                                      */
/*           1 → Monday                                      */
/*           2 → Tuesday                                     */
/*           3 → Wednesday                                   */
/*           4 → Thursday                                    */
/*           5 → Friday                                      */
/*           6 → Saturday                                    */
/*                                                           */
/*   Output:                                                 */
/*       Day name OR error message                          */
/*                                                           */
/*   Example:                                                */
/*       Input: 0                                            */
/*       Output: Sunday                                      */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Enum Name : Day                                           */
/* Description : Represents days of the week                 */
/* Values      : SUN = 0, MON, TUE, WED, THU, FRI, SAT       */
/*-----------------------------------------------------------*/
enum Day {
    SUN = 0,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads a day number and prints the         */
/*                 corresponding day name using enum.        */
/*-----------------------------------------------------------*/
int main() {
    int n;

    /* Read input */
    scanf("%d", &n);

    /* Check valid range and print day */
    switch (n) {
        case SUN: printf("Sunday\n"); break;
        case MON: printf("Monday\n"); break;
        case TUE: printf("Tuesday\n"); break;
        case WED: printf("Wednesday\n"); break;
        case THU: printf("Thursday\n"); break;
        case FRI: printf("Friday\n"); break;
        case SAT: printf("Saturday\n"); break;
        default:
            printf("Invalid input! Please enter a number between 0 and 6.\n");
    }

    return 0; /* Successful termination */
}
