/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : GCD (Greatest Common Divisor)  */
/*   Description   : Program to calculate the GCD   */
/*                   of two numbers using Euclidean */
/*                   algorithm with a while loop.   */
/*                                                  */
/*   Definition:                                    */
/*     GCD(a, b) = largest number that divides      */
/*     both a and b without remainder.              */
/*                                                  */
/*   Euclidean Algorithm (Subtraction method):      */
/*     1. While a != b                              */
/*        - If a > b → a = a - b                    */
/*        - Else → b = b - a                        */
/*     2. When a == b, that value is the GCD.       */
/*                                                  */
/*   Example:                                       */
/*     Input : 54 24                                */
/*     Process:                                     */
/*       54 - 24 = 30                               */
/*       30 - 24 = 6                                */
/*       24 - 6 = 18                                */
/*       18 - 6 = 12                                */
/*       12 - 6 = 6                                 */
/*       Both equal → GCD = 6                       */
/*     Output: GCD is 6                             */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int a, b;  // Input numbers

    // Step 1: Read input
    scanf("%d %d", &a, &b);

    // Step 2: Apply Euclidean algorithm using subtraction
    while (a != b) {
        if (a > b) {
            a = a - b;  // Subtract smaller from larger
        } else {
            b = b - a;
        }
    }

    // Step 3: Print result
    printf("GCD is %d", a);  // (or b, since a == b here)

    return 0; // End program
}
