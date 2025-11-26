/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Diagonal Sum of Matrix   */
/*   Description   : Program to read an n x n */
/*                   matrix and compute the   */
/*                   sum of its main diagonal */
/*                   elements.                */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int n, i, j;

    // Step 1: Read size of the square matrix
    scanf("%d", &n);

    int arr[n][n];    // Step 2: Declare square matrix

    // Step 3: Read n × n matrix elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Step 4: Compute diagonal sum
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i][i];   // Only main diagonal elements (i == j)
    }

    // Step 5: Print result
    printf("Diagonal Sum: %d", sum);

    return 0;   // End of program
}
