//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Print Numbers Using do-while   */
/*   Description   : Program to print numbers from  */
/*                   a starting number to an ending */
/*                   number using a do-while loop.  */
/*                                                  */
/*   Logic:                                         */
/*     1. Read start and end values.                */
/*     2. Initialize variable i = start.            */
/*     3. Use do-while loop:                        */
/*        - Print current number.                   */
/*        - Increment i.                            */
/*        - Continue until i > end.                 */
/*                                                  */
/*   Example:                                       */
/*     Input : 2 5                                  */
/*     Output: 2 3 4 5                              */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int start, end, i;

    // Step 1: Read input values
    scanf("%d %d", &start, &end);

    // Step 2: Initialize counter with starting number
    i = start;

    // Step 3: Use do-while loop to print numbers
    do {
        printf("%d\n", i);  // Print current number
        i++;                // Move to next number
    } while (i <= end);      // Condition check after execution

    return 0; // End program
}
