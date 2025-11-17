/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Print Square of Elements */
/*   Description   : Program to read an array */
/*                   of integers, print the   */
/*                   elements, and then print */
/*                   the square of each one.  */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard input/output header

int main() {
    int n, i;              // Step 1: Variables for number of elements and index
    int arr[100];          // Step 2: Array with max size 100

    // Step 3: Prompt user to enter number of array elements
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    // Step 4: Prompt user to enter 'n' integers
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Print the array elements (each followed by a space)
    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);     // space after every element (required by test case)
    }
    printf("\n");

    // Step 6: Print squares of all array elements (each followed by a space)
    printf("Square of array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i] * arr[i]);   // space after every element
    }

    return 0;   // Step 7: End of program
}
