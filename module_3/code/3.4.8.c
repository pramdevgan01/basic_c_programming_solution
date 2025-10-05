/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Sum of Even and Odd Numbers    */
/*   Description   : Program to calculate the sum   */
/*                   of even and odd numbers from   */
/*                   1 to n using a do-while loop.  */
/*                                                  */
/*   Logic:                                         */
/*     1. Initialize two variables: even_sum = 0,   */
/*        odd_sum = 0.                              */
/*     2. Start from i = 1.                         */
/*     3. Use do-while loop to check each number:   */
/*          - If even → add to even_sum.            */
/*          - If odd  → add to odd_sum.             */
/*     4. Continue until i > n.                     */
/*     5. Display both sums.                        */
/*                                                  */
/*   Example:                                       */
/*     Input : 10                                   */
/*     Output: Sum of even numbers: 30              */
/*             Sum of odd numbers: 25               */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;                  // Upper limit input
    int i = 1;              // Loop counter starting from 1
    long long even_sum = 0; // To store sum of even numbers
    long long odd_sum = 0;  // To store sum of odd numbers

    // Step 1: Take input
    scanf("%d", &n);

    // Step 2: Validate input
    if (n < 1) {
        printf("Please enter a positive integer (n ≥ 1).");
        return 0;
    }

    // Step 3: Use do-while loop to calculate sums
    do {
        if (i % 2 == 0) {
            even_sum += i; // Add even number
        } else {
            odd_sum += i;  // Add odd number
        }
        i++; // Move to next number
    } while (i <= n);

    // Step 4: Display results
    printf("Sum of even numbers: %lld\n", even_sum);
    printf("Sum of odd numbers: %lld", odd_sum);

    return 0; // End program
}
