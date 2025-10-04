//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Factorial of a Number          */
/*   Description   : Program to calculate the       */
/*                   factorial of a given number    */
/*                   using a for loop.              */
/*                                                  */
/*   Mathematical Formula:                          */
/*     n! = 1 × 2 × 3 × ... × n                     */
/*                                                  */
/*   Special Case:                                  */
/*     0! = 1 (by definition in mathematics)        */
/*                                                  */
/*   Example:                                       */
/*     5! = 1 × 2 × 3 × 4 × 5 = 120                 */
/*                                                  */
/*   Date          : October 2025                   */
/*                                                  */
/****************************************************/

#include <stdio.h>   // Standard input-output header

int main(void) {
    int n;  // Variable to store user input
    unsigned long long fact = 1;  // Store factorial (large type to avoid overflow)

    // Step 1: Read input number from user
    scanf("%d", &n);

    // Step 2: Factorial is not defined for negative numbers
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.");
        return 0; // Exit program
    }

    // Step 3: Apply factorial formula
    // n! = 1 × 2 × 3 × ... × n
    for (int i = 1; i <= n; i++) {
        fact *= i;  // fact = fact × i
    }

    // Step 4: Print result in required format
    printf("Factorial of %d = %llu", n, fact);

    // Step 5: End program
    return 0;
}
