/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Cube of a Number Using   */
/*                   Separate Function        */
/*   Description   : Program to read an       */
/*                   integer from the user    */
/*                   and compute its cube     */
/*                   using a user-defined     */
/*                   function.                */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard input/output library

// Step 1: Function declaration for cube calculation
int cube(int n);

int main() {
    int num, result;

    // Step 2: Prompt the user
    printf("Enter Number:\n");

    // Step 3: Read input number
    scanf("%d", &num);

    // Step 4: Call cube function
    result = cube(num);

    // Step 5: Display result
    printf("Cube of %d = %d", num, result);

    return 0;  // End of program
}

// Step 6: Function definition
int cube(int n) {
    return n * n * n;   // Return the cube of the number
}
