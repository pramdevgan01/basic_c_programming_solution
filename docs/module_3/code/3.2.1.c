/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Multiplication Table     */
/*   Description   : Program to generate and  */
/*                   display multiplication   */
/*                   table of a given number  */
/*                   from 1 to 10.            */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input and output functions

int main(void) {
    int n;   // Variable to store the number entered by the user

    // Step 1: Read input number from the user
    // Using scanf to accept an integer value
    // This number will be used to generate the multiplication table
    scanf("%d", &n);

    // Step 2: Print a header message before displaying the table
    // The header shows which number’s multiplication table is being generated
    // Using printf to format the output message with the value of n
    printf("Multiplication Table for %d:\n", n);

    // Step 3: Loop through values 1 to 10
    // i represents the multiplier for each step in the table
    // The loop increments i by 1 in each iteration until it reaches 10
    for (int i = 1; i <= 10; i++) {
        // Step 3.1: Multiply the given number n by the current value of i
        // Step 3.2: Print the result in the format "n x i = result"
        // Step 3.3: Each iteration prints one line of the multiplication table
        printf("%d x %d = %d\n", n, i, n * i);
    }

    // Step 4: Return 0 indicates that the program ended successfully
    return 0;
}
