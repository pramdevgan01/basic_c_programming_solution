/*************************************************************/
/*                                                           */
/*   File Name   : calculator_fp_array.c                     */
/*   Author      : Param Vishwakarma                         */
/*   Description : Implements a basic calculator using an    */
/*                 array of function pointers. Each          */
/*                 operation (add, subtract, multiply,        */
/*                 divide) is mapped to an index (0–3).       */
/*                 Division-by-zero is handled safely.        */
/*                                                           */
/*   Input       : Two integers (a, b)                       */
/*                 Operator code (0 = add, 1 = subtract,      */
/*                                2 = multiply, 3 = divide)   */
/*                                                           */
/*   Output      : Result of the operation or "Error"        */
/*                                                           */
/*   Constraints : -1000 ≤ a, b ≤ 1000                       */
/*                 op_code ∈ {0, 1, 2, 3}                    */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------*/
/*  Calculator operation functions                           */
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
    /* The caller checks for divide-by-zero */
    return a / b;
}

int main(void)
{
    int a, b, op;

    /* Read inputs */
    scanf("%d %d", &a, &b);
    scanf("%d", &op);

    /*-------------------------------------------------------*/
    /*  Array of function pointers                           */
    /*-------------------------------------------------------*/
    int (*operations[4])(int, int) = { add, subtract, multiply, divide };

    /*-------------------------------------------------------*/
    /*  Validate divide-by-zero                              */
    /*-------------------------------------------------------*/
    if (op == 3 && b == 0) {
        printf("Error");
        return 0;
    }

    /*-------------------------------------------------------*/
    /*  Execute selected operation                           */
    /*-------------------------------------------------------*/
    int result = operations[op](a, b);

    /* Print result */
    printf("%d", result);

    return 0;
}
