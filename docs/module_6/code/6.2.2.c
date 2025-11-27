/*************************************************************/
/*                                                           */
/*   File Name   : pointer_input_array.c                     */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates using a pointer to input     */
/*                 array values and display them in array    */
/*                 notation with commas.                     */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int n;
    int arr[100];
    int *pt = arr;   /* pointer to array */

    /* Read number of elements */
    scanf("%d", &n);

    /* Read values using pointer */
    for (int i = 0; i < n; i++) {
        scanf("%d", (pt + i));
    }

    /* Print output EXACTLY as required */
    printf("Array elements: ");

    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);   // comma after every value (no spaces)
    }

    return 0;
}
