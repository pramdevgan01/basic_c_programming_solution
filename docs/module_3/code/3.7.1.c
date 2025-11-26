/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Determine Even or Odd    */
/*                   Using if-else            */
/*   Description   : Program to read an       */
/*                   integer from the user    */
/*                   and determine whether it */
/*                   is even or odd using an  */
/*                   if-else statement.       */
/*                   Prints "Even" if the     */
/*                   number is divisible by 2 */
/*                   otherwise prints "Odd".  */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input and output functions

int main(void) {
    int n;  // Step 1: Variable to store the integer input

    // Step 2: Read input from the user
    scanf("%d", &n);

    // Step 3: Validate input within the allowed range
    if (n < -10000 || n > 10000) {
        printf("Please enter a number between -10000 and 10000.\n");
        return 0;  // Exit program if input is invalid
    }

    // Step 4: Use if-else to check whether the number is even or odd
    if (n % 2 == 0) {
        // Step 4.1: Number is divisible by 2 → Even
        printf("Even\n");
    } else {
        // Step 4.2: Number is not divisible by 2 → Odd
        printf("Odd\n");
    }

    // Step 5: Return 0 indicates successful program execution
    return 0;
}
