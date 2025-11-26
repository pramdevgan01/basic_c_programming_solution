/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Reverse a Number               */
/*   Description   : Program to reverse digits of   */
/*                   an integer using a while loop. */
/*                                                  */
/*   Logic:                                         */
/*     1. Extract last digit → digit = n % 10       */
/*     2. Build reversed → rev = rev * 10 + digit   */
/*     3. Remove last digit → n = n / 10            */
/*     4. Repeat until n becomes 0                  */
/*                                                  */
/*   Example:                                       */
/*     Input : 987                                  */
/*     Output: Reversed number is 789               */
/*                                                  */
/*   Date          : October 2025                   */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;          // Input number
    int rev = 0;    // Variable to store reversed number
    int digit;      // To store extracted digit
    int sign = 1;   // To handle negative numbers

    // Step 1: Take input
    scanf("%d", &n);

    // Step 2: Handle negative numbers
    if (n < 0) {
        sign = -1;   // Remember sign
        n = -n;      // Work with absolute value
    }

    // Step 3: Reverse the number using while loop
    while (n > 0) {
        digit = n % 10;          // Extract last digit
        rev = rev * 10 + digit;  // Append digit to reversed
        n = n / 10;              // Remove last digit
    }

    // Step 4: Restore sign for negative numbers
    rev = rev * sign;

    // Step 5: Print result
    printf("Reversed number is %d", rev);

    return 0; // End program
}
