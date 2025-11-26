/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Accessing 2D Array Using */
/*                   For-Loop (2x3 Matrix)    */
/*   Description   : Program to read a 2x3    */
/*                   matrix using nested for  */
/*                   loops and display it in  */
/*                   matrix form with exact   */
/*                   spacing requirements.    */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>    // Standard I/O library

int main() {
    int arr[2][3];     // Step 1: Declare a 2x3 matrix
    int i, j;          // Step 2: Loop counters

    // Step 3: Prompt user to enter elements
    printf("Enter elements for a 2x3 matrix:\n");

    // Step 4: Read 6 integers using nested loops
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Step 5: Print required headings
    printf("Entered array elements:\n");
    printf("2D Array: 2x3 Matrix\n");

    // Step 6: Print matrix with exact spacing rules
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", arr[i][j]);

            // Apply spacing rules
            if (i == 0) {
                // Row 1 → always print a trailing space
                printf(" ");
            } else {
                // Row 2 → print space only between elements, NOT after last
                if (j < 2) printf(" ");
            }
        }
        printf("\n");
    }

    return 0;   // Step 7: End of program
}
