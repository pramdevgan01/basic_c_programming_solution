/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Print Prime Numbers in   */
/*                   Range Using Nested Loops */
/*                   and continue             */
/*   Description   : Program to print all     */
/*                   prime numbers between 2  */
/*                   and a user-entered value */
/*                   'n'. The program uses    */
/*                   nested for loops to      */
/*                   check for primality and  */
/*                   employs the 'continue'   */
/*                   statement to skip even   */
/*                   numbers greater than 2   */
/*                   for performance          */
/*                   optimization.            */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input and output functions

int main(void) {
    int n;        // Step 1: Variable to store the upper limit
    int i, j;     // Step 2: Loop control variables
    int isPrime;  // Step 3: Flag variable to track if a number is prime

    // Step 4: Prompt the user to enter a positive integer limit
    scanf("%d", &n);

    // Step 5: Validate input range
    if (n < 2 || n > 100) {
        printf("Please enter a number between 2 and 100.\n");
        return 0;
    }

    // Step 6: Loop from 2 to n to check for prime numbers
    for (i = 2; i <= n; i++) {

        // Step 6.1: Optimization using continue
        // Skip all even numbers greater than 2 since they are not prime
        if (i > 2 && i % 2 == 0) {
            continue;
        }

        // Step 6.2: Assume current number is prime initially
        isPrime = 1;

        // Step 6.3: Nested loop to check divisibility
        // Only need to check divisors from 2 to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;  // Not a prime number
                break;        // Exit inner loop early
            }
        }

        // Step 6.4: If isPrime is still 1, print the number
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    // Step 7: Print newline for clean output formatting
    printf("\n");

    // Step 8: Return 0 indicates successful program execution
    return 0;
}
