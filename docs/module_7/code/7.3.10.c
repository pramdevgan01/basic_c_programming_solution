/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program demonstrating the combined usage  */
/*                 of enum and typedef. An enum represents   */
/*                 employee roles (INTERN, DEVELOPER,        */
/*                 MANAGER). A typedef defines a Person      */
/*                 structure with a name and role.           */
/*                                                           */
/*                 For each person, their name is printed    */
/*                 (role + 1) times, where:                  */
/*                     INTERN    → 0 → print once            */
/*                     DEVELOPER → 1 → print twice           */
/*                     MANAGER   → 2 → print thrice          */
/*                                                           */
/*   Input:                                                  */
/*       n (number of people)                                */
/*       Next n lines:                                        */
/*           name  (string without spaces)                   */
/*           role  (0=INTERN, 1=DEVELOPER, 2=MANAGER)        */
/*                                                           */
/*   Output:                                                 */
/*       For each person, print their name (role+1) times.   */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           2                                               */
/*           Alice 1                                         */
/*           Bob 0                                           */
/*       Output:                                             */
/*           Alice                                            */
/*           Alice                                            */
/*           Bob                                              */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Enum Name : Role                                          */
/* Description : Represents an employee role                 */
/* Values      : INTERN = 0, DEVELOPER = 1, MANAGER = 2      */
/*-----------------------------------------------------------*/
enum Role {
    INTERN = 0,
    DEVELOPER,
    MANAGER
};

/*-----------------------------------------------------------*/
/* Typedef Name : Person                                     */
/* Description  : Defines a person with a name and a role    */
/* Members      : name - string                              */
/*                role - enum Role                           */
/*-----------------------------------------------------------*/
typedef struct {
    char name[50];
    enum Role role;
} Person;

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads details of n persons and prints     */
/*                 each name (role + 1) times.               */
/*-----------------------------------------------------------*/
int main() {
    int n;
    scanf("%d", &n);

    Person people[n];

    /* Read input values */
    for (int i = 0; i < n; i++) {
        scanf("%s %d", people[i].name, (int*)&people[i].role);
    }

    /* Print pattern based on role */
    for (int i = 0; i < n; i++) {
        int repeat = people[i].role + 1;  // INTERN=1, DEV=2, MANAGER=3

        for (int j = 0; j < repeat; j++) {
            printf("%s\n", people[i].name);
        }
    }

    return 0;  /* Successful termination */
}
