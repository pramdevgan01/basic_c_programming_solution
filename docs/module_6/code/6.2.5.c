/*************************************************************/
/*                                                           */
/*   File Name   : copy_array.c                              */
/*   Author      : Param Vishwakarma                         */
/*   Description : Program to copy elements of one array     */
/*                 into another using pointers.              */
/*                                                           */
/*   Input Format:                                           */
/*      - First line: integer n (array size)                 */
/*      - Next n lines: integers (array elements)            */
/*                                                           */
/*   Output Format:                                          */
/*      Source array after copying:                          */
/*      <elements with commas>                               */
/*      Destination array after copying:                     */
/*      <copied elements with commas>                        */
/*                                                           */
/*   Constraints:                                            */
/*      1 ≤ n ≤ 100                                          */
/*      Elements range: -10⁴ to 10⁴                          */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int n;
    int src[100], dest[100];
    int *pSrc = src;
    int *pDest = dest;

    /* Read size */
    scanf("%d", &n);

    /* Read source array */
    for (int i = 0; i < n; i++) {
        scanf("%d", (pSrc + i));
    }

    /* Copy values using pointers */
    for (int i = 0; i < n; i++) {
        *(pDest + i) = *(pSrc + i);
    }

    /* Output in EXACT required format */
    printf("Source array after copying: \n");
    for (int i = 0; i < n; i++) {
        printf("%d, ", *(pSrc + i));
    }

    printf("\nDestination array after copying: \n");
    for (int i = 0; i < n; i++) {
        printf("%d, ", *(pDest + i));
    }

    return 0;
}
