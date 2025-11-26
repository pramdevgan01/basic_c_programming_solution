/***************************************************************/
/*                                                             */
/*   File Name   : main.c                                      */
/*   Author      : Param Vishwakarma                           */
/*   Description : Reads user input (0,1,2) and sets the       */
/*                 global Mode variable. Prints the selected   */
/*                 mode name using enum from config.h.         */
/*                                                             */
/*   Date        : November 2025                               */
/*                                                             */
/***************************************************************/

#include <stdio.h>
#include "config.h"
#include "config.c"   /* For this online judge setup */

int main(void)
{
    int input;
    scanf("%d", &input);

    /* Input validation like the working version */
    if (input < 0 || input > 2) {
        printf("Invalid input\n");
        return 1;
    }

    currentMode = (Mode)input;

    switch (currentMode) {
        case DEBUG:
            printf("Mode: DEBUG\n");
            break;
        case RELEASE:
            printf("Mode: RELEASE\n");
            break;
        case TEST:
            printf("Mode: TEST\n");
            break;
    }

    return 0;
}