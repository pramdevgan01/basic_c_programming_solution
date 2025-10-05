/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Even or Odd Check              */
/*   Description   : Program to continuously accept */
/*                   integers and check whether     */
/*                   they are even or odd. The      */
/*                   program stops when a negative  */
/*                   number is entered.             */
/*                                                  */
/*   Logic:                                         */
/*     1. Read a number from user                   */
/*     2. If number < 0 → terminate program         */
/*     3. Else check:                               */
/*        - If divisible by 2 → even                */
/*        - Else → odd                              */
/*     4. Repeat until negative is entered          */
/*                                                  */
/*   Example:                                       */
/*     Input: 10, 7, 15, -1                         */
/*     Output: 10 is even                           */
/*             7 is odd                             */
/*             15 is odd                            */
/*                                                  */
/*   Date          : October 2025                   */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;  // Variable to store user input

    // Step 1: Start an infinite loop (terminates when negative input found)
    while (1) {
        // Step 2: Take input from user
        scanf("%d", &n);

        // Step 3: If number is negative → stop program
        if (n < 0) {
            break; // Exit loop
        }

        // Step 4: Check whether number is even or odd
        if (n % 2 == 0) {
            printf("%d is even\n", n);
        } else {
            printf("%d is odd\n", n);
        }
    }

    // Step 5: Program ends when negative number is given
    return 0;
}
