/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Uses arithmetic functions declared in     */
/*                 arithmetic.h to perform + or - on user    */
/*                 input values.                             */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "arithmetic.h"

/*-----------------------------------------------------------*/
/*           Function Definitions (user-defined)             */
/*-----------------------------------------------------------*/
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {

    int a, b;
    char op;

    /* Read input */
    scanf("%d %d %c", &a, &b, &op);

    int result;

    if (op == '+')
        result = add(a, b);
    else if (op == '-')
        result = subtract(a, b);
    else {
        printf("Invalid operator");
        return 0;
    }

    printf("%d", result);

    return 0;
}
