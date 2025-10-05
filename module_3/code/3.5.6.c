/****************************************************/
/*                                                  */
/*   Author       : Param Vishwakarma               */
/*   Problem Name : Hollow Rectangle Pattern        */
/*   Description  : Program to print a hollow       */
/*                  rectangle made of asterisks.    */
/*                  Only the border is filled with  */
/*                  '*' and inside is empty.        */
/*                                                  */
/*   Logic:                                         */
/*     1. Take input: rows and columns.             */
/*     2. Loop through each cell using nested loops.*/
/*     3. Print '*' for first/last row or column.   */
/*     4. Otherwise, print a space.                 */
/*     5. Move to the next line after each row.     */
/*                                                  */
/*   Example (rows = 5, cols = 10):                 */
/*     **********                                   */
/*     *        *                                   */
/*     *        *                                   */
/*     *        *                                   */
/*     **********                                   */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int rows, cols;

    // Step 1: Read number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Step 2: Validate input
    if (rows < 2 || cols < 2 || rows > 100 || cols > 100) {
        printf("Invalid input.");
        return 0;
    }

    // Step 3: Print hollow rectangle pattern
    for (int i = 1; i <= rows; i++) {        // Outer loop → rows
        for (int j = 1; j <= cols; j++) {    // Inner loop → columns

            // Step 3.1: Print border stars
            if (i == 1 || i == rows || j == 1 || j == cols)
                printf("*");
            else
                printf(" ");                 // Step 3.2: Print spaces inside
        }
        printf("\n");                         // Move to next line
    }

    return 0; // End program
}
