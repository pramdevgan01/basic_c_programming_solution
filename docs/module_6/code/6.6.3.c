/*************************************************************
 *                                                           *
 *   File Name   : pointer_dispatch_calculator.c             *
 *   Author      : Param Vishwakarma                         *
 *   Description : Menu-driven calculator using function     *
 *                 pointers. Supports:                       *
 *                   1 → Add                                 *
 *                   2 → Subtract                            *
 *                   3 → Multiply                            *
 *                   4 → Divide (integer division)           *
 *                 User enters two integers and an option.   *
 *                 The appropriate function is called via    *
 *                 a function pointer.                       *
 *                                                           *
 *   Input  : First integer a                                *
 *            Second integer b                               *
 *            Option (1–4)                                   *
 *                                                           *
 *   Output : For valid operation and no divide-by-zero:     *
 *               Result: <value>                             *
 *            For divide-by-zero:                            *
 *               Error: Division by zero is not allowed.     *
 *            For invalid option:                            *
 *               Error                                       *
 *                                                           *
 *   Constraints : Division is integer division              *
 *                 Division by zero must be handled          *
 *                                                           *
 *   Sample Input :                                          *
 *       10                                                  *
 *       2                                                   *
 *       3                                                   *
 *                                                           *
 *   Sample Output :                                         *
 *       Result: 20                                          *
 *                                                           *
 *   Date        : November 2025                             *
 *                                                           *
 *************************************************************/

#include <stdio.h>

/*------------------ Arithmetic Functions -------------------*/
int add(int a, int b)       { return a + b; }
int subtract(int a, int b)  { return a - b; }
int multiply(int a, int b)  { return a * b; }
int divide_int(int a, int b){ return a / b; }  /* Caller must ensure b != 0 */

/*------------------------- main() --------------------------*/
int main(void)
{
    int a, b, option;

    /* Read two integers and the operation choice */
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &option);

    /* Declare function pointer */
    int (*operation)(int, int) = NULL;

    /* Decide which function to use based on option */
    switch (option)
    {
        case 1:
            operation = add;
            break;

        case 2:
            operation = subtract;
            break;

        case 3:
            operation = multiply;
            break;

        case 4:
            if (b == 0) {
                /* Specific divide-by-zero handling */
                printf("Error: Division by zero is not allowed.");
                return 0;
            }
            operation = divide_int;
            break;

        default:
            /* Option outside 1–4 */
            printf("Error");
            return 0;
    }

    /* Call the selected operation via function pointer */
    int result = operation(a, b);

    /* Print result in required format */
    printf("Result: %d", result);

    return 0;
}
