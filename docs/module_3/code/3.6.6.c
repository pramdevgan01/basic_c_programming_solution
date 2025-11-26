/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Skip Even Numbers        */
/*   Description   : Program to demonstrate   */
/*                   the use of the goto      */
/*                   statement in C. The      */
/*                   program prints all odd   */
/*                   numbers from 1 to a      */
/*                   user-defined limit and   */
/*                   skips even numbers using */
/*                   a jump to a label.       */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input and output functions

int main(void) {
    int n;    // Step 1: Variable to store the upper limit
    int i;    // Step 2: Loop counter variable

    // Step 3: Prompt user for the upper limit input
    scanf("%d", &n);

    // Step 4: Loop from 1 to n
    for (i = 1; i <= n; i++) {

        // Step 4.1: Check if current number is even
        if (i % 2 == 0) {
            // Step 4.2: If even, jump to the label "skip"
            goto skip;
        }

        // Step 4.3: If odd, print the number
        printf("%d ", i);

        // Step 4.4: Label used for skipping even numbers
        skip: ;
    }

    // Step 5: Print a newline for clean output formatting
    printf("\n");

    // Step 6: Return 0 indicates successful program execution
    return 0;
}
