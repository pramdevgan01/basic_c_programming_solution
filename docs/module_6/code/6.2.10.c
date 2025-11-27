/*************************************************************/
/*                                                           */
/*   File Name   : reverse_array_pointer.c                   */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reverses an array IN-PLACE using ONLY     */
/*                 pointer traversal. Array indexing arr[i]  */
/*                 is NOT allowed. All operations use        */
/*                 pointer arithmetic and dereferencing.     */
/*                                                           */
/*   Input Format:                                           */
/*       - First line : integer n (array size)               */
/*       - Second line: n space-separated integers           */
/*                                                           */
/*   Output Format:                                          */
/*       - Reversed array printed in one line (space-separated)*/
/*                                                           */
/*   Constraints:                                            */
/*       1 ≤ n ≤ 100                                         */
/*       -10000 ≤ element value ≤ 10000                      */
/*                                                           */
/*   Sample Input 1:                                         */
/*       4                                                   */
/*       1 2 3 4                                             */
/*                                                           */
/*   Sample Output 1:                                        */
/*       4 3 2 1                                             */
/*                                                           */
/*   Sample Input 2:                                         */
/*       3                                                   */
/*       5 10 15                                             */
/*                                                           */
/*   Sample Output 2:                                        */
/*       15 10 5                                             */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int n;
    int arr[100];
    int *start = arr;
    int *end;

    /* Read array size */
    scanf("%d", &n);

    /* Read elements using pointer arithmetic */
    for (int i = 0; i < n; i++) {
        scanf("%d", (start + i));
    }

    /* Reverse the array using pointer variables only */
    end = start + (n - 1);

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    /* Reset pointer to beginning of array to print result */
    start = arr;

    /* Print reversed array */
    for (int i = 0; i < n; i++) {
        printf("%d", *(start + i));
        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}
