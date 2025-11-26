/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Uses recursive math utilities from        */
/*                 mathutils.h to compute factorial or power */
/*                 based on user input.                      */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include <string.h>
#include "mathutils.h"

int main(void)
{
    char op[10];
    int a, b;

    /* Read operation and required numbers */
    scanf("%s", op);

    /* ---------------------- FACTORIAL ---------------------- */
    if (strcmp(op, "fact") == 0)
    {
        scanf("%d", &a);

        /* Validate Range */
        if (a < 0 || a > 12)
        {
            printf("Invalid input");
            return 0;
        }

        printf("Factorial: %d", factorial(a));
    }

    /* ---------------------- POWER -------------------------- */
    else if (strcmp(op, "power") == 0)
    {
        scanf("%d %d", &a, &b);

        /* Validate exponent */
        if (b < 0 || b > 10)
        {
            printf("Invalid input");
            return 0;
        }

        printf("Power: %d", power(a, b));
    }

    /* ---------------------- INVALID ------------------------ */
    else
    {
        printf("Invalid operation");
    }

    return 0;
}
