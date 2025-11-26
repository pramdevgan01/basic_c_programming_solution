//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Sum Until User Enters Zero     */
/*   Description   : Program to add numbers entered */
/*                   by the user until zero is      */
/*                   entered, using a do-while loop.*/
/*                                                  */
/*   Logic:                                         */
/*     1. Initialize sum = 0.                       */
/*     2. Use do-while loop:                        */
/*        - Read a number from user.                */
/*        - If number != 0, add it to sum.          */
/*        - Stop when number == 0.                  */
/*     3. Print final sum.                          */
/*                                                  */
/*   Example:                                       */
/*     Input : 5, 10, 0                             */
/*     Output: Final sum: 15                        */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int num, sum = 0; // Variables for input and total sum

    // Step 1: Start do-while loop
    do {
        scanf("%d", &num);  // Read input number

        if (num != 0) {     // Exclude terminating zero
            sum += num;     // Add number to sum
        }

    } while (num != 0);      // Continue until user enters 0

    // Step 2: Print final result
    printf("Final sum: %d", sum);

    return 0; // End program
}
