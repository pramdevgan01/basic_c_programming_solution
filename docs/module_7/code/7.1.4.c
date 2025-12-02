/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to store and display details of   */
/*                 multiple students using an array of       */
/*                 structures. The program reads each        */
/*                 student's ID, name, and age, and prints   */
/*                 them in a formatted output.               */
/*                                                           */
/*   Input:                                                  */
/*       n - number of students                              */
/*       For each student:                                   */
/*           Student ID  (integer)                           */
/*           Name        (string without spaces)             */
/*           Age         (integer)                           */
/*                                                           */
/*   Output:                                                 */
/*       Displays all stored student details in order.       */
/*                                                           */
/*   Example:                                                */
/*       Enter the number of students:                       */
/*       Enter details for student 1:                        */
/*       Student ID:                                         */
/*       Name:                                               */
/*       Age:                                                */
/*                                                           */
/*       Student Details:                                    */
/*       Student 1:                                          */
/*       Student ID: 101                                     */
/*       Name: John                                          */
/*       Age: 20                                             */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Student                                  */
/* Description    : Stores basic student information         */
/* Members        : id   - Student ID                        */
/*                  name - Student name                      */
/*                  age  - Student age                       */
/*-----------------------------------------------------------*/
struct Student {
    int id;
    char name[50];
    int age;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads student details from the user and   */
/*                 displays them in a formatted list.        */
/* Parameters    : None                                      */
/* Returns       : int - exit status                         */
/*-----------------------------------------------------------*/
int main() {
    int n;

    /* Prompt and read number of students */
    printf("Enter the number of students: \n");
    scanf("%d", &n);

    struct Student students[n];

    /* Input student details */
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Student ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    /* Displaying student details */
    printf("Student Details:\n\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Student ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);

        if (i != n - 1) {
            printf("\n"); /* Blank line between students */
        }
    }

    return 0;  /* Successful termination */
}
