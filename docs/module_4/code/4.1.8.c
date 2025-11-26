/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Count Even and Odd       */
/*                   Numbers in an Array      */
/*   Description   : Program to read an array */
/*                   of integers and count    */
/*                   how many are even and    */
/*                   how many are odd.        */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard input/output header

int main() {
    int n, i;                // Step 1: Variables for number of elements and loop index
    int arr[100];            // Step 2: Array declaration (max 100 elements)
    int evenCount = 0;       // Step 3: Counter for even numbers
    int oddCount = 0;        // Step 4: Counter for odd numbers

    // Step 5: Read number of elements
    scanf("%d", &n);

    // Step 6: Read n elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 7: Count even and odd numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;     // Increment even counter
        } else {
            oddCount++;      // Increment odd counter
        }
    }

    // Step 8: Print results
    printf("Even: %d\n", evenCount);
    printf("Odd: %d", oddCount);

    return 0;  // End of program
}
