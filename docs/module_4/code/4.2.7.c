/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Reverse an Array         */
/*   Description   : Program to read n        */
/*                   integers into an array   */
/*                   and print them in        */
/*                   reverse order.           */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>    // Standard I/O library

int main() {
    int n, i;          // Step 1: Variables for size and loop index

    // Step 2: Read number of elements
    scanf("%d", &n);

    int arr[n];        // Step 3: Array declaration of size n

    // Step 4: Read n integers
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Print reversed array
    printf("Reversed array: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0) {
            printf(" ");   // space between numbers but not after last
        }
    }

    return 0;   // Step 6: End of program
}
