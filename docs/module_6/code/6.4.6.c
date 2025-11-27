/*************************************************************/
/*                                                           */
/*   File Name   : merge_arrays.c                            */
/*   Author      : Param Vishwakarma                         */
/*   Description : This program demonstrates dynamic memory  */
/*                 allocation (DMA) to store two arrays,     */
/*                 merge them into a new array, and print     */
/*                 the merged result.                         */
/*                                                           */
/*   Input        : n1  → size of first array                */
/*                  n2  → size of second array               */
/*                  next n1 integers → first array           */
/*                  next n2 integers → second array          */
/*                                                           */
/*   Output       : All merged array elements separated by   */
/*                  spaces.                                   */
/*                                                           */
/*   Constraints  : 1 ≤ n1, n2 ≤ 1000                        */
/*                  −10^6 ≤ array elements ≤ 10^6            */
/*                                                           */
/*   Date         : November 2025                            */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include <stdlib.h>     /* Required for malloc(), free() */

int main(void)
{
    int n1, n2;

    /*-----------------------------------------------------*/
    /*  Read sizes of both arrays                          */
    /*-----------------------------------------------------*/
    scanf("%d", &n1);

    /* Allocate memory for first array */
    int *arr1 = (int *)malloc(n1 * sizeof(int));
    if (arr1 == NULL) return 0;

    /* Read elements of first array */
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);

    /* Allocate memory for second array */
    int *arr2 = (int *)malloc(n2 * sizeof(int));
    if (arr2 == NULL) {
        free(arr1);
        return 0;
    }

    /* Read elements of second array */
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    /*-----------------------------------------------------*/
    /*  Allocate memory for merged array                   */
    /*-----------------------------------------------------*/
    int total = n1 + n2;
    int *merged = (int *)malloc(total * sizeof(int));
    if (merged == NULL) {
        free(arr1);
        free(arr2);
        return 0;
    }

    /*-----------------------------------------------------*/
    /*  Merge arrays                                       */
    /*-----------------------------------------------------*/
    for (int i = 0; i < n1; i++)
        merged[i] = arr1[i];

    for (int i = 0; i < n2; i++)
        merged[n1 + i] = arr2[i];

    /*-----------------------------------------------------*/
    /*  Print merged array                                 */
    /*-----------------------------------------------------*/
    for (int i = 0; i < total; i++) {
        printf("%d", merged[i]);
        if (i < total - 1)
            printf(" ");
    }

    /*-----------------------------------------------------*/
    /*  Free allocated memory                              */
    /*-----------------------------------------------------*/
    free(arr1);
    free(arr2);
    free(merged);

    return 0;
}
