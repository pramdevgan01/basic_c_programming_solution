/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Number Triangle Pattern        */
/*   Description   : Program to print a number      */
/*                   triangle where each row i      */
/*                   contains numbers from 1 to i.  */
/*                                                  */
/*   Logic:                                         */
/*     1. Take input n (number of rows).            */
/*     2. Outer loop controls rows (1 to n).        */
/*     3. Inner loop prints numbers from 1 to i.    */
/*     4. Each number separated by space.           */
/*     5. Move to new line after each row.          */
/*                                                  */
/*   Example (n = 5):                               */
/*     1                                            */
/*     1 2                                          */
/*     1 2 3                                        */
/*     1 2 3 4                                      */
/*     1 2 3 4 5                                    */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;

    // Step 1: Read number of rows
    scanf("%d", &n);

    // Step 2: Validate input range
    if (n < 1 || n > 100) {
        printf("Invalid input.");
        return 0;
    }
 
    // Step 3: Print number triangle pattern
    for (int i = 1; i <= n; i++) {         // Outer loop → rows
        for (int j = 1; j <= i; j++) {     // Inner loop → numbers per row
            printf("%d", j);               // Print number
            if (j < i) printf(" ");        // Add space except after last number
        }
        printf(" \n");                      // Move to next line after each row
    }

    return 0; // End program
}
