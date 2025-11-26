#include <stdio.h>

/*
 * Function: sumArray
 * -------------------
 * Computes the total sum of elements in an integer array.
 *
 * Parameters:
 *   arr - the array of integers
 *   n   - number of elements in the array
 *
 * Returns:
 *   The sum of all elements
 */
int sumArray(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];  // Add each element to sum
    }

    return sum;
}

int main() {

    int n;
    scanf("%d", &n);

    int arr[n];

    // Reading array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calling function
    int result = sumArray(arr, n);

    // Printing output
    printf("Sum of all elements: %d", result);

    return 0;
}
