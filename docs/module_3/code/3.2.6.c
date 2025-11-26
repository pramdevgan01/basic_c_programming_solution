//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Fibonacci Series               */
/*   Description   : Program to generate and print  */
/*                   the Fibonacci series up to n   */
/*                   terms using a loop.            */
/*                                                  */
/*   Mathematical Formula:                          */
/*     F(0) = 0, F(1) = 1                           */
/*     F(n) = F(n-1) + F(n-2) for n ≥ 2             */
/*                                                  */
/*   Example:                                       */
/*     First 7 terms → 0 1 1 2 3 5 8                */
/*                                                  */
/*   Date          : October 2025                   */
/*                                                  */
/****************************************************/

#include <stdio.h>   // Standard I/O functions

int main(void) {
    int n;            // Number of terms to print
    int first = 0;    // First Fibonacci number F(0)
    int second = 1;   // Second Fibonacci number F(1)
    int next;         // Variable to store next term in the series

    // Step 1: Input the number of terms
    scanf("%d", &n);

    // Step 2: Print header
    printf("Fibonacci Series: ");

    // Step 3: Handle special cases
    if (n >= 1) {
        printf("%d", first);   // Print first number
    }
    if (n >= 2) {
        printf(" %d", second); // Print second number
    }

    // Step 4: Generate remaining Fibonacci terms using loop
    for (int i = 3; i <= n; i++) {
        next = first + second;      // Apply formula: F(n) = F(n-1) + F(n-2)
        printf(" %d", next);        // Print the next term
        first = second;             // Shift values: second becomes first
        second = next;              // next becomes second
    }

    // Step 5: End program
    return 0;
}
