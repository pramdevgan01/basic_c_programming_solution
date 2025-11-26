/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : String Literal without   */
/*                   Specifying Size          */
/*   Description   : Program to read a string */
/*                   and assign it to a char  */
/*                   pointer without setting  */
/*                   a size explicitly.       */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O functions

int main() {
    char temp[101];     // Step 1: Temporary buffer to read user input
    char *ptr;          // Step 2: Character pointer (no size specified)

    // Step 3: Read input string (supports spaces)
    fgets(temp, sizeof(temp), stdin);

    // Step 4: Remove trailing newline from fgets
    for (int i = 0; temp[i] != '\0'; i++) {
        if (temp[i] == '\n') {
            temp[i] = '\0';
            break;
        }
    }

    // Step 5: Assign pointer to the string (simulating literal assignment)
    ptr = temp;

    // Step 6: Display the string
    printf("The string is: %s", ptr);

    return 0;   // End of program
}
