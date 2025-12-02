/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates the use of a nested union    */
/*                 within a structure. The structure stores  */
/*                 a person's name and a union that can hold */
/*                 different types of personal data.         */
/*                 In this example, only the age (integer)   */
/*                 is used.                                  */
/*                                                           */
/*   Input:                                                  */
/*       Name (string without spaces, max 49 chars)          */
/*       Age  (integer, 1–150)                               */
/*                                                           */
/*   Output:                                                 */
/*       Name: <name>, Age: <age>                            */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           Alice                                           */
/*           30                                              */
/*                                                           */
/*       Output:                                             */
/*           Name: Alice, Age: 30                            */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Union Name : PersonalInfo                                 */
/* Description : Can store either an integer or a float.     */
/*               Shows how unions share memory.              */
/* Members     : age      - integer age                      */
/*               salary   - float (not used in this example) */
/*-----------------------------------------------------------*/
union PersonalInfo {
    int age;
    float salary;
};

/*-----------------------------------------------------------*/
/* Structure Name : Person                                   */
/* Description    : Stores name and nested union             */
/* Members        : name - person's name                     */
/*                  info - union PersonalInfo                */
/*-----------------------------------------------------------*/
struct Person {
    char name[50];
    union PersonalInfo info;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads person's name and age, stores them  */
/*                 in nested structure-union, and prints.    */
/*-----------------------------------------------------------*/
int main() {
    struct Person p;

    /* Read inputs */
    scanf("%s", p.name);
    scanf("%d", &p.info.age);

    /* Print output */
    printf("Name: %s, Age: %d\n", p.name, p.info.age);

    return 0; /* Successful termination */
}
