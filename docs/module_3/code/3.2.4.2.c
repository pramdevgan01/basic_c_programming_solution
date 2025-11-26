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

#include <stdio.h>    // For input/output functions
#include <string.h>   // For handling strings (strlen, strcspn)
#include <ctype.h>    // For character functions: toupper(), tolower()

int main(void) {
    char str[101];   // Array to store the input string (100 chars max + '\0')
    char choice;     // To store the user's choice ('U' or 'L')

    // Step 1: Take string input (with spaces allowed)
    // Using fgets ensures we can capture spaces unlike scanf("%s")
    fgets(str, sizeof(str), stdin);

    // Step 2: Remove the newline character if fgets captured it
    str[strcspn(str, "\n")] = '\0';

    // Step 3: Read user choice
    scanf("%c", &choice);

    // Step 4: Convert string based on user choice
    if (choice == 'U') {
        // Convert each character to uppercase
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = toupper((unsigned char)str[i]);  
        }
    } 
    else if (choice == 'L') {
        // Convert each character to lowercase
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = tolower((unsigned char)str[i]);  
        }
    } 
    else {
        // Handle invalid choice
        printf("Invalid choice! Please enter 'U' or 'L'.");
        return 0; // Exit early
    }

    // Step 5: Print the transformed string
    printf("Converted string: %s", str);

    // Step 6: Program ends successfully
    return 0;
}
