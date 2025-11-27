/*************************************************************/
/*                                                           */
/*   File Name   : average_elements.c                        */
/*   Author      : Param Vishwakarma                         */
/*   Description : Reads an array of float numbers and       */
/*                 computes the average using pointers.      */
/*                                                           */
/*   Input Format:                                           */
/*      - First line: integer n (number of elements)         */
/*      - Next n lines: float values                         */
/*                                                           */
/*   Output Format:                                          */
/*      Average of the elements: <value rounded to 2 decimals>*/
/*                                                           */
/*   Constraints:                                            */
/*      1 ≤ n ≤ 100                                          */
/*      0.0 ≤ element value ≤ 10^4                           */
/*                                                           */
/*   Date        : November 2025                             */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main(void)
{
    int n;
    float arr[100];
    float *ptr = arr;
    float sum = 0.0;

    /* Read number of elements */
    scanf("%d", &n);

    /* Read float values into array using pointer */
    for (int i = 0; i < n; i++) {
        scanf("%f", ptr + i);
    }

    /* Compute sum using pointer dereferencing */
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    /* Calculate average */
    float avg = sum / n;

    /* Output EXACT format */
    printf("Average of the elements: %.2f", avg);

    return 0;
}
