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

#include <stdio.h>                  // Standard I/O library for printf and scanf

#include "helper.c"                 // Include helper file containing extern/static function

int globalVar = 10;                 // Global variable with initial value 10

int g;                              // Extern-shared global variable (used in helper.c)

int main() {                        // Program entry point
    int input;                      // Local variable to store user input
    scanf("%d", &input);            // Read integer input from user and store in 'input'

    g = input;                      // Assign the user input to global extern variable 'g'

    int autoVar = 32;               // Automatic variable (default storage class)
    register char ch = 'b';         // register variable stored in CPU register for fast access

    printf("Auto integer Value - %d  \n", autoVar);     // Print auto variable with two spaces before newline
    printf("Global variable - %d  \n", globalVar);      // Print global variable with required spacing
    printf("Register character - %c  \n", ch);          // Print register variable with two spaces before newline

    showExternAndStatic();          // Call function from helper.c to show extern and static values

return 0;                           // Return 0 to indicate successful execution
}

