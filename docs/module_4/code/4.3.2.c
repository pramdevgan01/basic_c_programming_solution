/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Access Array Using Loops */
/*   Description   : Program to read and      */
/*                   print a 3x3 matrix using */
/*                   nested loops.            */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int arr[3][3];     // Step 1: Declare a 3x3 matrix
    int i, j;          // Step 2: Loop variables

    // Step 3: Prompt the user
    printf("Enter elements for a 3x3 matrix:\n");

    // Step 4: Read 9 integers using nested loops
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Step 5: Print matrix heading
    printf("2D Array: 3x3 Matrix\n");

    // Step 6: Print matrix with REQUIRED trailing spaces
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);   // Print value + space always
        }
        printf("\n");                   // New line after each row
    }

    return 0;   // Step 7: End of program
}
