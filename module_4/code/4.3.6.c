/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Matrix Addition          */
/*   Description   : Program to read two      */
/*                   matrices of size R x C,  */
/*                   add them, and print the  */
/*                   resulting sum matrix.    */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int R, C, i, j;

    // Step 1: Read rows and columns
    scanf("%d %d", &R, &C);

    int a[R][C], b[R][C], sum[R][C];

    // Step 2: Read first matrix (R x C)
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Step 3: Read second matrix (R x C)
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Step 4: Compute sum matrix
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Step 5: Print sum matrix (R x C)
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            printf("%d", sum[i][j]);
            if (j < C - 1) printf(" "); // space between elements
        }
        printf("\n");
    }

    return 0;   // End of program
}
