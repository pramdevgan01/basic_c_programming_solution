/****************************************************/
/*                                                  */
/*   Author       : Param Vishwakarma               */
/*   Problem Name : Center-Aligned Number Triangle  */
/*   Description  : Program to print a center-      */
/*                  aligned triangle pattern using  */
/*                  numbers. Each row contains      */
/*                  increasing numbers from 1 to i. */
/*                                                  */
/*   Logic:                                         */
/*     1. Take input (number of rows).              */
/*     2. For each row:                             */
/*         - Print leading spaces for alignment.    */
/*         - Print numbers from 1 to i.             */
/*     3. Spaces ensure pyramid-like alignment.     */
/*                                                  */
/*   Example (rows = 5):                            */
/*         1                                        */
/*        1 2                                       */
/*       1 2 3                                      */
/*      1 2 3 4                                     */
/*     1 2 3 4 5                                   */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int rows;

    // Step 1: Read number of rows
    scanf("%d", &rows);

    // Step 2: Validate input
    if (rows < 1 || rows > 50) {
        printf("Invalid input.");
        return 0;
    }

    // Step 3: Generate center-aligned number triangle
    for (int i = 1; i <= rows; i++) {
        // Step 3.1: Print leading spaces for center alignment
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Step 3.2: Print increasing numbers from 1 to i
        for (int num = 1; num <= i; num++) {
            printf("%d", num);
            if (num < i) printf(" "); // Add space between numbers
        }

        // Step 3.3: Move to next line
        printf(" \n");
    }

    return 0; // End program
}
