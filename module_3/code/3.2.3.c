//Enhance your coding skills, start writing your code here!!
/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Print Alphabets in Order */
/*   Description   : Program to print all     */
/*                   uppercase alphabets from */
/*                   a given starting letter  */
/*                   until 'Z' using a loop.  */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O header for printf and scanf

int main(void) {
    char ch;   // Variable to store the input character

    // Step 1: Take input from user
    // scanf reads a single character entered by the user
    scanf("%c", &ch);

    // Step 2: Validate input
    // Check if the entered character is an uppercase letter (between 'A' and 'Z')
    if (ch < 'A' || ch > 'Z') {
        // If not uppercase, print error message
        printf("Invalid input. Please enter an uppercase letter between 'A' and 'Z'.");
    } else {
        // Step 3: Use a for loop to iterate from the input character to 'Z'
        // Each iteration prints the current character on a new line
        for (char i = ch; i <= 'Z'; i++) {
            printf("%c\n", i);   // Print the current alphabet
        }
    }

    // Step 4: Return 0 to indicate program ended successfully
    return 0;
}
