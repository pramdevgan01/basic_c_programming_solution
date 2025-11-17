/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Product of Array Elements*/
/*   Description   : Program to read n        */
/*                   integers into an array   */
/*                   and compute the product  */
/*                   of all elements.         */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>     // Standard I/O library

int main() {
    int n, i;          // Step 1: Variables for size and loop index
    scanf("%d", &n);   // Step 2: Read number of elements

    int arr[n];        // Step 3: Declare array

    // Step 4: Read n array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Compute product (use long long to prevent overflow)
    long long product = 1;
    for (i = 0; i < n; i++) {
        product *= arr[i];
    }

    // Step 6: Print product
    printf("%lld", product);

    return 0;   // Step 7: End of program
}
