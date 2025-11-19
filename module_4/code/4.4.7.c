/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : String Provided by the   */
/*                   User                     */
/*   Description   : Program to read a string */
/*                   from user input and      */
/*                   display it back.         */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library

int main() {
    char str[101];      // Step 1: Create buffer for user input

    // Step 2: Read entire line (supports spaces)
    fgets(str, sizeof(str), stdin);

    // Step 3: Display the string with required format
    printf("You entered: %s", str);

    return 0;   // End of program
}
