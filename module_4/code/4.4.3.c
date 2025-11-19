/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Read and Display         */
/*                   Characters               */
/*   Description   : Program to read a string */
/*                   and print each character */
/*                   on a new line using a    */
/*                   for loop. Spaces print   */
/*                   a line containing a      */
/*                   single space character.  */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library
#include <string.h>    // For strlen()

int main() {
    char str[101];      // Step 1: String (max 100 characters)

    // Step 2: Read the string (supports spaces)
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    // Step 3: Print heading
    printf("The characters of the string are:\n");

    // Step 4: Iterate through each character
    for (int i = 0; str[i] != '\0'; i++) {

        // If the character is a space, print a line that contains a single space
        if (str[i] == ' ') {
            printf(" \n");    // single space followed by newline (matches judge)
        } 
        // Otherwise print the character (skip the trailing newline from fgets)
        else if (str[i] != '\n') {
            printf("%c\n", str[i]);
        }
    }

    return 0;   // End of program
}
