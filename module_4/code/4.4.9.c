/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Remove Non Alphabets     */
/*   Description   : Program to read a string */
/*                   and remove all non-      */
/*                   alphabet characters.     */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library

int main() {
    char str[101];      // Step 1: Input string buffer
    char result[101];   // Step 2: Output string (only alphabets)
    int i = 0, j = 0;   // Step 3: Iterators

    // Step 4: Read input string (supports spaces)
    fgets(str, sizeof(str), stdin);

    // Step 5: Loop through each character
    while (str[i] != '\0') {

        // Check if alphabet (uppercase A-Z or lowercase a-z)
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) 
        {
            result[j] = str[i];
            j++;
        }

        i++;
    }

    // Step 6: Null-terminate the filtered string
    result[j] = '\0';

    // Step 7: Output the modified string
    printf("Modified String: %s", result);

    return 0;  // End of program
}
