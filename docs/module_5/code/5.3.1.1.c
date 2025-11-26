/*************************************************************/
/*                                                           */
/*   File Name   : Main.c                                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates storage classes in C:        */
/*                 - auto                                    */
/*                 - global                                  */
/*                 - register                                */
/*                 - extern                                  */
/*                 - static (handled in helper.c)            */
/*                                                           */
/*   Notes       : First 5 printed lines MUST end with       */
/*                 TWO SPACES before newline '\n'.           */
/*                 Last line MUST have NO trailing spaces    */
/*                 and NO newline.                           */
/*                                                           */
/*   Date        : Nov 2025                                  */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "helper.h"
/* you may need this line so helper.c is pulled in:      */
/* #include "helper.c"                                   */
#include "helper.c"  

/*-----------------------------------------------------------*/
/*  Global variable (accessible in this file and via extern) */
/*-----------------------------------------------------------*/
int global = 10;

/*-----------------------------------------------------------*/
/*  Extern variable defined here, used in helper.c           */
/*-----------------------------------------------------------*/
int g;

int main(void) {

    int input;

    /* Read input (example: 5) */
    scanf("%d", &input);

    /* auto variable */
    auto int a = 32;

    /* register variable */
    register char c = 'b';

    /* Set extern variable */
    g = input;

    /*-----------------------------------------------------*/
    /*  EXACT SPACING REQUIREMENT:                         */
    /*  First 5 lines end with TWO SPACES before '\n'      */
    /*-----------------------------------------------------*/

    printf("Auto integer Value - %d  \n", a);          // two spaces
    printf("Global variable - %d  \n", global);        // two spaces
    printf("Register character - %c  \n", c);          // two spaces

    /* extern print (already has two spaces in helper.c) */
    printExtern();

    printf("The updated value of 'g'  - %d  \n", g);   // two spaces

    /* Final static value (NO trailing space, NO newline) */
    printStatic(input);

    return 0;
}
