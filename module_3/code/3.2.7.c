//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Reverse Number                 */
/*   Description   : Program to reverse digits of   */
/*                   an integer using a for loop.   */
/*                                                  */
/*   Mathematical Idea:                             */
/*     Extract last digit → n % 10                  */
/*     Remove last digit → n / 10                   */
/*     Build reversed → rev = rev * 10 + digit      */
/*                                                  */
/*   Example:                                       */
/*     n = -54321                                   */
/*     Reverse = -12345                             */
/*                                                  */
/*   Date          : October 2025                   */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;                // Input number from user
    int original;         // To store original number for display
    int rev = 0;          // Variable to store reversed number
    int digit;            // Variable to hold extracted digit

    // Step 1: Take input
    scanf("%d", &n);

    // Step 2: Store original value for output formatting
    original = n;

    // Step 3: Work with absolute value to simplify reversal
    int temp = (n < 0) ? -n : n;

    // Step 4: Use for loop to extract digits and reverse
    for (; temp != 0; temp = temp / 10) {
        digit = temp % 10;        // Extract last digit
        rev = rev * 10 + digit;   // Append digit to reversed number
    }

    // Step 5: If original number was negative, make reversed negative
    if (n < 0) {
        rev = -rev;
    }

    // Step 6: Print result in required format
    printf("Reversed Number of %d is %d", original, rev);

    return 0; // End program
}
