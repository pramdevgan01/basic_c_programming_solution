/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Until Negative Input           */
/*   Description   : Program to continuously take   */
/*                   numbers from the user and add  */
/*                   them to a sum until a negative */
/*                   number is entered.             */
/*                                                  */
/*   Logic:                                         */
/*     1. Initialize sum = 0.                       */
/*     2. Use do-while loop to:                     */
/*          - Read number from user.                */
/*          - If number >= 0, add to sum.           */
/*          - Stop loop when number < 0.            */
/*     3. Print the final sum.                      */
/*                                                  */
/*   Example:                                       */
/*     Input : 5, 7, 3, -1                          */
/*     Output: Sum of numbers: 15                   */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int num;          // Variable to store user input
    long long sum = 0; // Variable to store total sum

    // Step 1: Use do-while loop to ensure at least one input
    do {
        scanf("%d", &num);  // Read input number

        if (num >= 0) {     // Only add non-negative numbers
            sum += num;
        }

    } while (num >= 0);      // Continue until a negative number is entered

    // Step 2: Display the result
    printf("Sum of numbers: %lld", sum);

    return 0; // End program
}
