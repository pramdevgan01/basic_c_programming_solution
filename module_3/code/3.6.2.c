/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Break Statement in a For Loop  */
/*   Description   : Program to print numbers       */
/*                   from 1 to a user-defined       */
/*                   limit but stop printing        */
/*                   when a specific number is      */
/*                   encountered using the          */
/*                   break statement.               */
/*   Date          : October 2025                   */
/*                                                  */
/****************************************************/

#include <stdio.h>   // Include standard I/O header for input and output functions

int main(void) {
    int limit;       // Step 1: Variable to store the upper limit of the loop
    int stopNumber;  // Step 2: Variable to store the number at which loop should stop

    // Step 3: Read input values from the user
    // First input: the upper limit
    // Second input: the number at which the loop will stop
    scanf("%d", &limit);
    scanf("%d", &stopNumber);

    // Step 4: Loop through numbers from 1 to 'limit'
    for (int i = 1; i <= limit; i++) {

        // Step 4.1: Print the current number
        printf("%d\n", i);

        // Step 4.2: Check if the current number equals stopNumber
        // If yes, stop the loop immediately using break
        if (i == stopNumber) {
            break;
        }
    }

    // Step 5: Return 0 indicates successful program execution
    return 0;
}
