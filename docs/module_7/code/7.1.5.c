/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates creation, declaration, and   */
/*                 initialization of a structure in C.       */
/*                 The program reads employee details:       */
/*                     - Name                                */
/*                     - ID                                  */
/*                     - Salary                              */
/*                 and prints them in the required format.   */
/*                                                           */
/*   Input:                                                  */
/*       Name   (string without spaces)                      */
/*       ID     (integer)                                    */
/*       Salary (float)                                      */
/*                                                           */
/*   Output:                                                 */
/*       Employee Details:                                   */
/*       Name: <Name>                                        */
/*       ID: <ID>                                            */
/*       Salary: <Salary>                                    */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           Alice                                           */
/*           101                                             */
/*           50000.50                                        */
/*                                                           */
/*       Output:                                             */
/*           Employee Details:                               */
/*           Name: Alice                                     */
/*           ID: 101                                         */
/*           Salary: 50000.50                                */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Employee                                 */
/* Description    : Holds employee information including      */
/*                  name, ID, and salary.                    */
/* Members        : name   - Employee name (string)          */
/*                  id     - Employee ID (integer)           */
/*                  salary - Employee salary (float)         */
/*-----------------------------------------------------------*/
struct Employee
{
    char name[50];
    int id;
    float salary;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads employee details, stores them in a  */
/*                 structure, and prints the details.        */
/* Parameters    : None                                      */
/* Returns       : int - Exit status                         */
/*-----------------------------------------------------------*/
int main(void)
{
    struct Employee e;  /* Structure declaration */

    /* Reading employee details */
    scanf("%s", e.name);
    scanf("%d", &e.id);
    scanf("%f", &e.salary);

    /* Printing employee details */
    printf("Employee Details:\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);

    return 0;  /* Successful termination */
}
