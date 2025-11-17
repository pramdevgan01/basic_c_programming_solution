/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Count Even and Odd       */
/*   Description   : Program to read n        */
/*                   integers into an array   */
/*                   and count how many are   */
/*                   even and how many are    */
/*                   odd.                     */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>    // Standard I/O library

int main() {
    int n, i;          // Step 1: Variables for size and loop
    scanf("%d", &n);   // Step 2: Read number of elements

    int arr[n];        // Step 3: Declare array of size n

    // Step 4: Read n elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Initialize even and odd counters
    int even_count = 0;
    int odd_count = 0;

    // Step 6: Count even and odd elements
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Step 7: Print results
    printf("Number of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);

    return 0;   // Step 8: End of program
}
