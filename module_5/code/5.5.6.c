/*************************************************************/
/*                                                           */
/*   File Name   : main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reads a string and an operation (reverse/ */
/*                 upper). Calls corresponding functions      */
/*                 defined in stringutils.h.                  */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include <string.h>
#include "stringutils.h"
#include "stringutils.c"

int main(void)
{
    char str[101];
    char op[10];

    /* Read string and operation */
    scanf("%s %s", str, op);

    /* Perform requested action */
    if (strcmp(op, "reverse") == 0) {
        reverseString(str);
        printf("%s", str);
    }
    else if (strcmp(op, "upper") == 0) {
        toUpperCase(str);
        printf("%s", str);
    }
    else {
        printf("Invalid operation");
    }

    return 0;
}
