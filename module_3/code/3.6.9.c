/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Continue in do-while Loop*/
/*   Description   : Program to demonstrate   */
/*                   the use of the continue  */
/*                   statement inside a       */
/*                   do-while loop. The user  */
/*                   enters a positive number */
/*                   'n', and the program     */
/*                   prints only odd numbers  */
/*                   from 1 to n by skipping  */
/*                   even numbers using       */
/*                   'continue'.              */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input and output functions

int main(void) {
    int n;   // Step 1: Variable to store the upper limit
    int i = 1;  // Step 2: Counter variable initialized to 1

    // Step 3: Prompt the user to enter a positive integer
    scanf("%d", &n);

    // Step 4: Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;  // Exit the program if input is invalid
    }

    // Step 5: Use a do-while loop to iterate from 1 to n
    do {
        // Step 5.1: Check if current number is even
        if (i % 2 == 0) {
            i++;        // Increment counter before skipping
            continue;   // Skip printing even numbers
        }

        // Step 5.2: Print the current odd number
        printf("%d ", i);

        // Step 5.3: Increment counter after printing
        i++;

    } while (i <= n);  // Step 6: Loop continues while i <= n

    // Step 7: Print a newline for better output formatting
    printf("\n");

    // Step 8: Return 0 indicates successful program execution
    return 0;
}
