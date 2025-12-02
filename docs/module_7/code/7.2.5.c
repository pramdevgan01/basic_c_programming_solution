/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to demonstrate the concept of     */
/*                 Nested Structures in C. It stores student */
/*                 details including name, roll number, and  */
/*                 a nested structure for date of birth.     */
/*                                                           */
/*   Input:                                                  */
/*       Name (string, ≤ 50 chars)                           */
/*       Roll Number (positive integer)                      */
/*       Date of Birth (day month year)                      */
/*                                                           */
/*   Output:                                                 */
/*       Name : <Name>                                       */
/*       RollNo : <Roll Number>                              */
/*       Date of birth : <day>/<month>/<year>                */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           MK                                              */
/*           290                                             */
/*           21 04 2003                                      */
/*                                                           */
/*       Output:                                             */
/*           Name : MK                                       */
/*           RollNo : 290                                    */
/*           Date of birth : 21/04/2003                      */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Date                                     */
/* Description    : Stores day, month, year values           */
/* Members        : day   - integer                          */
/*                  month - integer                          */
/*                  year  - integer                          */
/*-----------------------------------------------------------*/
struct Date {
    int day;
    int month;
    int year;
};

/*-----------------------------------------------------------*/
/* Structure Name : Student                                  */
/* Description    : Stores student details including nested  */
/*                  structure for date of birth              */
/* Members        : name - student name                      */
/*                  roll - roll number                       */
/*                  dob  - nested structure of type Date     */
/*-----------------------------------------------------------*/
struct Student {
    char name[50];
    int roll;
    struct Date dob;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads student details and displays them   */
/*                 including nested structure fields.        */
/*-----------------------------------------------------------*/
int main() {
    struct Student s;

    /* Reading inputs */
    scanf("%s", s.name);
    scanf("%d", &s.roll);
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    /* Display outputs */
    printf("Name : %s\n", s.name);
    printf("RollNo : %d\n", s.roll);
    printf("Date of birth : %02d/%02d/%04d\n",
           s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
