/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Check for Anagram Strings*/
/*   Description   : Program to check whether */
/*                   two lowercase strings    */
/*                   are anagrams by comparing*/
/*                   character frequencies.   */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>      // Standard I/O library

int main() {
    char str1[101], str2[101];
    int freq1[26] = {0};    // Step 1: Frequency of characters in str1
    int freq2[26] = {0};    // Step 2: Frequency of characters in str2
    int i = 0;

    // Step 3: Read both strings using fgets
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Step 4: Remove newline characters if present
    for (i = 0; str1[i] != '\0'; i++)
        if (str1[i] == '\n') str1[i] = '\0';

    for (i = 0; str2[i] != '\0'; i++)
        if (str2[i] == '\n') str2[i] = '\0';

    // Step 5: Count frequencies in str1
    i = 0;
    while (str1[i] != '\0') {
        freq1[str1[i] - 'a']++;
        i++;
    }

    // Step 6: Count frequencies in str2
    i = 0;
    while (str2[i] != '\0') {
        freq2[str2[i] - 'a']++;
        i++;
    }

    // Step 7: Compare both frequency arrays
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Strings are not anagrams");
            return 0; // Not anagrams
        }
    }

    // Step 8: If all frequencies match → anagrams
    printf("Strings are anagrams");

    return 0;   // End of program
}
