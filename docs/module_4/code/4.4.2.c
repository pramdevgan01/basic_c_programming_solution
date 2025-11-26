/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Changing a Specific      */
/*                   Character in a String    */
/*   Description   : Program to read a string */
/*                   and replace a character  */
/*                   at a given index.        */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library
#include <string.h>    // For strlen()

int main() {
    char str[101];      // Step 1: String (max length 100)
    int index;          // Step 2: Index to modify
    char newChar;       // Step 3: New character

    // Step 4: Read string (fgets supports spaces)
    fgets(str, sizeof(str), stdin);

    // Step 5: Read index
    scanf("%d", &index);

    // Step 6: Read replacement character (consume newline first)
    getchar();          // remove leftover newline
    scanf("%c", &newChar);

    // Step 7: Replace the character at the given index
    str[index] = newChar;

    // Step 8: Print the modified string
    printf("%s", str);

    return 0;   // End of program
}
