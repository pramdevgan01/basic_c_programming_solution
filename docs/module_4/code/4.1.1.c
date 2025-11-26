/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Negative Values Count    */
/*   Description   : Program to read an array */
/*                   of integers and count    */
/*                   how many negative values */
/*                   are present in it. The   */
/*                   program displays the     */
/*                   total number of negative */
/*                   elements found.          */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input/output functions

int main(void) {
    int cnt = 0;     // Step 1: Initialize counter for negative values
    int size;        // Step 2: Variable to store size of the array

    // Step 3: Ask the user to input the size of the array
    printf("Input the size of array:\n");
    if (scanf("%d", &size) != 1) return 0;   // Input validation

    // Step 4: Ensure array size stays within valid bounds (0 to 100)
    if (size < 0) size = 0;
    if (size > 100) size = 100;

    int arr[100];    // Step 5: Declare array with max size 100

    // Step 6: Read 'size' number of array elements from user
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 7: Count how many values are negative
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            cnt++;   // Increment counter when negative value is found
        }
    }

    // Step 8: Display the result in the required format
    printf("-ve values count = \"%d\"", cnt);

    // Step 9: End of program
    return 0;
}
