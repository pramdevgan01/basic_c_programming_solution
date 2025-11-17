/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Second Largest Element   */
/*   Description   : Program to read n        */
/*                   integers into an array   */
/*                   and find the second      */
/*                   largest value.           */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O header

int main() {
    int n, i;              // Step 1: Variables for size and loop index
    int arr[100];          // Step 2: Array declaration (max 100 elements)

    // Step 3: Read number of elements
    scanf("%d", &n);

    // Step 4: Read n array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Initialize largest and second largest
    int largest = arr[0];
    int secondLargest = arr[1];

    // Step 6: Ensure correct ordering initially
    if (secondLargest > largest) {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }

    // Step 7: Traverse array to find second largest
    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    // Step 8: Print result
    printf("Second Largest: %d", secondLargest);

    return 0;   // End of program
}
