/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Count Digits                   */
/*   Description   : Program to count the number of */
/*                   digits in an integer using a   */
/*                   do-while loop.                 */
/*                                                  */
/*   Logic:                                         */
/*     1. If the number is negative, convert it to  */
/*        positive (since sign doesn't affect count).*/
/*     2. Initialize count = 0.                     */
/*     3. In each iteration:                        */
/*          - Divide number by 10                   */
/*          - Increment count                       */
/*     4. Continue until number becomes 0.          */
/*     5. Special Case: 0 has one digit.            */
/*                                                  */
/*   Example:                                       */
/*     Input : 100000                               */
/*     Output: Number of digits: 6                  */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;
    int count = 0;

    // Step 1: Read input
    scanf("%d", &n);

    // Step 2: Handle negative numbers
    if (n < 0) {
        n = -n;  // Convert to positive
    }

    // Step 3: Special case for 0
    if (n == 0) {
        count = 1;
    } else {
        // Step 4: Count digits using do-while loop
        do {
            n = n / 10;   // Remove last digit
            count++;      // Increase count
        } while (n > 0);  // Continue until n becomes 0
    }

    // Step 5: Print result
    printf("Number of digits: %d", count);

    return 0; // End program
}
