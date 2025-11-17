/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Zeros in Lower Triangular*/
/*   Description   : Program to read an n x n */
/*                   matrix, display it, then */
/*                   replace all elements     */
/*                   below the main diagonal  */
/*                   with zeros and print the */
/*                   modified matrix.         */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int n, i, j;

    // Step 1: Read matrix size
    scanf("%d", &n);

    int arr[n][n];     // Step 2: Declare square matrix

    // Step 3: Read n × n matrix elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Step 4: Print original matrix
    printf("The matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", arr[i][j]);
            if (j < n - 1) printf(" "); // space between numbers
        }
        printf("\n");
    }

    // Step 5: Replace lower triangular elements with zeros
    printf("Zero in lower triangular matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j < i) {
                printf("0");      // lower triangular → zero
            } else {
                printf("%d", arr[i][j]);
            }
            if (j < n - 1) printf(" ");  // space between elements
        }
        printf("\n");
    }

    return 0;   // End of program
}
