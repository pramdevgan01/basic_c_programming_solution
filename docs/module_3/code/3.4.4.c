//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Factorial Calculation          */
/*   Description   : Program to calculate factorial */
/*                   of a number using do-while.    */
/*                                                  */
/*   Definition:                                    */
/*     Factorial of n (n!) = 1 × 2 × 3 × ... × n    */
/*     Special Case: 0! = 1                         */
/*                                                  */
/*   Constraints:                                   */
/*     0 ≤ n ≤ 20 (fits in unsigned long long)      */
/*                                                  */
/*   Example:                                       */
/*     Input : 5                                    */
/*     Output: Factorial of 5 is 120                */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n, i = 1;                 // Input number and counter
    unsigned long long fact = 1;  // Factorial result (big enough for 20!)

    // Step 1: Read input
    scanf("%d", &n);

    // Step 2: Handle special case for 0
    if (n == 0) {
        printf("Factorial of 0 is 1");
        return 0;
    }

    // Step 3: Compute factorial using do-while loop
    do {
        fact *= i;  // Multiply fact by current i
        i++;        // Increment counter
    } while (i <= n); // Repeat until i > n

    // Step 4: Print result
    printf("Factorial of %d is %llu", n, fact);

    return 0; // End program
}
