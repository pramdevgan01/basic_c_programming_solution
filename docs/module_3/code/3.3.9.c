//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Power of a Number              */
/*   Description   : Program to calculate power of  */
/*                   a number using a while loop.   */
/*                                                  */
/*   Definition:                                    */
/*     base^exponent = base × base × ... × base     */
/*     (exponent times).                            */
/*                                                  */
/*   Example:                                       */
/*     Input : 2 3                                  */
/*     Output: Result is 8                          */
/*                                                  */
/*   Logic:                                         */
/*     1. Initialize result = 1                     */
/*     2. Multiply result by base repeatedly until  */
/*        exponent reduces to 0                     */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int base, exponent;   // Input values
    long long result = 1; // Result of base^exponent (long long for safety)

    // Step 1: Read base and exponent
    scanf("%d %d", &base, &exponent);

    // Step 2: Use while loop to calculate power
    while (exponent > 0) {
        result *= base;   // Multiply result by base
        exponent--;       // Decrease exponent
    }

    // Step 3: Print the result
    printf("Result is %lld", result);

    return 0; // End program
}
