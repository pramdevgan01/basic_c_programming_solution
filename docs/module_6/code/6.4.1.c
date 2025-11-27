/*************************************************************/
/*                                                           */
/*   File Name   : square_array_dma.c                        */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates dynamic memory allocation     */
/*                 for an integer array. The user inputs n   */
/*                 integers, the program stores them using    */
/*                 malloc(), computes their squares, and      */
/*                 prints the squared values.                 */
/*                                                           */
/*   Input Format:                                           */
/*       n  → size of array                                  */
/*       next n lines → integer values                       */
/*                                                           */
/*   Output Format:                                          */
/*       n space-separated squared values                    */
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ n ≤ 100                                         */
/*       −10,000 ≤ array elements ≤ 10,000                   */
/*                                                           */
/*   Sample Input:                                           */
/*       5                                                   */
/*       1                                                   */
/*       2                                                   */
/*       3                                                   */
/*       4                                                   */
/*       5                                                   */
/*                                                           */
/*   Sample Output:                                          */
/*       1 4 9 16 25                                         */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    /* Allocate memory dynamically */
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        return 0;  // Memory allocation failed
    }

    /* Read array values */
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Print squares */
    for (int i = 0; i < n; i++) {
        int square = arr[i] * arr[i];
        printf("%d", square);
        if (i < n - 1)
            printf(" ");
    }

    /* Free allocated memory */
    free(arr);

    return 0;
}
