#include <stdio.h>

/*
 * Function: deleteAtIndex
 * -----------------------
 * Deletes an element from the array at the given index.
 * Shifts elements to the left and reduces effective size by 1.
 *
 * Parameters:
 *   arr   - the array
 *   index - index to delete
 *   size  - total size (fixed = 5)
 *
 * Returns:
 *   New size of the array (size - 1)
 */
int deleteAtIndex(int arr[], int index, int size) {
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];  // Shift left
    }
    return size - 1;  // New size after deletion
}

int main() {

    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    // No prompts — problem requirement
    scanf("%d", &index);

    // Call function
    int newSize = deleteAtIndex(arr, index, 5);

    // Print updated array
    for (int i = 0; i < newSize; i++) {
        printf("%d", arr[i]);
        if (i < newSize - 1)
            printf(" ");
    }

    return 0;
}
