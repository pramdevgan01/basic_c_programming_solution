/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates how to use a union inside a  */
/*                 structure in C. The structure stores a    */
/*                 student ID along with a union that can    */
/*                 represent the student's grade as either   */
/*                 an integer or a float.                    */
/*                                                           */
/*                 For this problem, the grade is assumed to */
/*                 be given as an integer.                   */
/*                                                           */
/*   Input:                                                  */
/*       Student ID (1–10000)                                */
/*       Grade (0–100, integer for this example)             */
/*                                                           */
/*   Output:                                                 */
/*       Student ID: <id>, Grade: <grade>                    */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           101                                             */
/*           90                                              */
/*       Output:                                             */
/*           Student ID: 101, Grade: 90                      */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Union Name : Grade                                        */
/* Description : Stores a grade that may be represented as   */
/*               either an integer or a float.               */
/* Members     : gInt  - integer grade                       */
/*               gFloat - floating-point grade               */
/*-----------------------------------------------------------*/
union Grade {
    int gInt;
    float gFloat;
};

/*-----------------------------------------------------------*/
/* Structure Name : Student                                  */
/* Description    : Stores student ID and a union for grade  */
/* Members        : id   - student ID                        */
/*                  grade - union Grade                      */
/*-----------------------------------------------------------*/
struct Student {
    int id;
    union Grade grade;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads student ID and grade, stores them   */
/*                 in a structure, and prints the result.    */
/*-----------------------------------------------------------*/
int main() {
    struct Student s;

    /* Read student ID and grade */
    scanf("%d", &s.id);
    scanf("%d", &s.grade.gInt);  // storing grade as integer for this example

    /* Print result */
    printf("Student ID: %d, Grade: %d\n", s.id, s.grade.gInt);

    return 0; /* Successful termination */
}
