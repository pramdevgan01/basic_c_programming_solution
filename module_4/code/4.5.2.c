/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Manual String Copy       */
/*                   Without Library Funcs    */
/*   Description   : Program to manually copy */
/*                   one string to another    */
/*                   using a loop.            */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library

int main() {
    char src[101];      // Step 1: Source string
    char dest[101];     // Step 2: Destination string
    int i = 0;

    // Step 3: Read the input string (supports spaces)
    fgets(src, sizeof(src), stdin);

    // Step 4: Manual copying character by character
    while (src[i] != '\0') {
        if (src[i] == '\n') {      // Remove newline if present
            dest[i] = '\0';
            break;
        }
        dest[i] = src[i];
        i++;
    }

    // Step 5: Null terminate destination string
    dest[i] = '\0';

    // Step 6: Print copied string
    printf("Copied String: %s", dest);

    return 0;   // End of program
}
