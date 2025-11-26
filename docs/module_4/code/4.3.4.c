/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Sum of Two 2x2 Matrices  */
/*   Description   : Program to read two 2x2  */
/*                   matrices using nested    */
/*                   loops, display them, and */
/*                   print their sum matrix.  */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int a[2][2], b[2][2], sum[2][2];
    int i, j;

    // Step 1: Input for 1st matrix
    printf("Enter elements of 1st matrix\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Step 2: Display 1st matrix
    printf("Entered elements of 1st matrix are:\n");
    for (i = 0; i < 2; i++) {
        printf("%d %d\n", a[i][0], a[i][1]);
    }
    printf("\n");

    // Step 3: Input for 2nd matrix
    printf("Enter elements of 2nd matrix\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Step 4: Display 2nd matrix
    printf("Entered elements of 2nd matrix are:\n");
    for (i = 0; i < 2; i++) {
        printf("%d %d\n", b[i][0], b[i][1]);
    }
    printf("\n");

    // Step 5: Compute sum
    printf("Sum Of Matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
        printf("%d %d\n", sum[i][0], sum[i][1]);
    }

    return 0;   // End of program
}
