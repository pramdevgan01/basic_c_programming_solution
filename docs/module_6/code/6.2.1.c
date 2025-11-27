/*************************************************************/
/*                                                           */
/*   File Name   : pointer_arithmetic.c                      */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates pointer arithmetic with      */
/*                 arrays. Reads elements, prints them        */
/*                 normally and using pointer arithmetic,     */
/*                 then modifies each element by adding 5.    */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int n;
    int arr[100];
    int *p = arr;   /* pointer to array */

    /* Prompt 1 */
    printf("Enter number of elements:\n");

    scanf("%d", &n);

    printf("Entered number of elements %d\n\n", n);

    /* Prompt 2 */
    printf("Enter array elements\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }

    /* Display original array EXACT format */
    printf("Entered elements of array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));   // NOTE: SPACE after each number
    }
    printf("\n");

    /* Pointer arithmetic printing */
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, *(p + i));
    }
    printf("\n");

    /* Modified array */
    printf("Modified array elements:\n");
    for (int i = 0; i < n; i++) {
        *(p + i) = *(p + i) + 5;
        printf("Element %d: %d\n", i, *(p + i));
    }

    return 0;
}
