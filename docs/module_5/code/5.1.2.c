/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Sum of Digits (Iterative)*/
/*   Description   : Program to calculate the */
/*                   sum of digits of a       */
/*                   non-negative integer     */
/*                   using loops (no          */
/*                   recursion).              */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int num;
    int sum = 0, digit;

    // Step 1: Prompt user for input
    printf("Enter Number:\n");

    // Step 2: Read input number
    scanf("%d", &num);

    // Step 3: Iteratively sum digits
    if (num == 0) {
        sum = 0;
    } else {
        while (num > 0) {
            digit = num % 10;   // Extract last digit
            sum += digit;       // Add to sum
            num /= 10;          // Remove last digit
        }
    }

    // Step 4: Display result
    printf("Sum of Digits: %d", sum);

    return 0;  // End of program
}
