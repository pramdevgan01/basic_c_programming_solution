/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Finding the Factorial          */
/*   Description   : Program to calculate the       */
/*                   factorial of a number using a  */
/*                   while loop.                    */
/*                                                  */
/*   Definition:                                    */
/*     Factorial of n (n!) = 1 × 2 × 3 × ... × n    */
/*     Special Case: 0! = 1                         */
/*     Factorial is not defined for negatives.      */
/*                                                  */
/*   Example:                                       */
/*     Input : 10                                   */
/*     Output: Factorial: 3628800                   */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;                  // Input number
    unsigned long long fact = 1; // Factorial result (large type for up to 20!)
    int i = 1;              // Loop counter

    // Step 1: Take input
    scanf("%d", &n);

    // Step 2: Check if number is negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.");
        return 0; // Exit program
    }

    // Step 3: Use while loop to calculate factorial
    while (i <= n) {
        fact = fact * i; // Multiply current value
        i++;             // Increment counter
    }

    // Step 4: Print result
    printf("Factorial: %llu", fact);

    return 0; // End program
}
