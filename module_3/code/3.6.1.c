/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Vowel Encounter          */
/*   Description   : Program to read a string */
/*                   and print characters one */
/*                   by one until a vowel is  */
/*                   encountered. When a      */
/*                   vowel (a, e, i, o, u or  */
/*                   their uppercase forms)   */
/*                   appears, printing stops  */
/*                   using the break command. */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input and output functions

int main(void) {
    char str[101];   // Step 1: Declare a character array to store input string (max 100 characters)
    int i;            // Step 2: Loop variable for traversing the string

    
    // Step 3: Read the string input from the user
    // Using %s reads a word (no spaces)
    scanf("%s", str);

    // Step 4: Loop through each character of the string until the null terminator '\0'
    for (i = 0; str[i] != '\0'; i++) {

        // Step 4.1: Check if the current character is a vowel
        // Both lowercase and uppercase vowels are considered
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {

            // Step 4.2: If a vowel is found, exit the loop using break
            break;
        }

        // Step 4.3: If not a vowel, print the current character
        printf("%c", str[i]);
    }

    // Step 5: Return 0 indicates successful program execution
    return 0;
}
