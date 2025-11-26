/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Multi-dimensional Array   */
/*   Description   : Program reads a 2D array, */
/*                   passes it to a function,  */
/*                   and calculates the total  */
/*                   sum of all elements.      */
/*                   Only array name is passed */
/*                   with row & col sizes.     */
/*                                            */
/**********************************************/

#include <stdio.h>

/*
 * Function: sumOf2DArray
 * ----------------------
 * Calculates the sum of all elements in a 2D array.
 *
 * Parameters:
 *   arr  - 2D integer array
 *   rows - number of rows
 *   cols - number of columns
 *
 * Returns:
 *   Total sum of all matrix elements
 */
int sumOf2DArray(int arr[][100], int rows, int cols) {
    int sum = 0;

    // Loop through each row
    for (int i = 0; i < rows; i++) {

        // Loop through each column
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];   // Add element to sum
        }
    }

    return sum;   // Return computed sum
}

int main() {

    int R, C;

    // Step 1: Read number of rows and columns
    scanf("%d %d", &R, &C);

    int arr[100][100];  // 2D array with max size

    // Step 2: Read R × C elements
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Step 3: Call function to compute sum
    int result = sumOf2DArray(arr, R, C);

    // Step 4: Print result
    printf("Sum of array elements: %d", result);

    return 0;
}
