/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Largest Element in Array */
/*   Description   : Program to read n        */
/*                   integers into an array   */
/*                   and find the largest     */
/*                   element among them.      */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard input/output library
#include <limits.h>    // For INT_MIN constant

int main() {
    int n, i;          // Step 1: Variables for size and loop
    scanf("%d", &n);   // Step 2: Read number of elements

    int arr[n];        // Step 3: Declare array of size n

    // Step 4: Read n integers into the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Print number of elements
    printf("Entered number of elements : %d", n);

    // Step 6: Initialize max value
    int max = INT_MIN;

    // Step 7: Find largest element
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Step 8: Print largest element
    printf("\nLargest element = %d", max);

    return 0;   // Step 9: End of program
}
