/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Total Number of          */
/*                   Characters in a String   */
/*   Description   : Program to read a string */
/*                   and count all characters */
/*                   manually without using   */
/*                   any inbuilt functions.   */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>      // Standard I/O library

int main() {
    char str[101];       // Step 1: String input buffer
    int count = 0;       // Step 2: Counter for characters
    int i = 0;           // Step 3: Index for traversal

    // Step 4: Read input string (supports spaces)
    fgets(str, sizeof(str), stdin);

    // Step 5: Count characters until null terminator '\0'
    while (str[i] != '\0') {
        if (str[i] != '\n') {   // Ignore newline added by fgets
            count++;
        }
        i++;
    }

    // Step 6: Print result
    printf("Total number of characters: %d", count);

    return 0;  // End of program
}
