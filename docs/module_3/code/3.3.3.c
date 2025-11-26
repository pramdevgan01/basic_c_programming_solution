/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Prime Number Check (while)     */
/*   Description   : Program to check whether an    */
/*                   input number is prime or not   */
/*                   using a while loop.            */
/*                                                  */
/*   Definition:                                    */
/*     Prime number → number > 1 with only two      */
/*     divisors: 1 and itself.                      */
/*                                                  */
/*   Optimized Logic:                               */
/*     1. If n <= 1 → Not prime                     */
/*     2. Check divisibility from 2 to √n           */
/*        - If divisible → Not prime                */
/*        - If no divisor found → Prime             */
/*                                                  */
/*   Example:                                       */
/*     12 → Not Prime (divisible by 2, 3, 4, 6)     */
/*     11 → Prime (divisors only 1, 11)             */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;          // Input number
    int isPrime = 1; // Assume prime initially (1 = prime, 0 = not prime)

    // Step 1: Take input
    scanf("%d", &n);

    // Step 2: Prime numbers must be greater than 1
    if (n <= 1) {
        printf("%d is not a prime number", n);
        return 0;
    }

    // Step 3: Use while loop to check divisibility
    int i = 2;   // Start checking from 2

    //    Instead of "while (i <= sqrt(n))"
    //    we use "while (i * i <= n)" → no math.h required
    while (i * i <= n) {
        if (n % i == 0) {    // Found divisor
            isPrime = 0;     // Mark as not prime
            break;           // Stop checking
        }
        i++; // Increment counter
    }

    // Step 4: Print result
    if (isPrime) {
        printf("%d is a prime number", n);
    } else {
        printf("%d is not a prime number", n);
    }

    return 0; // End program
}
