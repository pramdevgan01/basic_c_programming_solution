/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Reverse a Number               */
/*   Description   : Program to reverse digits of   */
/*                   an integer using a do-while    */
/*                   loop.                          */
/*                                                  */
/*   Logic:                                         */
/*     1. Extract the last digit using % 10.        */
/*     2. Append it to reversed number.             */
/*     3. Remove the last digit using / 10.         */
/*     4. Repeat until number becomes 0.            */
/*     5. Handle negatives using a sign variable.   */
/*                                                  */
/*   Example:                                       */
/*     Input : 45678                                */
/*     Output: Reversed number is 87654             */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n, rev = 0, digit;
    int sign = 1;  // To handle negative numbers

    // Step 1: Read input
    scanf("%d", &n);

    // Step 2: Handle negative input
    if (n < 0) {
        sign = -1;  // Remember sign
        n = -n;     // Convert to positive for processing
    }

    // Step 3: Reverse the number using do-while loop
    do {
        digit = n % 10;          // Extract last digit
        rev = rev * 10 + digit;  // Append to reversed number
        n = n / 10;              // Remove last digit
    } while (n > 0);              // Repeat until no digits left

    // Step 4: Restore sign if original number was negative
    rev = rev * sign;

    // Step 5: Display result
    printf("Reversed number is %d", rev);

    return 0; // End program
}
