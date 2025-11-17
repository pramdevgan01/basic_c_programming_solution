/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Access Array Without     */
/*                   Loops (2x2 Matrix)       */
/*   Description   : Program to read and print*/
/*                   a 2x2 matrix without any */
/*                   loops. All indexing is   */
/*                   done manually.           */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int arr[2][2];    // Step 1: Declare 2x2 matrix

    // Step 2: Prompt
    printf("Enter elements for a 2x2 matrix:\n");

    // Step 3: Read 4 integers (no loops)
    scanf("%d", &arr[0][0]);
    scanf("%d", &arr[0][1]);
    scanf("%d", &arr[1][0]);
    scanf("%d", &arr[1][1]);

    // Step 4: Print heading
    printf("2D Array: 2x2 Matrix\n");

    // Step 5: Print matrix with REQUIRED trailing spaces
    printf("%d %d \n", arr[0][0], arr[0][1]);  // space after last element
    printf("%d %d \n", arr[1][0], arr[1][1]);  // space after last element

    return 0;
}
