/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to collect and display employee   */
/*                 details using structures. The program     */
/*                 reads:                                    */
/*                     - Employee ID                         */
/*                     - Employee Name                       */
/*                     - Employee Designation                */
/*                     - Employee Address                    */
/*                 and prints them in the specified format.  */
/*                                                           */
/*   Input:                                                  */
/*       Employee ID (integer)                               */
/*       Employee Name (string without spaces)               */
/*       Employee Designation (string without spaces)        */
/*       Employee Address (string without spaces)            */
/*                                                           */
/*   Output:                                                 */
/*       Prints employee details with exact prompts as given */
/*       in the problem statement.                           */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           101                                             */
/*           John                                            */
/*           Manager                                         */
/*           NewYork                                         */
/*       Output:                                             */
/*           Employee details collection                     */
/*           Employee 1:                                     */
/*           Enter Employee ID:                              */
/*           Enter Employee Name:                            */
/*           Enter Employee Designation:                     */
/*           Enter Employee Address:                         */
/*                                                           */
/*           Printing Employee details                       */
/*           Employee 1:                                     */
/*           Employee ID: 101                                */
/*           Employee Name: John                             */
/*           Employee Designation: Manager                   */
/*           Employee Address: NewYork                       */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Employee                                 */
/* Description    : Holds details of an employee including   */
/*                  ID, name, designation, and address.      */
/* Members        : emp_ID          - integer                */
/*                  emp_name        - string (char array)    */
/*                  emp_designation - string (char array)    */
/*                  emp_address     - string (char array)    */
/*-----------------------------------------------------------*/
struct Employee
{
    int  emp_ID;
    char emp_name[50];
    char emp_designation[50];
    char emp_address[50];
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Entry point of program. Accepts employee  */
/*                 details and prints them using the required*/
/*                 output format.                            */
/* Parameters    : None                                      */
/* Returns       : int (exit status)                         */
/*-----------------------------------------------------------*/
int main(void)
{
    struct Employee e;

    printf("Employee details collection\n");
    printf("Employee 1:\n");

    /* Read inputs */
    printf("Enter Employee ID:\n");
    scanf("%d", &e.emp_ID);

    printf("Enter Employee Name:\n");
    scanf("%s", e.emp_name);

    printf("Enter Employee Designation:\n");
    scanf("%s", e.emp_designation);

    printf("Enter Employee Address:\n");
    scanf("%s", e.emp_address);

    /* Print employee details */
    printf("\nPrinting Employee details\n");
    printf("Employee 1:\n");
    printf("Employee ID: %d\n", e.emp_ID);
    printf("Employee Name: %s\n", e.emp_name);
    printf("Employee Designation: %s\n", e.emp_designation);
    printf("Employee Address: %s\n", e.emp_address);

    return 0;  /* Successful termination */
}
