/*************************************************************
 *                                                           *
 *   File Name   : compare_fp.c                              *
 *   Author      : Param Vishwakarma                         *
 *   Description : Demonstrates the use of function pointers *
 *                 to perform comparison operations:         *
 *                     - Greater than                        *
 *                     - Less than                           *
 *                     - Equal to                            *
 *                     - Not equal to                        *
 *                 The user selects an operation (1–4),      *
 *                 and the chosen comparator runs via        *
 *                 a function pointer.                       *
 *                                                           *
 *   Input Format:                                           *
 *       Two integers a and b                                *
 *       Choice (1 to 4):                                    *
 *          1 → Greater than                                 *
 *          2 → Less than                                    *
 *          3 → Equal to                                     *
 *          4 → Not equal to                                 *
 *                                                           *
 *   Output Format:                                          *
 *       <Operation> = True/False                            *
 *                                                           *
 *   Sample Input:                                           *
 *       20 10                                               *
 *       1                                                   *
 *                                                           *
 *   Sample Output:                                          *
 *       Greater than = True                                  *
 *                                                           *
 *   Date        : November 2025                             *
 *                                                           *
 *************************************************************/

#include <stdio.h>

/* Comparison functions */
int greaterThan(int a, int b) { return a > b; }
int lessThan(int a, int b)    { return a < b; }
int equalTo(int a, int b)     { return a == b; }
int notEqual(int a, int b)    { return a != b; }

int main(void)
{
    int a, b, choice;

    /*----------------------------------------------*/
    /* Correct input reading                         */
    /*----------------------------------------------*/
    scanf("%d %d", &a, &b);  /* Read both numbers   */
    scanf("%d", &choice);    /* Read choice         */

    int (*cmp)(int, int) = NULL;
    char operation[20];

    /*----------------------------------------------*/
    /* Select comparison function                    */
    /*----------------------------------------------*/
    if (choice == 1) {
        cmp = greaterThan;
        sprintf(operation, "Greater than");
    }
    else if (choice == 2) {
        cmp = lessThan;
        sprintf(operation, "Less than");
    }
    else if (choice == 3) {
        cmp = equalTo;
        sprintf(operation, "Equal to");
    }
    else if (choice == 4) {
        cmp = notEqual;
        sprintf(operation, "Not equal to");
    }
    else {
        printf("Invalid choice");
        return 0;
    }

    /* Perform comparison */
    int result = cmp(a, b);

    /* Print result */
    printf("%s = %s", operation, result ? "True" : "False");

    return 0;
}