/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to create a structure that stores */
/*                 employee details: name, ID, and salary.   */
/*                 The program reads input for one employee  */
/*                 and prints the data in the required       */
/*                 single-line format.                       */
/*                                                           */
/*   Input:                                                  */
/*       Employee name (string without spaces)               */
/*       Employee ID (integer, 1–5000)                       */
/*       Salary (float, 0.0–100000.0)                        */
/*                                                           */
/*   Output:                                                 */
/*       Employee: <name>, ID: <id>, Salary: <salary>        */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           Rahul                                           */
/*           204                                             */
/*           55000.00                                        */
/*       Output:                                             */
/*           Employee: Rahul, ID: 204, Salary: 55000.00      */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Employee                                 */
/* Description    : Stores basic employee information        */
/* Members        : name   - employee name                   */
/*                  id     - employee ID                     */
/*                  salary - employee salary                 */
/*-----------------------------------------------------------*/
struct Employee
{
    char name[50];
    int id;
    float salary;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads employee details and prints them in */
/*                 the specified format.                     */
/* Parameters    : None                                      */
/* Returns       : int - exit status                         */
/*-----------------------------------------------------------*/
int main(void)
{
    struct Employee e;

    /* Read employee details */
    scanf("%s", e.name);
    scanf("%d", &e.id);
    scanf("%f", &e.salary);

    /* Print in required format */
    printf("Employee: %s, ID: %d, Salary: %.2f\n", e.name, e.id, e.salary);

    return 0;  /* Successful termination */
}
