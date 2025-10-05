//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author       : Param Vishwakarma               */
/*   Problem Name : Right-Angled Triangle Pattern   */
/*   Description  : Program to print a right-angled */
/*                  triangle made of asterisks (*). */
/*                  Each row contains an increasing */
/*                  number of stars.                */
/*                                                  */
/*   Logic:                                         */
/*     1. Take input (number of rows).              */
/*     2. Outer loop controls rows (1 to n).        */
/*     3. Inner loop prints '*' in each row.        */
/*     4. Each star is followed by a space.         */
/*     5. Move to new line after each row.          */
/*                                                  */
/*   Example (rows = 4):                            */
/*     *                                            */
/*     * *                                          */
/*     * * *                                        */
/*     * * * *                                      */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int rows;

    // Step 1: Read number of rows
    scanf("%d", &rows);

    // Step 2: Validate input
    if (rows < 1 || rows > 100) {
        printf("Invalid input. Please enter a number between 1 and 100.");
        return 0;
    }

    // Step 3: Generate right-angled triangle pattern
    for (int i = 1; i <= rows; i++) {        // Outer loop → rows
        for (int j = 1; j <= i; j++) {       // Inner loop → stars per row
            printf("* ");                    // Print star followed by space
        }
        printf("\n");                        // Move to next line after each row
    }

    return 0; // End program
}
