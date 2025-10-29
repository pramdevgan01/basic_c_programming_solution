/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Goto in Nested for       */
/*   Description   : Program to simulate the  */
/*                   behavior of a nested for */
/*                   loop using goto          */
/*                   statements. The program  */
/*                   prints a grid of numbers */
/*                   where each row displays  */
/*                   numbers from 1 to cols,  */
/*                   and there are 'rows'     */
/*                   such rows in total.      */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input and output functions

int main(void) {
    int rows, cols;   // Step 1: Variables to store number of rows and columns
    int i = 1, j = 1; // Step 2: Counter variables for outer and inner loops

    // Step 3: Prompt the user to enter number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Step 4: Start of the outer loop simulation
OuterLoop:
    // Step 4.1: Check if we have printed all rows
    if (i > rows)
        return 0;  // Exit program when all rows are printed

    // Step 4.2: Reset inner counter for each new row
    j = 1;

    // Step 5: Start of the inner loop simulation
InnerLoop:
    // Step 5.1: Check if current row printing is complete
    if (j > cols) {
        printf("\n");  // Move to the next line after each row
        i++;           // Increment row counter
        goto OuterLoop; // Jump back to outer loop for the next row
    }

    // Step 5.2: Print the current column number
    printf("%d ", j);

    // Step 5.3: Increment column counter
    j++;

    // Step 5.4: Jump back to continue inner loop
    goto InnerLoop;

    // Step 6: Return 0 indicates successful execution
    return 0;
}
