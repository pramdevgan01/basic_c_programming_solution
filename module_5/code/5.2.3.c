/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Sum of Array Elements    */
/*   Description   : Program reads an array,   */
/*                   passes it to a function   */
/*                   which returns the sum of  */
/*                   all elements. The sum is  */
/*                   then printed in main.     */
/*                                            */
/**********************************************/

#include <stdio.h>

/*
 * Function: sumOfArray
 * --------------------
 * Computes the sum of all elements in an integer array.
 *
 * Parameters:
 *   arr - the array of integers
 *   n   - number of elements in the array
 *
 * Returns:
 *   Total sum of the array elements
 */
int sumOfArray(int arr[], int n) {
    int sum = 0;

    // Loop to accumulate the sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;   // Return computed sum
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

    // Step 3: Call function to compute sum
    int result = sumOfArray(arr, n);

    // Step 4: Print the result
    printf("Sum of array elements: %d", result);

    return 0;
}
