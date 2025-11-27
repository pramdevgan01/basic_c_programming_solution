/***************************************************************/
/*                                                             */
/*   File Name   : sum_of_products_dma.c                       */
/*   Author      : Param Vishwakarma                           */
/*   Description : Demonstrates dynamic memory allocation      */
/*                 (DMA) by creating two arrays using          */
/*                 malloc(). The program reads 'n' integers    */
/*                 for each array, stores them in dynamically  */
/*                 allocated memory, and computes the sum of   */
/*                 the products of corresponding elements.     */
/*                                                             */
/*   Input Format:                                             */
/*       n (size of arrays)                                    */
/*       next line → n space-separated integers (array 1)      */
/*       next line → n space-separated integers (array 2)      */
/*                                                             */
/*   Output Format:                                            */
/*       The sum of the products is: X                         */
/*                                                             */
/*   Constraints:                                              */
/*       1 ≤ n ≤ 100                                           */
/*       Elements can be positive, negative, or zero           */
/*                                                             */
/*   Sample Input 1:                                           */
/*       3                                                     */
/*       3 1 2                                                 */
/*       2 3 4                                                 */
/*                                                             */
/*   Sample Output 1:                                          */
/*       The sum of the products is: 20                        */
/*                                                             */
/*   Sample Input 2:                                           */
/*       5                                                     */
/*       1 2 3 4 5                                             */
/*       5 4 3 2 1                                             */
/*                                                             */
/*   Sample Output 2:                                          */
/*       The sum of the products is: 35                        */
/*                                                             */
/*   Date        : November 2025                               */
/*                                                             */
/***************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    /* Allocate memory for two arrays */
    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)malloc(n * sizeof(int));

    /* Check memory allocation */
    if (arr1 == NULL || arr2 == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    /* Read elements of first array */
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    /* Read elements of second array */
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    /* Compute sum of products */
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr1[i] * arr2[i];
    }

    /* Print result */
    printf("The sum of the products is: %d", sum);

    /* Free memory */
    free(arr1);
    free(arr2);

    return 0;
}
