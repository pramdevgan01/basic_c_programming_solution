/*************************************************************/
/*                                                           */
/*   File Name   : arithmetic_fp.c                           */
/*   Author      : Param Vishwakarma                         */
/*   Description : Performs basic arithmetic operations       */
/*                 (addition, subtraction, multiplication,    */
/*                 division) using function pointers.         */
/*                 The user enters two integers and selects   */
/*                 an operation. A function pointer invokes    */
/*                 the correct arithmetic function.           */
/*                                                           */
/*   Input       : Two integers (a, b)                       */
/*                 Operation choice (1-add, 2-sub, 3-mul, 4-div) */
/*                                                           */
/*   Output      : Result of the chosen arithmetic operation  */
/*                 or an appropriate error message.           */
/*                                                           */
/*   Constraints : Division must handle divide-by-zero.       */
/*                 Function pointers must be used.            */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*     Arithmetic Functions                                  */
/*-----------------------------------------------------------*/
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    /* Caller checks for divide-by-zero */
    return a / b;
}

int main(void)
{
    int a, b, choice;

    /* Read two integers */
    scanf("%d %d", &a, &b);

    /* Read operation choice */
    scanf("%d", &choice);

    /*-------------------------------------------------------*/
    /*    Declare a function pointer                         */
    /*-------------------------------------------------------*/
    int (*operation)(int, int) = NULL;

    /*-------------------------------------------------------*/
    /*    Assign function pointer based on user choice       */
    /*-------------------------------------------------------*/
    switch (choice) {
        case 1:
            operation = add;
            printf("Addition = %d", operation(a, b));
            break;

        case 2:
            operation = subtract;
            printf("Subtraction = %d", operation(a, b));
            break;

        case 3:
            operation = multiply;
            printf("Multiplication = %d", operation(a, b));
            break;

        case 4:
            if (b == 0) {
                printf("Error: Division by zero is not allowed.");
                return 0;
            }
            operation = divide;
            printf("Division = %d", operation(a, b));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
