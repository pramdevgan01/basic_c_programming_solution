/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Sum of Natural Numbers         */
/*   Description   : Program to calculate the sum   */
/*                   of all natural numbers up to   */
/*                   a given number using a         */
/*                   do-while loop.                 */
/*                                                  */
/*   Formula:                                       */
/*     Sum = 1 + 2 + 3 + ... + n                    */
/*   Or mathematically,                             */
/*     Sum = n × (n + 1) / 2                        */
/*   But here we’ll use iteration with do-while.    */
/*                                                  */
/*   Example:                                       */
/*     Input : 3                                    */
/*     Output: Sum of natural numbers up to 3 is 6  */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n, i = 1;  // n = input number, i = counter
    int sum = 0;   // Variable to store cumulative sum

    // Step 1: Read input from user
    scanf("%d", &n);

    // Step 2: Validate input
    if (n < 1) {
        printf("Please enter a positive integer greater than 0.");
        return 0;
    }

    // Step 3: Calculate sum using do-while loop
    do {
        sum += i;  // Add current number to sum
        i++;       // Move to next number
    } while (i <= n); // Continue until i > n

    // Step 4: Print result
    printf("Sum of natural numbers up to %d is %d", n, sum);

    return 0; // End program
}
