/*************************************************************/
/*                                                           */
/*   File Name   : helper.c                                  */
/*   Author      : Param Vishwakarma                         */
/*   Description : Implements helper functions that          */
/*                 demonstrate:                              */
/*                 - extern variable usage                   */
/*                 - static variable behavior                */
/*   Date        : February 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include "helper.h"

/*-----------------------------------------------------------*/
/*  File-scope static variable                               */
/*  - Retains its value between function calls               */
/*  - Visible ONLY inside this file                          */
/*-----------------------------------------------------------*/
static int staticVar = 0;

/*-----------------------------------------------------------*/
/* Function Name : printExtern                               */
/* Description   : Prints the extern variable 'g'.           */
/* Output        : Ends with TWO SPACES before newline.      */
/*-----------------------------------------------------------*/
void printExtern(void) {
    printf("Extern variable - %d  \n", g);   // TWO SPACES before \n
}

/*-----------------------------------------------------------*/
/* Function Name : printStatic                               */
/* Description   : Stores a value in static variable and      */
/*                 prints it.                                */
/* Output        : NO trailing spaces, NO newline.           */
/*-----------------------------------------------------------*/
void printStatic(int value) {
    staticVar = value;
    printf("Static variable - %d", staticVar);
}
