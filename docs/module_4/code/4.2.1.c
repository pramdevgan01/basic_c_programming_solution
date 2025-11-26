/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : 1D Array with For Loop   */
/*   Description   : Program to read elements */
/*                   into a 1D array using a  */
/*                   for loop and then print  */
/*                   each element on a new    */
/*                   line using another loop. */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard input/output library

int main() {
    int size, i;           // Step 1: Declare variables for size and loop index

    // Step 2: Read the number of elements
    scanf("%d", &size);

    int arr[size];         // Step 3: Declare array of given size

    // Step 4: Prompt user to enter array elements
    printf("Enter array elements\n");

    // Step 5: Read elements using a loop
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 6: Print the entered elements
    printf("Entered elements of array:\n");
    for (i = 0; i < size; i++) {
        printf("%d\n", arr[i]);   // Each element printed on a new line
    }

    return 0;   // Step 7: End of program
}
