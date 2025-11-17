/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Array Initialization     */
/*   Description   : Program to initialize an */
/*                   array after declaration  */
/*                   using a loop. Each value */
/*                   is set to twice its      */
/*                   index, then printed.     */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O header

int main() {
    int n, i;           // Step 1: Variables for array size and loop index
    int arr[100];       // Step 2: Array declaration (max size 100)

    // Step 3: Prompt user for array size
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    // Step 4: Initialize elements with 'twice the index value'
    for (i = 0; i < n; i++) {
        arr[i] = 2 * i;
    }

    // Step 5: Print the array elements
    printf("Array elements (twice the index values):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);   // space after each element
    }

    return 0;   // Step 6: End of program
}
