/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to store student details using a  */
/*                 structure. For each student, the program  */
/*                 stores the name and three subject marks.  */
/*                 It calculates and prints the average of   */
/*                 the three marks for each student.         */
/*                                                           */
/*   Input:                                                  */
/*       n - number of students (1–10)                       */
/*       For each student:                                   */
/*           name (string)                                   */
/*           mark1, mark2, mark3 (floats)                    */
/*                                                           */
/*   Output:                                                 */
/*       Name: <name>, Average: <avg>                        */
/*       (Average printed up to 2 decimal places)            */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           2                                               */
/*           Arun                                            */
/*           50 60 70                                        */
/*           Meena                                           */
/*           90 85 95                                        */
/*                                                           */
/*       Output:                                             */
/*           Name: Arun, Average: 60.00                      */
/*           Name: Meena, Average: 90.00                     */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Student                                  */
/* Description    : Stores student's name and three marks    */
/* Members        : name  - student's name                   */
/*                  m1,m2,m3 - marks in three subjects       */
/*-----------------------------------------------------------*/
struct Student
{
    char name[50];
    float m1, m2, m3;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads student details, computes average,  */
/*                 and prints the result for each student.   */
/* Parameters    : None                                      */
/* Returns       : int - exit status                         */
/*-----------------------------------------------------------*/
int main(void)
{
    int n;
    scanf("%d", &n);

    struct Student s[n];

    /* Input details for each student */
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i].name);
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);
    }

    /* Print name and average marks */
    for (int i = 0; i < n; i++)
    {
        float avg = (s[i].m1 + s[i].m2 + s[i].m3) / 3.0f;
        printf("Name: %s, Average: %.2f\n", s[i].name, avg);
    }

    return 0; /* Successful termination */
}
