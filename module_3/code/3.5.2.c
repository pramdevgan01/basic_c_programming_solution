/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Decreasing Star Pattern        */
/*   Description   : Program to print a decreasing  */
/*                   triangular star pattern based  */
/*                   on user input n (rows).        */
/*                                                  */
/*   Logic:                                         */
/*     1. Read n (number of rows).                  */
/*     2. Outer loop → controls rows (from n to 1). */
/*     3. Inner loop → prints stars in each row.    */
/*     4. Each star is followed by a space.         */
/*                                                  */
/*   Example:                                       */
/*     Input : 5                                    */
/*     Output:                                      */
/*     * * * * *                                   */
/*     * * * *                                     */
/*     * * *                                       */
/*     * *                                         */
/*     *                                           */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;

    // Step 1: Read input (number of rows)
    scanf("%d", &n);

    // Step 2: Validate input
    if (n < 1 || n > 100) {
        printf("Invalid input.");
        return 0;
    }

    // Step 3: Print pattern
    for (int i = n; i >= 1; i--) {       // Outer loop → rows
        for (int j = 1; j <= i; j++) {   // Inner loop → stars per row
            printf("* ");                // Print star followed by space
        }
        printf("\n");                    // Move to next line
    }

    return 0; // End program
}
