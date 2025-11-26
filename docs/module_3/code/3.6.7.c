/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Goto - Sum and Difference*/
/*   Description   : Program to demonstrate   */
/*                   the use of the goto      */
/*                   statement in performing  */
/*                   repeated arithmetic      */
/*                   operations. The user     */
/*                   specifies the number of  */
/*                   iterations, and for each */
/*                   iteration, two integers  */
/*                   are entered. The program */
/*                   calculates and displays  */
/*                   their sum and difference */
/*                   using a goto statement.  */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input and output functions

int main(void) {
    int n;    // Step 1: Variable to store number of iterations
    int a, b; // Step 2: Variables to store input integers
    int i = 1; // Step 3: Loop counter variable

    // Step 4: Read the number of iterations from the user
    scanf("%d", &n);

    // Step 5: Check if number of iterations is invalid (n <= 0)
    if (n <= 0) {
        printf("Invalid number of iterations.\n");
        return 0;  // Exit program early since input is invalid
    }

start:  // Step 6: Label used for goto control

    // Step 7: Prompt user to enter two integers for calculation
    scanf("%d %d", &a, &b);

    // Step 8: Calculate and print sum and difference
    // Output format: "sum, difference"
    printf("%d, %d\n", a + b, a - b);

    // Step 9: Increment iteration counter
    i++;

    // Step 10: If more iterations remain, jump back to label 'start'
    if (i <= n) {
        goto start;
    }

    // Step 11: Return 0 indicates success
}