/*************************************************************/
/*                                                           */
/*   Program Name : Reverse an Array                         */
/*   Description  : This program reads an array from the     */
/*                  user and reverses its elements using a   */
/*                  user-defined function.                   */
/*                                                           */
/*   Function     : reverseArray()                           */
/*                  Reverses the array in-place.             */
/*                                                           */
/*   Input Format :                                           */
/*      n - number of elements                                */
/*      n integers                                            */
/*                                                           */
/*   Output Format:                                           */
/*      Reversed array: <elements>                            */
/*                                                           */
/*   Author       : Param Vishwakarma                         */
/*   Date         : November 2025                            */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-------------------------------------------------------------
 Function Name : reverseArray
 Purpose       : Reverses the array elements in-place
 Input         : arr[] - integer array
                 n     - number of elements
 Output        : Array is modified by swapping elements
--------------------------------------------------------------*/
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        /* swap arr[start] and arr[end] */
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

/*--------------------------- MAIN ----------------------------*/
int main() {

    int n;

    /* Step 1: Read number of elements */
    scanf("%d", &n);

    int arr[n];

    /* Step 2: Read array elements */
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Step 3: Reverse array using function */
    reverseArray(arr, n);

    /* Step 4: Print the reversed array */
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(" ");
    }

    return 0;
}
