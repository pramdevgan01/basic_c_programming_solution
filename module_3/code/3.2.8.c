//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Prime Number Check             */
/*   Description   : Program to check whether a     */
/*                   given integer is a prime       */
/*                   number or not using a loop.    */
/*                                                  */
/*   Definition:                                    */
/*     Prime number is a number > 1 that has        */
/*     exactly two divisors: 1 and itself.          */
/*                                                  */
/*   Example:                                       */
/*     17 → Prime (divisors: 1, 17)                 */
/*     18 → Not Prime (divisors: 1, 2, 3, 6, 9, 18) */
/*                                                  */
/*   Date          : October 2025                   */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;          // Input number
    int isPrime = 1; // Flag: assume number is prime (1 = prime, 0 = not prime)

    // Step 1: Take input from user
    scanf("%d", &n);

    // Step 2: Prime check definition: number must be > 1
    if (n <= 1) {
        printf("%d is not a prime number.", n);
        return 0; // Exit since prime numbers are greater than 1
    }

    // Step 3: Loop to check divisibility
    // We only need to check divisors from 2 up to √n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {     // If divisible, then it's not prime
            isPrime = 0;      // Mark flag as not prime
            break;            // Exit loop early
        }
    }

    // Step 4: Print result based on flag
    if (isPrime) {
        printf("%d is a prime number.", n);
    } else {
        printf("%d is not a prime number.", n);
    }

    return 0; // End program
}
