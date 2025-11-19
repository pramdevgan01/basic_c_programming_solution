/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : String Literal with a    */
/*                   Predefined Size          */
/*   Description   : Program to read a string */
/*                   into a predefined char   */
/*                   array and display it.    */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library

int main() {
    char str[101];      // Step 1: Predefined character array (max 100 chars)

    // Step 2: Read the string (supports spaces)
    fgets(str, sizeof(str), stdin);

    // Step 3: Print the string with prefix
    printf("The string is: %s", str);

    return 0;   // End of program
}
