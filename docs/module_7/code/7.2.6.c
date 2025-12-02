/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to demonstrate accessing nested   */
/*                 structure members. The program stores a   */
/*                 student's basic details and address using */
/*                 nested structures and prints them.        */
/*                                                           */
/*   Input:                                                  */
/*       Student ID (integer > 0)                            */
/*       Student Age (integer > 0)                           */
/*       Student Name (string)                               */
/*       Student Street (integer)                            */
/*       Student State (string)                              */
/*       Student City (string)                               */
/*       Student Country (string)                            */
/*                                                           */
/*   Output:                                                 */
/*       Printing student Data:                              */
/*       Student ID: <id>                                    */
/*       Student Age: <age>                                  */
/*       Student Name: <name>                                */
/*       Student Street: <street>                            */
/*       Student State: <state>                              */
/*       Student City: <city>                                */
/*       Student Country: <country>                          */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           26                                              */
/*           21                                              */
/*           Sakul                                           */
/*           101                                             */
/*           AP                                              */
/*           Guntur                                          */
/*           India                                           */
/*                                                           */
/*       Output:                                             */
/*           Printing student Data:                          */
/*           Student ID: 26                                  */
/*           Student Age: 21                                 */
/*           Student Name: Sakul                             */
/*           Student Street: 101                             */
/*           Student State: AP                               */
/*           Student City: Guntur                            */
/*           Student Country: India                          */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Structure Name : Address                                  */
/* Description    : Stores student's address details         */
/* Members        : street  - street number                  */
/*                  state   - state name                     */
/*                  city    - city name                      */
/*                  country - country name                   */
/*-----------------------------------------------------------*/
struct Address {
    int street;
    char state[50];
    char city[50];
    char country[50];
};

/*-----------------------------------------------------------*/
/* Structure Name : Student                                  */
/* Description    : Stores student details and nested        */
/*                  address structure.                       */
/* Members        : id     - student ID                      */
/*                  age    - student age                     */
/*                  name   - student name                    */
/*                  addr   - nested Address structure        */
/*-----------------------------------------------------------*/
struct Student {
    int id;
    int age;
    char name[50];
    struct Address addr;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads student and address details, then   */
/*                 prints them using nested structure access.*/
/* Parameters    : None                                      */
/* Returns       : int                                       */
/*-----------------------------------------------------------*/
int main() {
    struct Student s;

    /* Reading input */
    scanf("%d", &s.id);
    scanf("%d", &s.age);
    scanf("%s", s.name);
    scanf("%d", &s.addr.street);
    scanf("%s", s.addr.state);
    scanf("%s", s.addr.city);
    scanf("%s", s.addr.country);

    /* Output */
    printf("Printing student Data:\n");
    printf("Student ID: %d\n", s.id);
    printf("Student Age: %d\n", s.age);
    printf("Student Name: %s\n", s.name);
    printf("Student Street: %d\n", s.addr.street);
    printf("Student State: %s\n", s.addr.state);
    printf("Student City: %s\n", s.addr.city);
    printf("Student Country: %s\n", s.addr.country);

    return 0;  /* Successful termination */
}
