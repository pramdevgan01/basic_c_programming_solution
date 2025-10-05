//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author       : Param Vishwakarma               */
/*   Problem Name : Number Pattern (Incremental)    */
/*   Description  : Program to print a number       */
/*                  triangle where each row i       */
/*                  contains numbers from 1 to i.   */
/*                                                  */
/*   Logic:                                         */
/*     1. Take input n (number of rows).            */
/*     2. Outer loop → controls rows (1 to n).      */
/*     3. Inner loop → prints numbers from 1 to i.  */
/*     4. Add spaces between numbers.               */
/*     5. Move to next line after each row.         */
/*                                                  */
/*   Example (n = 3):                               */
/*     1                                            */
/*     1 2                                          */
/*     1 2 3                                        */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;  // Variable to store number of rows

    // Step 1: Read number of rows
    scanf("%d", &n);

    // Step 2: Validate input
    if (n < 1 || n > 100) {
        printf("Invalid input.");
        return 0;
    }

    // Step 3: Generate number triangle
    for (int i = 1; i <= n; i++) {          // Outer loop → rows
        for (int j = 1; j <= i; j++) {      // Inner loop → numbers
            printf("%d", j);                // Print number
            if (j < i) printf(" ");         // Print space (except after last number)
        }
        printf("\n");                       // Move to next row
    }

    return 0;  // End program
}
