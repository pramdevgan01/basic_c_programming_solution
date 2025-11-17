/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Accessing & Modifying    */
/*                   Array Elements           */
/*   Description   : Program to read an array */
/*                   from the user, access an */
/*                   element by index, modify */
/*                   it with a new value, and */
/*                   print the updated array. */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>   // Standard input/output header

int main() {
    int n, i, index, newValue;   // Step 1: Declare variables
    int arr[100];                // Step 2: Array with max size 100

    // Step 3: Read number of elements
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    // Step 4: Read n array elements
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 5: Ask for index to access
    printf("Enter the index of the element you want to access (0 to %d):\n", n - 1);
    scanf("%d", &index);

    // Step 6: Display value at the selected index
    printf("Element at index %d: %d\n", index, arr[index]);

    // Step 7: Ask for the new value
    printf("Enter the new value for index %d: ", index);
    scanf("%d", &newValue);

    // Step 8: Modify the element
    arr[index] = newValue;

    // Step 9: Confirm updated value
    printf("Updated value at index %d: %d\n", index, newValue);

    // Step 10: Print updated array
    printf("Updated array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);    // Space after each element
    }

    return 0;   // End of program
}
