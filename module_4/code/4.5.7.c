/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Index of First Non       */
/*                   Repeating Character      */
/*   Description   : Program to find the      */
/*                   index of the first       */
/*                   non-repeating character  */
/*                   in a lowercase string.   */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>      // Standard I/O library

int main() {
    char str[101];
    int freq[26] = {0};   // Step 1: Frequency array for a-z
    int i;

    // Step 2: Read input string
    fgets(str, sizeof(str), stdin);

    // Step 3: Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    // Step 4: Find first index where frequency is 1
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] == 1) {
                printf("%d", i);
                return 0;   // Found
            }
        }
    }

    // Step 5: If no non-repeating character found
    printf("-1");

    return 0;  // End of program
}
