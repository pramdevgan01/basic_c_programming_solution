/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Sorting an Array          */
/*   Description   : Program reads an array,   */
/*                   sorts it in ascending     */
/*                   order using a user-       */
/*                   defined function, and     */
/*                   prints the result.        */
/*                                            */
/**********************************************/

#include <stdio.h>

/*
 * Function: sortArray
 * --------------------
 * Sorts the array in ascending order using simple
 * comparison-based sorting (Bubble Sort style).
 *
 * Parameters:
 *   arr - the array of integers
 *   n   - number of elements in the array
 *
 * Returns:
 *   Nothing (array is modified directly)
 */
void sortArray(int arr[], int n) {
    int temp;

    // Compare every element with every other element
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            // Swap if earlier element is greater
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {

    int n;

    // Step 1: Read number of elements
    scanf("%d", &n);

    int arr[n];

    // Step 2: Read n space-separated elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Sort the array using user-defined function
    sortArray(arr, n);

    // Step 4: Print sorted array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(" ");
    }

    return 0;
}
