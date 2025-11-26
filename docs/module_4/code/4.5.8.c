/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Length of the Final Word */
/*   Description   : Program to read a string */
/*                   (with possible leading,  */
/*                   trailing, or multiple    */
/*                   spaces) and calculate    */
/*                   the length of the last   */
/*                   word manually without    */
/*                   using string functions.  */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    char str[101];    // Step 1: Input string buffer
    int i, length = 0;

    // Step 2: Read full line including spaces using fgets
    fgets(str, sizeof(str), stdin);

    // Step 3: Find the end of the string
    for (i = 0; str[i] != '\0'; i++);

    // Step 4: Move backward to skip trailing spaces
    i--;
    while (i >= 0 && str[i] == ' ') {
        i--;
    }

    // Step 5: Count characters of the last word (until a space or start of string)
    while (i >= 0 && str[i] != ' ') {
        length++;
        i--;
    }

    // Step 6: Print length of the last word
    printf("%d", length);

    return 0;   // End of program
}
