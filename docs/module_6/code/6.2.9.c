/*************************************************************/
/*                                                           */
/*   File Name   : access_array_pointer.c                    */
/*   Author      : Param Vishwakarma                         */
/*   Description : Prints array elements using ONLY pointer  */
/*                 arithmetic. No array indexing is used.    */
/*                                                           */
/*   Input Format:                                           */
/*       - First line : integer n (array size)               */
/*       - Second line: n space-separated integers           */
/*                                                           */
/*   Output Format:                                          */
/*       - n integers printed using pointer dereferencing    */
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ n ≤ 100                                         */
/*       -10000 ≤ element value ≤ 10000                      */
/*                                                           */
/*   Sample Input 1:                                         */
/*       3                                                   */
/*       10 20 30                                            */
/*                                                           */
/*   Sample Output 1:                                        */
/*       10 20 30                                            */
/*                                                           */
/*   Sample Input 2:                                         */
/*       4                                                   */
/*       5 10 15 20                                          */
/*                                                           */
/*   Sample Output 2:                                        */
/*       5 10 15 20                                          */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int n;
    int arr[100];
    int *ptr = arr;   /* Pointer to the array */

    /* Read array size */
    scanf("%d", &n);

    /* Read elements using pointer arithmetic */
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));   /* same as &arr[i] but pointer only */
    }

    /* Print elements using pointer dereferencing only */
    for (int i = 0; i < n; i++) {
        printf("%d", *(ptr + i));
        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}
