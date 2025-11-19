/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Min & Max in Array       */
/*   Description   : Program to find the      */
/*                   minimum and maximum      */
/*                   elements in an array     */
/*                   using user-defined       */
/*                   functions (no recursion).*/
/*                                            */
/**********************************************/

#include <stdio.h>

/*
 * Function: findMin
 * ------------------
 * Finds the minimum value in the array using a loop.
 *
 * Parameters:
 *   arr - integer array
 *   n   - number of elements
 *
 * Returns:
 *   Minimum element of the array
 */
int findMin(int arr[], int n) {
    int min = arr[0];              // Assume first element as minimum

    for (int i = 1; i < n; i++) {  // Loop through array
        if (arr[i] < min) {
            min = arr[i];          // Update minimum
        }
    }

    return min;                    // Return minimum value
}

/*
 * Function: findMax
 * ------------------
 * Finds the maximum value in the array using a loop.
 *
 * Parameters:
 *   arr - integer array
 *   n   - number of elements
 *
 * Returns:
 *   Maximum element of the array
 */
int findMax(int arr[], int n) {
    int max = arr[0];              // Assume first element as maximum

    for (int i = 1; i < n; i++) {  // Loop through array
        if (arr[i] > max) {
            max = arr[i];          // Update maximum
        }
    }

    return max;                    // Return maximum value
}

int main() {

    int n;

    // Step 1: Read number of elements
    scanf("%d", &n);

    int arr[n];

    // Step 2: Read array values
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Call functions to compute min and max
    int minValue = findMin(arr, n);
    int maxValue = findMax(arr, n);

    // Step 4: Print results
    printf("%d\n", minValue);
    printf("%d\n", maxValue);

    return 0;
}
