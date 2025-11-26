/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Reverse the Vowels       */
/*   Description   : Program to reverse only  */
/*                   the vowels in a string   */
/*                   while keeping other      */
/*                   characters unchanged.    */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library

// Step 1: Function to check if a character is a vowel
int isVowel(char ch) {
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
}

int main() {
    char str[101];
    char vowels[101];    // To store vowels
    int i, v = 0;        // v = vowel index

    // Step 2: Read input string (supports spaces)
    fgets(str, sizeof(str), stdin);

    // Step 3: Extract all vowels from the string
    for (i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            vowels[v] = str[i];
            v++;
        }
    }

    // Step 4: Reverse vowels by taking them from the end
    int k = v - 1;   // last vowel index

    // Step 5: Replace vowels in original positions
    for (i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            str[i] = vowels[k];
            k--;
        }
    }

    // Step 6: Print modified string
    printf("Modified string: %s", str);

    return 0;   // End of program
}
