/*************************************************************/
/*                                                           */
/*   File Name   : second_largest_dma.c                      */
/*   Author      : Param Vishwakarma                         */
/*   Description : Demonstrates dynamic memory allocation     */
/*                 (DMA) by creating an array using malloc(). */
/*                 The program reads 'n' integers, stores     */
/*                 them in dynamically allocated memory, and  */
/*                 determines the second largest distinct     */
/*                 element.                                   */
/*                                                           */
/*   Input Format:                                           */
/*       n (size of array)                                   */
/*       next n lines → array elements                       */
/*                                                           */
/*   Output Format:                                          */
/*       The second largest element is: X                    */
/*       OR                                                  */
/*       There is no second largest element in the array.    */
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ n ≤ 100                                         */
/*       -10,000 ≤ array elements ≤ 10,000                   */
/*                                                           */
/*   Sample Input:                                           */
/*       6                                                   */
/*       10                                                  */
/*       20                                                  */
/*       20                                                  */
/*       30                                                  */
/*       30                                                  */
/*       40                                                  */
/*                                                           */
/*   Sample Output:                                          */
/*       The second largest element is: 30                   */
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

    /* Allocate memory */
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
        return 0;

    /* Read values */
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Find largest and second largest */
    int largest = -10001, second = -10001;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    /* Print result */
    if (second == -10001) {
        printf("There is no second largest element in the array.");
    } else {
        printf("The second largest element is: %d", second);
    }

    /* Free memory */
    free(arr);

    return 0;
}
