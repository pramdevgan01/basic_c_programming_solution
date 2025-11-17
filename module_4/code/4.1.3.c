/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Insert Element in Array  */
/*   Description   : Program to insert an     */
/*                   element at a given index */
/*                   in an array. Existing    */
/*                   elements are shifted to  */
/*                   make space, and the      */
/*                   resultant array is shown */
/*                   line by line.            */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard I/O header

int main() {
    int n, i, pos, val;       // Step 1: Variables for size, position, value
    int arr[200];             // Step 2: Array with enough space for insertion

    // Step 3: Ask user for number of elements
    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    // Step 4: Read 'n' elements from user
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Read position for insertion
    printf("Enter the location where you wish to insert an element\n");
    scanf("%d", &pos);

    // Step 6: Read the value to be inserted
    printf("Enter the value to insert\n");
    scanf("%d", &val);

    // Step 7: Shift elements to the right starting from last index
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Step 8: Insert value at the desired position
    arr[pos] = val;

    // Step 9: Print the resultant array line by line
    printf("Resultant array is\n");
    for (i = 0; i <= n; i++) {
        printf("%d\n", arr[i]);
    }

    // Step 10: End program
    return 0;
}
