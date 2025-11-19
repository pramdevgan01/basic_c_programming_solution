/************************************************************/
/*                                                          */
/*   Program Name : Binary Search in a Sorted Array         */
/*   Description  : This program performs binary search on  */
/*                  a sorted integer array.                 */
/*                                                          */
/*   Approach     : Continually divide array into halves    */
/*                  and compare the middle element.         */
/*                                                          */
/*   Requirement  : Array must be sorted in ascending order */
/*                                                          */
/*   Function     : binarySearch()                          */
/*                                                          */
/*   Author       : Param Vishwakarma                       */
/*   Date         : November 2025                           */
/*                                                          */
/************************************************************/

#include <stdio.h>

/*-----------------------------------------------------------
 Function Name : binarySearch
 Purpose       : Searches element x in a sorted array
 Input         : arr[] → sorted integer array
                 n     → number of elements
                 x     → element to search
 Output        : Returns index of x or -1 if not found
------------------------------------------------------------*/
int binarySearch(int arr[], int n, int x) {

    int low = 0;
    int high = n - 1;

    while (low <= high) {

        int mid = (low + high) / 2;

        /* Case 1: Element Found */
        if (arr[mid] == x) {
            return mid;
        }

        /* Case 2: Search Right Half */
        else if (arr[mid] < x) {
            low = mid + 1;
        }

        /* Case 3: Search Left Half */
        else {
            high = mid - 1;
        }
    }

    return -1;   /* Element not found */
}

/*--------------------- MAIN FUNCTION -----------------------*/
int main() {

    int n, x;

    /* Step 1: Read number of elements */
    scanf("%d", &n);

    int arr[n];

    /* Step 2: Read sorted array elements */
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Step 3: Read target element */
    scanf("%d", &x);

    /* Step 4: Perform binary search */
    int result = binarySearch(arr, n, x);

    /* Step 5: Print output */
    if (result != -1) {
        printf("Element found at index: %d", result);
    } else {
        printf("Element not found");
    }

    return 0;
}
