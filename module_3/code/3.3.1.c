//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Sum of Digits                  */
/*   Description   : Program to calculate the sum   */
/*                   of digits of a given integer   */
/*                   using a while loop.            */
/*                                                  */
/*   Logic:                                         */
/*     1. Extract last digit → digit = n % 10       */
/*     2. Add digit to sum → sum += digit           */
/*     3. Remove last digit → n = n / 10            */
/*     4. Repeat until n becomes 0                  */
/*                                                  */
/*   Note: Use absolute value to handle negatives.  */
/*                                                  */
/*   Example:                                       */
/*     Input  = 1234                                */
/*     Output = Sum of digits: 10                   */
/*                                                  */
/*     Input  = -987                                */
/*     Output = Sum of digits: 24                   */
/*                                                  */
/*   Date          : October 2025                   */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;        // Input number
    int sum = 0;  // Variable to store sum of digits
    int digit;    // Variable to store each extracted digit

    // Step 1: Take input from user
    scanf("%d", &n);

    // Step 2: Work with absolute value of number
    if (n < 0) {
        n = -n; // Convert negative to positive
    }

    // Step 3: Use while loop to extract and sum digits
    while (n > 0) {
        digit = n % 10;   // Get last digit
        sum += digit;     // Add digit to sum
        n = n / 10;       // Remove last digit
    }

    // Step 4: Print result
    printf("Sum of digits: %d", sum);

    return 0; // End program
}
