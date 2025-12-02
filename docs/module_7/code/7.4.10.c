/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates how a union can store either */
/*                 an employee's salary or bonus. The user   */
/*                 selects which value to input, and the     */
/*                 program displays the chosen value.        */
/*                                                           */
/*   Input:                                                  */
/*       choice (1 = Salary, 2 = Bonus)                      */
/*       amount (float > 0)                                  */
/*                                                           */
/*   Output:                                                 */
/*       If choice = 1 → Employee salary: <value>            */
/*       If choice = 2 → Employee bonus: <value>             */
/*       Otherwise → Invalid choice message                  */
/*                                                           */
/*   Example:                                                */
/*       Input:                                              */
/*           2                                               */
/*           20000.50                                        */
/*       Output:                                             */
/*           Employee bonus: 20000.50                        */
/*                                                           */
/*   Date        : December 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/* Union Name : Payment                                      */
/* Description : Stores salary or bonus using shared memory. */
/* Members     : salary - float salary value                 */
/*               bonus  - float bonus value                  */
/*-----------------------------------------------------------*/
union Payment {
    float salary;
    float bonus;
};

/*-----------------------------------------------------------*/
/* Function Name : main                                      */
/* Description   : Reads user selection and amount, stores   */
/*                 it in the appropriate union member, and   */
/*                 prints the corresponding result.          */
/*-----------------------------------------------------------*/
int main() {
    int choice;
    float amount;

    union Payment p;

    /* Read selection and amount */
    scanf("%d", &choice);
    scanf("%f", &amount);

    switch (choice) {
        case 1:  /* Salary */
            p.salary = amount;
            printf("Employee salary: %.2f\n", p.salary);
            break;

        case 2:  /* Bonus */
            p.bonus = amount;
            printf("Employee bonus: %.2f\n", p.bonus);
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            break;
    }

    return 0; /* Successful termination */
}
