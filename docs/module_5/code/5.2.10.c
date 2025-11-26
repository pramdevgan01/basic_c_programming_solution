/*************************************************************/
/*                                                           */
/*   Program Name : Merge Two Arrays                         */
/*   Description  : This program reads two arrays from the   */
/*                  user, merges them into a single array,   */
/*                  and prints the merged array.             */
/*                                                           */
/*   Function     : mergeArrays()                            */
/*                  Merges array1 and array2 into array3.    */
/*                                                           */
/*   Input Format :                                           */
/*      n1 - number of elements in first array               */
/*      n1 integers                                          */
/*      n2 - number of elements in second array              */
/*      n2 integers                                          */
/*                                                           */
/*   Output Format:                                           */
/*      Merged array: <merged elements>                      */
/*                                                           */
/*   Author       : Param Vishwakarma                        */
/*   Date         : November 2025                            */
/*                                                           */
/*************************************************************/

#include <stdio.h>

/*-------------------------------------------------------------
 Function Name : mergeArrays
 Purpose       : Merge two arrays into a third array
 Input         : arr1[] - first array
                 arr2[] - second array
                 arr3[] - merged output array
                 n1     - size of arr1
                 n2     - size of arr2
 Output        : arr3[] contains merged elements
--------------------------------------------------------------*/
void mergeArrays(int arr1[], int arr2[], int arr3[], int n1, int n2) {
    int i;

    /* Copy elements of first array */
    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    /* Copy elements of second array */
    for (int j = 0; j < n2; j++) {
        arr3[i + j] = arr2[j];
    }
}

/*--------------------------- MAIN ----------------------------*/
int main() {

    int n1, n2;

    /* Step 1: Read size and elements of first array */
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    /* Step 2: Read size and elements of second array */
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    /* Step 3: Create merged array */
    int merged[n1 + n2];

    /* Step 4: Call function to merge arrays */
    mergeArrays(arr1, arr2, merged, n1, n2);

    /* Step 5: Print merged array */
    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d", merged[i]);
        if (i < (n1 + n2 - 1)) printf(" ");
    }

    return 0;
}
