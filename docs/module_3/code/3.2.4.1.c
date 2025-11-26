//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Uppercase or Lowercase         */
/*                   Transformation                 */
/*   Description   : Program to convert a string    */
/*                   into all uppercase or all      */
/*                   lowercase letters depending on */
/*                   user choice ('U' or 'L').      */
/*   Date          : October 2025                   */
/*                                                  */
/****************************************************/

#include <stdio.h>    // For input and output functions
#include <string.h>   // For string length and newline removal

int main(void) {
    char str[101];   // Array to hold input string (max 100 characters)
    char choice;     // User's choice: 'U' for uppercase, 'L' for lowercase

    // Step 1: Read the string (may include spaces)
    // Using fgets to allow reading input with spaces
    fgets(str, sizeof(str), stdin);

    // Step 2: Remove trailing newline if fgets captured it
    str[strcspn(str, "\n")] = '\0';

    // Step 3: Read user's choice ('U' or 'L')
    scanf("%c", &choice);

    // Step 4: Check if choice is 'U' (convert to uppercase)
    if (choice == 'U') {
        // Traverse through the string character by character
        for (int i = 0; str[i] != '\0'; i++) {
            // If character is lowercase (ASCII 97–122 → 'a'–'z')
            if (str[i] >= 'a' && str[i] <= 'z') {
                // Subtract 32 to convert to uppercase (ASCII trick)
                str[i] = str[i] - 32;
            }
        }
    }
    // Step 5: Check if choice is 'L' (convert to lowercase)
    else if (choice == 'L') {
        // Traverse through the string character by character
        for (int i = 0; str[i] != '\0'; i++) {
            // If character is uppercase (ASCII 65–90 → 'A'–'Z')
            if (str[i] >= 'A' && str[i] <= 'Z') {
                // Add 32 to convert to lowercase (ASCII trick)
                str[i] = str[i] + 32;
            }
        }
    }
    // Step 6: If invalid choice entered
    else {
        printf("Invalid choice! Please enter 'U' or 'L'.");
        return 0; // Exit early
    }

    // Step 7: Print final converted string
    printf("Converted string: %s", str);

    // Step 8: Return success
    return 0;
}

