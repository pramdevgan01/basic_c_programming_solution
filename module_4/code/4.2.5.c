/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Sum of Elements in Array */
/*   Description   : Program to read n        */
/*                   integers into an array,  */
/*                   display them, and compute*/
/*                   the total sum.           */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int n, i;         // Step 1: Variables for array size and loop index
    scanf("%d", &n);  // Step 2: Read array size

    int arr[n];       // Step 3: Declare array of size n

    // Step 4: Read n integers into the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Print array size
    printf("Entered array size: %d\n", n);

    // Step 6: Print header before listing elements
    printf("Enter array elements\n");

    // Step 7: Print each element and compute sum
    int sum = 0;
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);   // Print each element on new line
        sum += arr[i];            // Add element to sum
    }

    // Step 8: Print the total sum
    printf("Sum of the array = %d", sum);

    return 0;   // Step 9: End of program
}
