/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Split a String into Words*/
/*   Description   : Program to split a       */
/*                   string into words        */
/*                   manually without using   */
/*                   strtok() or string funcs.*/
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library

int main() {
    char str[101];      // Step 1: Input string buffer
    int i = 0;

    // Step 2: Read input line (supports spaces)
    fgets(str, sizeof(str), stdin);

    // Step 3: Process each character
    while (str[i] != '\0') {

        if (str[i] == ' ') {
            // Step 4: Space → end of word (print newline)
            printf("\n");
        }
        else if (str[i] != '\n') {
            // Step 5: Print characters of the word
            printf("%c", str[i]);
        }
        i++;
    }

    return 0;   // End of program
}
