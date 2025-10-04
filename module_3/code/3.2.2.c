//Enhance your coding skills, start writing your code here!!
/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Sum of First Natural     */
/*                   Numbers                  */
/*   Description   : Program to calculate the */
/*                   sum of first n natural   */
/*                   numbers using a for loop */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O library for printf and scanf

int main(void) {
    int n;           // Variable to store user input (number of terms)
    int sum = 0;     // Variable to store the cumulative sum, initialized to 0

    // Step 1: Take input from the user
    // Prompt user to enter an integer value 'n'
    // This represents how many natural numbers we will sum
    scanf("%d", &n);

    // Step 2: Use a for loop to iterate from 1 up to n
    // Each iteration adds the current value of i to the sum
    // This way, we accumulate the sum of all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;  // Add the current value of i to sum
                   // Equivalent to sum = sum + i
    }

    // Step 3: Print the final result
    // Display the sum in the required format
    // Output should match: "Sum = <value>"
    printf("Sum = %d", sum);

    // Step 4: Return 0 indicates the program executed successfully
    return 0;
}
