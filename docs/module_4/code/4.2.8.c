/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Remove Duplicates        */
/*   Description   : Program to read n        */
/*                   integers and print only  */
/*                   the unique elements in   */
/*                   the order of first       */
/*                   occurrence.              */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int n, i, j;      // Step 1: Variables for size and loops

    // Step 2: Read number of elements
    scanf("%d", &n);

    int arr[n];       // Step 3: Array declaration
    int unique[n];    // Step 4: Array to store unique elements
    int uniqueCount = 0;

    // Step 5: Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 6: Identify unique elements
    for (i = 0; i < n; i++) {
        int found = 0;  // flag to check duplicate in unique[]

        // Check if arr[i] already exists in unique[]
        for (j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                found = 1;
                break;
            }
        }

        // If not found, add to unique list
        if (!found) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    // Step 7: Output unique elements
    printf("Unique elements: ");
    for (i = 0; i < uniqueCount; i++) {
        printf("%d", unique[i]);
        if (i < uniqueCount - 1) {
            printf(" "); // Space between elements, no trailing space
        }
    }

    return 0;   // Step 8: End of program
}
