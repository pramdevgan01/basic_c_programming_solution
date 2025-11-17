/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Upper Triangular Matrix  */
/*   Description   : Program to check if a    */
/*                   given n x n matrix is    */
/*                   upper triangular.        */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int n, i, j;

    // Step 1: Read matrix size
    scanf("%d", &n);

    int arr[n][n];   // Step 2: Declare square matrix

    // Step 3: Read n x n matrix elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Step 4: Check if matrix is upper triangular
    int isUpper = 1;  // Assume true initially

    for (i = 1; i < n; i++) {          // Start from row 1 (since row 0 has no elements below diagonal)
        for (j = 0; j < i; j++) {      // Elements below diagonal
            if (arr[i][j] != 0) {
                isUpper = 0;
                break;
            }
        }
        if (!isUpper) break;
    }

    // Step 5: Print the result
    if (isUpper)
        printf("The matrix is upper triangular.");
    else
        printf("The matrix is not upper triangular.");

    return 0;   // End of program
}
