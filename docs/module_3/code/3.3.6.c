/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Counting the Number of Digits  */
/*   Description   : Program to count digits in an  */
/*                   integer using a while loop.    */
/*                                                  */
/*   Logic:                                         */
/*     1. Handle negative by taking absolute value. */
/*     2. Special case: if n = 0 → 1 digit.         */
/*     3. Keep dividing number by 10 until it       */
/*        becomes 0, count steps.                   */
/*                                                  */
/*   Example:                                       */
/*     Input : 1000000                              */
/*     Output: Number of digits: 7                  */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    long long n;    // Input number (to handle large values up to 10^9)
    int count = 0;  // Counter for digits

    // Step 1: Take input
    scanf("%lld", &n);

    // Step 2: If number is negative, make it positive
    if (n < 0) {
        n = -n;
    }

    // Step 3: Special case when n = 0
    if (n == 0) {
        count = 1;
    }

    // Step 4: Count digits using while loop
    while (n > 0) {
        n = n / 10;   // Remove last digit
        count++;      // Increment digit count
    }

    // Step 5: Print result
    printf("Number of digits: %d", count);

    return 0; // End program
}
