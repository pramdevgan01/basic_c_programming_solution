/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Print the First Character*/
/*   Description   : Program to read a string */
/*                   and print its first      */
/*                   character.               */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>    // Standard I/O library

int main() {
    char str[101];     // Step 1: String with max length 100

    // Step 2: Read the input string (fgets reads spaces too)
    fgets(str, sizeof(str), stdin);

    // Step 3: Print the first character
    printf("The first character of the string is: %c", str[0]);

    return 0;   // End of program
}
