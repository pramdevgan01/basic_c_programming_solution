/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Size of Array Using sizeof */
/*   Description   : Program to demonstrate    */
/*                   how sizeof() is used to   */
/*                   find the size of an array */
/*                   and the number of elements*/
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O library

int main() {
    int n, i;              // Step 1: Variables for size and loop index
    int arr[100];          // Step 2: Array declaration (max size 100)

    // Step 3: Prompt user for number of elements
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    // Step 4: Read n elements from the user
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Calculate sizes using sizeof()
    int size_one = sizeof(arr[0]);          // Size of one element
    int total_size = sizeof(int) * n;       // Size of n elements (manual calc)
    int total_size_actual = sizeof(arr[0]) * n; // Consistent calculation

    // Step 6: Print results
    printf("Size of one element: %d bytes\n", size_one);
    printf("Total size of the array: %d bytes\n", total_size);
    printf("Total number of elements: %d\n", n);

    // Step 7: Print total size calculated using element count
    printf("Total size calculated using number of elements: %d bytes", total_size_actual);

    return 0;   // End of program
}
