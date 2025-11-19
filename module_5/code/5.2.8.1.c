/********************************************************/
/*                                                      */
/*   Program Name : Linear Search in an Array           */
/*   Description  : This program performs linear search */
/*                  on an integer array to find a given */
/*                  element.                            */
/*                                                      */
/*   Approach     : Check each element one-by-one       */
/*                  until the element is found.         */
/*                                                      */
/*   Function     : linearSearch()                      */
/*                                                      */
/*   Author       : Param Vishwakarma                   */
/*   Date         : November 2025                       */
/*                                                      */
/********************************************************/

#include <stdio.h>

/*-------------------------------------------------------
 Function Name : linearSearch
 Purpose       : Searches an element x in the array arr[]
 Input         : arr[] → integer array
                 n     → number of elements
                 x     → element to search
 Output        : Returns index of x or -1 if not found
--------------------------------------------------------*/
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

/*-------------------- MAIN FUNCTION --------------------*/
int main() {

    int n, x;

    /* Step 1: Read number of elements */
    scanf("%d", &n);

    int arr[n];

    /* Step 2: Read array elements */
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Step 3: Read element to search */
    scanf("%d", &x);

    /* Step 4: Perform linear search */
    int result = linearSearch(arr, n, x);

    /* Step 5: Print result */
    if (result != -1) {
        printf("Element found at index: %d", result);
    } else {
        printf("Element not found");
    }

    return 0;
}
