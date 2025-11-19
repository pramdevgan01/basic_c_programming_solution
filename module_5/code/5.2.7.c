#include <stdio.h>

/*
 * Function: averageOfArray
 * -------------------------
 * Computes the average of all elements in an array.
 *
 * Parameters:
 *   arr - integer array
 *   n   - number of elements
 *
 * Returns:
 *   The average as a float
 */
float averageOfArray(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (float)sum / n;   // Convert to float for accurate division
}

int main() {

    int n;
    scanf("%d", &n);

    int arr[n];

    // Reading elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calling function
    float avg = averageOfArray(arr, n);

    // Output formatted to 2 decimal places
    printf("Average of array elements: %.2f", avg);

    return 0;
}
