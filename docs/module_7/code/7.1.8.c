/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to create a structure that stores */
/*                 a student's name, roll number, and marks. */
/*                 The program takes input for one student   */
/*                 and prints the data in the required       */
/*                 single-line format.                       */
/*                                                           */
/*   Input:                                                  */
/*       Name  (string without spaces)                       */
/*       Roll  (integer, 1–1000)                             */
/*       Marks (float, 0.0–100.0)                            */
/*                                                           */
/*   Output:                                                 */
/*       Name: <name>, Roll: <roll>, Marks: <marks>          */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           John                                            */
/*           101                                             */
/*           85.5                                            */
/*       Output:                                             */
/*           Name: John, Roll: 101, Marks: 85.50             */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Student                                  */
/* Description    : Stores student's basic details           */
/* Members        : name  - student name                     */
/*                  roll  - student roll number              */
/*                  marks - student marks                    */
/*-----------------------------------------------------------*/
struct Student
{
    char name[50];
    int roll;
    float marks;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads student data and prints it in the   */
/*                 required single-line format.              */
/* Parameters    : None                                      */
/* Returns       : int - exit status                         */
/*-----------------------------------------------------------*/
int main(void)
{
    struct Student s;

    /* Read student data */
    scanf("%s", s.name);
    scanf("%d", &s.roll);
    scanf("%f", &s.marks);

    /* Print in required format */
    printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);

    return 0;  /* Successful termination */
}
