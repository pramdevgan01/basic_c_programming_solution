/*************************************************************/
/*                                                           */
/*   File Name   : sum_using_pointers.c                      */
/*   Author      : Param Vishwakarma                         */
/*   Description : Computes the sum of an integer array      */
/*                 using ONLY pointer arithmetic. No array   */
/*                 indexing (arr[i]) is used anywhere.       */
/*                                                           */
/*   Input Format:                                           */
/*       - First line : integer n (number of elements)       */
/*       - Second line: n space-separated integers           */
/*                                                           */
/*   Output Format:                                          */
/*       - A single integer representing the sum             */
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ n ≤ 100                                         */
/*       -10000 ≤ element value ≤ 10000                      */
/*                                                           */
/*   Sample Input 1:                                         */
/*       5                                                   */
/*       1 2 3 4 5                                           */
/*                                                           */
/*   Sample Output 1:                                        */
/*       15                                                  */
/*                                                           */
/*   Sample Input 2:                                         */
/*       3                                                   */
/*       -2 0 2                                              */
/*                                                           */
/*   Sample Output 2:                                        */
/*       0                                                   */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int n;
    int arr[100];
    int *ptr = arr;      /* Pointer to the array */
    int sum = 0;

    /* Read number of elements */
    scanf("%d", &n);

    /* Read array values using pointer arithmetic */
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    /* Compute sum using ONLY pointers */
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    /* Output the result */
    printf("%d", sum);

    return 0;
}
