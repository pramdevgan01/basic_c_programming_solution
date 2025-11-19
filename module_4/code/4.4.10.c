/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Display Character        */
/*                   Occurrence               */
/*   Description   : Program to count how     */
/*                   many times each unique   */
/*                   character occurs in a    */
/*                   string (ASCII-sorted).   */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library

int main() {
    char str[101];      // Step 1: Input string
    int freq[256] = {0}; // Step 2: Frequency array for all ASCII chars
    int i;

    // Step 3: Read input string
    fgets(str, sizeof(str), stdin);

    // Step 4: Count occurrences
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {   // Ignore the newline from fgets
            freq[(unsigned char)str[i]]++;
        }
    }

    // Step 5: Print heading
    printf("Character occurrences:\n");

    // Step 6: Print characters in ascending ASCII order
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;   // End of program
}
