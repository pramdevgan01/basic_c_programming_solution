/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to check scholarship eligibility  */
/*                 using structures and functions. The       */
/*                 program reads a student's name, 1st sem   */
/*                 GPA, and 2nd sem GPA, then calculates     */
/*                 the average GPA and prints whether the    */
/*                 student is eligible for scholarship.      */
/*                                                           */
/*   Scholarship Rule: Average GPA >= 9.0                    */
/*                                                           */
/*   Input:                                                  */
/*       name (string)                                       */
/*       gpa1 (float)                                        */
/*       gpa2 (float)                                        */
/*                                                           */
/*   Output:                                                 */
/*       Type-in the name of the Student:                    */
/*       Type-in the 1st sem GPA:                            */
/*       Type-in the 2nd sem GPA:                            */
/*       Average GPA: <value>                                */
/*       Scholarship Eligible / Scholarship Not Eligible     */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           Alex                                            */
/*           8.5                                             */
/*           9.0                                             */
/*       Output:                                             */
/*           Average GPA: 8.75                               */
/*           Scholarship Not Eligible                        */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Student                                  */
/* Description    : Stores student name and GPAs             */
/* Members        : name - student name                      */
/*                  gpa1 - 1st semester GPA                  */
/*                  gpa2 - 2nd semester GPA                  */
/*-----------------------------------------------------------*/
struct Student {
    char name[50];
    float gpa1;
    float gpa2;
};

/*-----------------------------------------------------------*/
/* Function Name : calculateAverage                          */
/* Description   : Computes average GPA of a student         */
/* Parameters    : struct Student s                          */
/* Returns       : float - average GPA                       */
/*-----------------------------------------------------------*/
float calculateAverage(struct Student s) {
    return (s.gpa1 + s.gpa2) / 2.0f;
}

/*-----------------------------------------------------------*/
/* Function Name : isEligible                                */
/* Description   : Determines scholarship eligibility        */
/* Parameters    : float avg                                 */
/* Returns       : int - 1 if eligible, 0 if not             */
/*-----------------------------------------------------------*/
int isEligible(float avg) {
    return avg >= 9.0 ? 1 : 0;
}

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads student details, calculates average */
/*                 GPA, and prints eligibility status.       */
/* Parameters    : None                                      */
/* Returns       : int                                       */
/*-----------------------------------------------------------*/
int main() {
    struct Student s;

    printf("Type-in the name of the Student:\n");
    scanf("%s", s.name);

    printf("Type-in the 1st sem GPA:\n");
    scanf("%f", &s.gpa1);

    printf("Type-in the 2nd sem GPA:\n");
    scanf("%f", &s.gpa2);

    float avg = calculateAverage(s);

    printf("Average GPA: %.2f\n", avg);

    if (isEligible(avg))
        printf("Scholarship Eligible\n");
    else
        printf("Scholarship Not Eligible\n");

    return 0;
}
