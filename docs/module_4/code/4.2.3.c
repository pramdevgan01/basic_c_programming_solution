/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Average of n Numbers     */
/*   Description   : Program to read n numbers*/
/*                   into an array, compute   */
/*                   their sum, and calculate */
/*                   the average as a float.  */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard input/output library

int main() {
    int n, i;           // Step 1: Variables for number of elements and index

    // Step 2: Read number of elements
    scanf("%d", &n);

    int arr[n];         // Step 3: Declare array of size n

    // Step 4: Read n integers into the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Print the number of elements
    printf("Entered number of elements: %d\n", n);

    // Step 6: Compute sum and average
    float sum = 0.0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    float avg = sum / n;

    // Step 7: Print average with default 6-decimal precision
    printf("Average = %f", avg);

    return 0;   // Step 8: End of program
}
