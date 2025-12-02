/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to display student details using  */
/*                 nested structures.                        */
/*                                                           */
/*                 Outer Structure : Student                 */
/*                 Nested Structure : DateOfBirth            */
/*                                                           */
/*                 The program reads:                        */
/*                     - Name (string)                       */
/*                     - Age (integer)                       */
/*                     - Date of Birth (string DD-MM-YYYY)   */
/*                     - Roll number (integer)               */
/*                     - Marks (float)                       */
/*                                                           */
/*                 And prints the details in the required    */
/*                 format.                                   */
/*                                                           */
/*   Input:                                                  */
/*       Name                                                */
/*       Age                                                 */
/*       DOB (DD-MM-YYYY)                                    */
/*       Roll number                                         */
/*       Marks                                               */
/*                                                           */
/*   Output:                                                 */
/*       Details of student:                                 */
/*                                                           */
/*       Name: <Name>                                        */
/*       Age: <Age>                                          */
/*       DOB: <DOB>                                          */
/*       Roll no: <Roll number>                              */
/*       Marks: <Marks>                                      */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           Alice                                           */
/*           20                                              */
/*           15-06-2003                                      */
/*           101                                             */
/*           85.50                                           */
/*                                                           */
/*       Output:                                             */
/*           Details of student:                             */
/*                                                           */
/*           Name: Alice                                     */
/*           Age: 20                                         */
/*           DOB: 15-06-2003                                 */
/*           Roll no: 101                                    */
/*           Marks: 85.50                                    */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : DateOfBirth                              */
/* Description    : Stores the date of birth as a string     */
/*                  in DD-MM-YYYY format.                    */
/* Members        : dob - character array                    */
/*-----------------------------------------------------------*/
struct DateOfBirth
{
    char dob[15];
};

/*-----------------------------------------------------------*/
/* Structure Name : Student                                  */
/* Description    : Stores student details including nested  */
/*                  date-of-birth structure.                 */
/* Members        : name  - student name                     */
/*                  age   - student age                      */
/*                  dob   - nested structure                 */
/*                  roll  - roll number                      */
/*                  marks - student marks                    */
/*-----------------------------------------------------------*/

struct Student
{
    char name[50];
    int age;
    struct DateOfBirth dob;
    int roll;
    float marks;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads student details, stores them in the */
/*                 nested structure, and prints the details. */
/* Parameters    : None                                      */
/* Returns       : int - exit status                         */
/*-----------------------------------------------------------*/
int main(void)
{
    struct Student s;

    /* Reading student details */
    scanf("%s", s.name);
    scanf("%d", &s.age);
    scanf("%s", s.dob.dob);
    scanf("%d", &s.roll);
    scanf("%f", &s.marks);

    /* Display student details */
    printf("Details of student:\n\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("DOB: %s\n", s.dob.dob);
    printf("Roll no: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0; /* Successful termination */
}
