/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Transpose of a Matrix    */
/*   Description   : Program to read a matrix */
/*                   from user, display it,   */
/*                   and print its transpose. */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int R, C, i, j;

    // Step 1: Ask for rows and columns
    printf("Enter rows and columns:\n");
    scanf("%d %d", &R, &C);

    int arr[R][C];     // Step 2: Original matrix
    int trans[C][R];   // Step 3: Transpose matrix

    // Step 4: Ask for matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Step 5: Display original matrix
    printf("Entered matrix:\n");
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            printf("%d", arr[i][j]);
            if (j < C - 1) printf(" "); // space between elements
        }
        printf("\n");
    }
    printf("\n");

    // Step 6: Compute transpose
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            trans[j][i] = arr[i][j];
        }
    }

    // Step 7: Print transpose matrix
    printf("Transpose of the matrix:\n");
    for (i = 0; i < C; i++) {
        for (j = 0; j < R; j++) {
            printf("%d", trans[i][j]);
            if (j < R - 1) printf(" "); // space between elements
        }
        printf("\n");
    }

    return 0;   // End of program
}
