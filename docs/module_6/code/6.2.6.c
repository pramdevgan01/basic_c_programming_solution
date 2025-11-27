/*************************************************************/
/*                                                           */
/*   File Name   : largest_element.c                         */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to find the largest element in    */
/*                 an array using pointers.                  */
/*                                                           */
/*   Input Format:                                           */
/*      - First line: integer n (array size)                 */
/*      - Next n lines: integers (array elements)            */
/*                                                           */
/*   Output Format:                                          */
/*      Largest element in the array: <value>                */
/*                                                           */
/*   Constraints:                                            */
/*      1 ≤ n ≤ 100                                          */
/*      -10⁴ ≤ array elements ≤ 10⁴                          */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int n;
    int arr[100];
    int *ptr = arr;

    /* Read number of elements */
    scanf("%d", &n);

    /* Read array values */
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    /* Assume first element is largest */
    int largest = *ptr;

    /* Compare using pointer dereferencing */
    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    /* Output EXACT format */
    printf("Largest element in the array: %d", largest);

    return 0;
}
