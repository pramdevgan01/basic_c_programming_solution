//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Fibonacci Sequence             */
/*   Description   : Program to generate Fibonacci  */
/*                   numbers up to a given limit n  */
/*                   using a while loop.            */
/*                                                  */
/*   Definition:                                    */
/*     Fibonacci sequence starts with: 0, 1         */
/*     Each next number = sum of previous two       */
/*     F(n) = F(n-1) + F(n-2)                       */
/*                                                  */
/*   Example:                                       */
/*     Input : 10                                   */
/*     Output: Fibonacci Sequence: 0, 1, 1, 2, 3, 5, 8 */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;             // Upper limit for Fibonacci values
    int first = 0;     // First Fibonacci number
    int second = 1;    // Second Fibonacci number
    int next;          // To store next Fibonacci value

    // Step 1: Take input
    scanf("%d", &n);

    // Step 2: Print header
    printf("Fibonacci Sequence: ");

    // Step 3: Handle special cases directly
    if (n >= 0) {
        printf("%d", first);  // Print 0
    }
    if (n >= 1) {
        printf(", %d", second); // Print 1
    }

    // Step 4: Generate sequence using while loop
    next = first + second;  // Start from 1
    while (next <= n) {
        printf(", %d", next);  // Print next Fibonacci number
        first = second;        // Move forward: second becomes first
        second = next;         // next becomes second
        next = first + second; // Compute new next
    }

    return 0; // End program
}
