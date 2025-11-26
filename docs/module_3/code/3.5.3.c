//Enhance your coding skills, start writing your code here!!
/****************************************************/
/*                                                  */
/*   Author        : Param Vishwakarma              */
/*   Problem Name  : Pyramid Pattern of Asterisks   */
/*   Description   : Program to print a symmetrical */
/*                   pyramid of stars based on the  */
/*                   number of rows provided by the */
/*                   user.                          */
/*                                                  */
/*   Logic:                                         */
/*     1. Each row has spaces + stars.              */
/*     2. Spaces = n - row number.                  */
/*     3. Stars  = 2 * row number - 1.              */
/*     4. Use nested loops to print spaces first,   */
/*        then stars.                               */
/*                                                  */
/*   Example: For n = 3                             */
/*          *                                       */
/*         ***                                      */
/*        *****                                     */
/*                                                  */
/****************************************************/

#include <stdio.h>

int main(void) {
    int n;

    // Step 1: Read input (number of rows)
    scanf("%d", &n);

    // Step 2: Validate input
    if (n < 1 || n > 100) {
        printf("Invalid input. Please enter a number between 1 and 100.");
        return 0;
    }

    // Step 3: Generate pyramid pattern
    for (int i = 1; i <= n; i++) {  // Outer loop → row control

        // Step 3.1: Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Step 3.2: Print stars for current row
        for (int star = 1; star <= (2 * i - 1); star++) {
            printf("*");
        }

        // Step 3.3: Move to next line
        printf("\n");
    }

    return 0; // End program
}
