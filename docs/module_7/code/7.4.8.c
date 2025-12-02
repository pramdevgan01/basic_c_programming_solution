/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates how a union can be used to   */
/*                 store date information (day, month, year) */
/*                 in the same memory block. Even though     */
/*                 unions overwrite previous values, this    */
/*                 program prints each value after assigning */
/*                 separately as per the requirement.        */
/*                                                           */
/*   Input:                                                  */
/*       Day   (1–31)                                        */
/*       Month (1–12)                                        */
/*       Year  (1–9999)                                      */
/*                                                           */
/*   Output:                                                 */
/*       Day: <value>                                        */
/*       Month: <value>                                      */
/*       Year: <value>                                       */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           5                                               */
/*           10                                              */
/*           2023                                            */
/*       Output:                                             */
/*           Day: 5                                          */
/*           Month: 10                                       */
/*           Year: 2023                                      */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Union Name : DateInfo                                     */
/* Description : Stores one of day, month, or year in the    */
/*               same memory due to union behavior.          */
/* Members     : day   - day number                          */
/*               month - month number                        */
/*               year  - year number                         */
/*-----------------------------------------------------------*/
union DateInfo {
    int day;
    int month;
    int year;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads day, month, and year into a union   */
/*                 and prints them separately after each     */
/*                 assignment.                               */
/*-----------------------------------------------------------*/
int main() {
    union DateInfo d;

    int tempDay, tempMonth, tempYear;

    /* Read input values */
    scanf("%d", &tempDay);
    scanf("%d", &tempMonth);
    scanf("%d", &tempYear);

    /* Assign and print day */
    d.day = tempDay;
    printf("Day: %d\n", d.day);

    /* Assign and print month */
    d.month = tempMonth;
    printf("Month: %d\n", d.month);

    /* Assign and print year */
    d.year = tempYear;
    printf("Year: %d\n", d.year);

    return 0; /* Successful termination */
}
