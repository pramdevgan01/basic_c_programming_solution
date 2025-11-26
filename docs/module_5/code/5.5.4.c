/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reads two integers and an operation       */
/*                 (max/min/abs). Uses macro utilities       */
/*                 declared in utils.h to compute the result.*/
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include <string.h>
#include "utils.h"

int main(void)
{
    int a, b;
    char op[10];

    /* Read: number number operation (e.g., 10 -20 max) */
    scanf("%d %d %s", &a, &b, op);

    /*-------------------------------------------------------*/
    /*                Perform selected operation              */
    /*-------------------------------------------------------*/

    if (strcmp(op, "max") == 0) {
        printf("Maximum: %d", MAX(a, b));
    }
    else if (strcmp(op, "min") == 0) {
        printf("Minimum: %d", MIN(a, b));
    }
    else if (strcmp(op, "abs") == 0) {
        /* Absolute value of the first integer */
        printf("Absolute: %d", ABS(a));
    }
    else {
        printf("Invalid operation");
    }

    return 0;
}
