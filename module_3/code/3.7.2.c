/*************************************************/
/*                                               */
/*   Author        : Param Vishwakarma           */
/*   Problem Name  : Count Down with while Loop  */
/*   Description   : Program to take an          */
/*                   integer input from the      */
/*                   user and print a            */
/*                   countdown from that         */
/*                   number to 1 using a         */
/*                   while loop. Each number     */
/*                   is printed on a new line.   */
/*   Date          : October 2025                */
/*                                               */
/*************************************************/

#include <stdio.h>   // Include standard I/O header for input and output functions

int main(void) {
    int n;  // Step 1: Variable to store the user input number

    // Step 2: Prompt the user to enter a number
    scanf("%d", &n);

    // Step 3: Validate the input range (1 ≤ n ≤ 100)
    if (n < 1 || n > 100) {
        printf("Please enter a number between 1 and 100.\n");
        return 0;  // Exit program if input is invalid
    }

    // Step 4: Use a while loop to print numbers from n down to 1
    while (n >= 1) {
        printf("%d\n", n);  // Print the current value of n
        n--;                // Decrement n by 1 in each iteration
    }

    // Step 5: Return 0 indicates successful program execution
    return 0;
}
