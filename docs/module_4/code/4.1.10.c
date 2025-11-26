/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Frequency of Elements    */
/*   Description   : Program to read n        */
/*                   integers and print the    */
/*                   frequency of each unique  */
/*                   element in the array.     */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard input/output header

int main() {
    int n, i, j;           // Step 1: Variables for size and loops
    int arr[100];          // Step 2: Array with maximum 100 elements
    int freq[100];         // Step 3: Frequency tracker array

    // Step 4: Read number of elements
    scanf("%d", &n);

    // Step 5: Read n elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;      // Initialize frequency array
    }

    // Step 6: Count frequencies
    for (i = 0; i < n; i++) {
        int count = 1;

        if (freq[i] == 0) {
            continue;      // Already counted earlier
        }

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;   // Mark as counted
            }
        }

        freq[i] = count;   // Store the frequency
    }

    // Step 7: Print unique elements with their frequency
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {        // Print only unique elements
            printf("%d: %d\n", arr[i], freq[i]);
        }
    }

    return 0;   // End of program
}
