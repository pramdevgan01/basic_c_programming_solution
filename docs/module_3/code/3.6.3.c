/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : While(1) Loop            */
/*   Description   : Program to demonstrate   */
/*                   the use of an infinite   */
/*                   while(1) loop combined   */
/*                   with a break statement.  */
/*                   The user keeps entering  */
/*                   numbers until a negative */
/*                   number is entered. The   */
/*                   loop stops when this     */
/*                   condition is met.        */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input and output functions

int main(void) {
    int num;   // Step 1: Variable to store the number entered by the user

    // Step 2: Start an infinite loop using while(1)
    // This loop will keep running until a break statement is encountered
    while (1) {
        // Step 2.1: Prompt the user to enter a number
        scanf("%d", &num);

        // Step 2.2: Check if the entered number is negative
        // If yes, use break to immediately terminate the loop
        if (num < 0) {
            break;
        }

        // Step 2.3: If the number is non-negative, print it
        printf("%d\n", num);
    }

    // Step 3: Return 0 indicates successful program execution
    return 0;
}
