/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Print Array Elements     */
/*   Description   : Program to read an array */
/*                   of integers from the     */
/*                   user and print all the   */
/*                   elements. Displays       */
/*                   messages exactly as per  */
/*                   the required format.     */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Include standard I/O header for input/output functions

int main() {
    int n, i;        // Step 1: Declare variables for array size and loop index
    int arr[100];    // Step 2: Declare array with maximum size of 100

    // Step 3: Prompt user to enter number of elements
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);

    // Step 4: Prompt user to enter 'n' array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // Read each element
    }

    // Step 5: Display message before printing array
    printf("The array elements are:\n");

    // Step 6: Print all elements in one line separated by space
    for (i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d", arr[i]);      // Last element → no trailing space
        } else {
            printf("%d ", arr[i]);     // Other elements → print with space
        }
    }

    // Step 7: End of program
    return 0;
}
