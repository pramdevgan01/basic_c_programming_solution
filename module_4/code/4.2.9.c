/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Maximum and Minimum      */
/*                   Difference               */
/*   Description   : Program to read n        */
/*                   integers into an array   */
/*                   and print the difference */
/*                   between max and min.     */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library
#include <limits.h>    // For INT_MIN and INT_MAX

int main() {
    int n, i;          // Step 1: Variables for size and loop index
    scanf("%d", &n);   // Step 2: Read number of elements

    int arr[n];        // Step 3: Declare array

    // Step 4: Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Initialize max and min
    int max = INT_MIN;
    int min = INT_MAX;

    // Step 6: Find max and min
    for (i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    // Step 7: Print the difference
    printf("%d", max - min);

    return 0;    // Step 8: End of program
}
