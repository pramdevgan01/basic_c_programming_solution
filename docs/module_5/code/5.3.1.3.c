/*************************************************************/
/*                                                           */
/*   File Name   : helper.c                                  */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates extern and static storage     */
/*                 classes. The extern variable 'g' is        */
/*                 accessed from main.c, and a static local   */
/*                 variable retains its value across calls.   */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>                       // Standard I/O functions (printf)

extern int g;                             // Extern declaration: 'g' is defined in another file (main.c)

void showExternAndStatic() {              // Function to display extern and static variable values
    static int staticVar = 5;             // Static variable: retains value between function calls

    printf("Extern variable - %d  \n", g);                // Print the value of extern variable 'g' (2 spaces before newline)
    printf("The updated value of 'g'  - %d  \n", g);      // Print updated extern variable (same spacing requirement)
    printf("Static variable - %d\n",staticVar);           // Print static variable (no extra spaces at end)
}
