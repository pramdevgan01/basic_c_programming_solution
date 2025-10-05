/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Printing a Pattern of Asterisk */
/*   Description   : Program to print a rectangular */
/*                   pattern of asterisks based on  */
/*                   user-specified rows and cols.  */
/*                                                  */
/*   Logic:                                         */
/*     1. Take two inputs: rows and columns.        */
/*     2. Use nested loops:                         */
/*        - Outer loop → controls rows              */
/*        - Inner loop → prints * for each column   */
/*     3. Move to new line after each row.          */
/*                                                  */
/*   Example:                                       */
/*     Input : 3 5                                  */
/*     Output: *****                                */
/*             *****                                */
/*             *****                                */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int rows, cols;  // Variables for rows and columns

    // Step 1: Read number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Step 2: Validate input (optional for safety)
    if (rows < 1 || cols < 1) {
        printf("Invalid input. Rows and columns must be positive integers.");
        return 0;
    }

    // Step 3: Print pattern using nested for loops
    for (int i = 1; i <= rows; i++) {      // Outer loop → rows
        for (int j = 1; j <= cols; j++) {  // Inner loop → columns
            printf("*");                    // Print asterisk
        }
        printf("\n");                       // Move to next line after each row
    }

    return 0; // End program
}
