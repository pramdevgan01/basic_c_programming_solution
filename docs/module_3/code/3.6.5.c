/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Continue Input           */
/*   Description   : Program to continuously  */
/*                   prompt the user to enter */
/*                   numbers and calculate    */
/*                   their sum. The loop      */
/*                   terminates when the user */
/*                   enters 0, and the total  */
/*                   sum of entered numbers   */
/*                   (excluding 0) is         */
/*                   displayed as output.     */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input and output functions

int main(void) {
    int num;          // Step 1: Variable to store user input
    int sum = 0;      // Step 2: Variable to store cumulative sum of numbers

    // Step 3: Start an infinite loop using while(1)
    // The loop continues until the user enters 0
    while (1) {
        // Step 3.1: Prompt user for input
        scanf("%d", &num);

        // Step 3.2: Check if input is 0 (termination condition)
        // If yes, break the loop immediately
        if (num == 0) {
            break;
        }

        // Step 3.3: Add the entered number to the running total
        sum += num;
    }

    // Step 4: After exiting the loop, print the total sum
    printf("%d\n", sum);

    // Step 5: Return 0 indicates successful program execution
    return 0;
}
