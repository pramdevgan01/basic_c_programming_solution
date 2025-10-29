/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Continue - Prime Numbers */
/*   Description   : Program to find and      */
/*                   display all prime        */
/*                   numbers within a given   */
/*                   range specified by the   */
/*                   user. Demonstrates the   */
/*                   use of the continue      */
/*                   statement to skip        */
/*                   non-prime numbers.       */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input and output functions

int main(void) {
    int start, end;    // Step 1: Variables to store the input range
    int i, j;          // Step 2: Loop variables
    int isPrime;       // Step 3: Flag variable to check primality

    // Step 4: Prompt the user to enter start and end of the range
    scanf("%d %d", &start, &end);

    // Step 5: Loop through each number from start to end
    for (i = start; i <= end; i++) {

        // Step 5.1: Skip numbers less than 2 since they are not prime
        if (i < 2) {
            continue;  // Use of 'continue' to skip current iteration
        }

        isPrime = 1;  // Step 5.2: Assume the number is prime initially

        // Step 5.3: Check divisibility of 'i' by numbers from 2 to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;  // Not a prime number
                break;        // Exit inner loop early
            }
        }

        // Step 5.4: If number is prime, print it
        if (isPrime) {
            printf("%d ", i);
        }
    }

    // Step 6: Print a newline for clean output formatting
    printf("\n");

    // Step 7: Return 0 indicates successful program execution
    return 0;
}
