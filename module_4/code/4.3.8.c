/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Check Symmetric Matrix   */
/*   Description   : Program to read an n x n */
/*                   matrix and check whether */
/*                   it is symmetric.         */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int n, i, j;

    // Step 1: Read matrix size
    scanf("%d", &n);

    int arr[n][n];    // Step 2: Declare square matrix

    // Step 3: Read n x n matrix elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Step 4: Check symmetry: arr[i][j] must equal arr[j][i]
    int isSymmetric = 1;   // Assume true

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i][j] != arr[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    // Step 5: Print result
    if (isSymmetric)
        printf("The matrix is symmetric.");
    else
        printf("The matrix is not symmetric.");

    return 0;  // End of program
}
