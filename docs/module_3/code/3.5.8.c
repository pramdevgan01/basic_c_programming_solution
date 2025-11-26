/****************************************************/
/*                                                  */
/*   Author       : Param Vishwakarma               */
/*   Problem Name : Diamond Star Pattern            */
/*   Description  : Program to print a symmetrical  */
/*                  diamond-shaped pattern of stars */
/*                  based on user input. The first  */
/*                  half forms a pyramid, and the   */
/*                  second half an inverted one.    */
/*                                                  */
/*   Logic:                                         */
/*     1. Take input (rows) — represents half of    */
/*        the diamond’s height.                     */
/*     2. Print the upper pyramid:                  */
/*          - Decreasing spaces                     */
/*          - Increasing stars                      */
/*     3. Print the lower inverted pyramid:         */
/*          - Increasing spaces                     */
/*          - Decreasing stars                      */
/*     4. Total lines printed = 2 * rows - 1.       */
/*                                                  */
/*   Example (rows = 3):                            */
/*        *                                         */
/*       ***                                        */
/*      *****                                       */
/*       ***                                        */
/*        *                                         */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int rows;

    // Step 1: Read number of rows (half height)
    scanf("%d", &rows);

    // Step 2: Validate input
    if (rows < 1 || rows > 50) {
        printf("Invalid input.");
        return 0;
    }

    // Step 3: Print top half of diamond (pyramid)
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for (int star = 1; star <= (2 * i - 1); star++) {
            printf("*");
        }

        printf("\n"); // Move to next line
    }

    // Step 4: Print bottom half of diamond (inverted pyramid)
    for (int i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for (int star = 1; star <= (2 * i - 1); star++) {
            printf("*");
        }

        printf("\n"); // Move to next line
    }

    return 0; // End program
}
